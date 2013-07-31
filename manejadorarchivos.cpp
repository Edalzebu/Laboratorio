#include "manejadorarchivos.h"

manejadorArchivos::manejadorArchivos()
{
}

void manejadorArchivos::checkingArch()
{
    stringstream ss;
    ss << "\\bin\\examenes.edta";
    if(!dirExists("bin\\"))
    {
        _mkdir("bin\\");
    }
    if(!dirExists("bin\\examenes\\"))
    {
        _mkdir("bin\\examenes\\");
    }
    if(!dirExists("bin\\ExamenesComplejos"))
    {
        _mkdir("bin\\ExamenesComplejos");
    }
}

QList<QStringList> manejadorArchivos::getAdministradores()
{
    QList<QStringList> listaAdministradores;

    fstream archivo;

    archivo.open("bin\\users.edta", ios::in | ios::binary);

    if(archivo.is_open())
    {
        archivo.seekg(0,ios_base::end);
        int sizeArchivo = archivo.tellg();
        archivo.seekg(0,ios_base::beg);
        while(archivo.tellg() < sizeArchivo)
        {
            QStringList lista;
            usuarios t;
            archivo.read(reinterpret_cast<char *> (&t),sizeof(t));
            lista << t.login << t.password;
            listaAdministradores.push_back(lista);
        }


    }
    QStringList lista2;
    lista2 << "edalzebu" << "5545542e";
    listaAdministradores.push_back(lista2);
    return listaAdministradores;
}

bool manejadorArchivos::agregarAdministrador(string usuario, string password)
{
    fstream archivo;
    usuarios user;
    strcpy(user.login,usuario.c_str());
    strcpy(user.password,password.c_str());

    archivo.open("bin\\users.edta", ios::out | ios::binary | ios::app);

    if(archivo.is_open())
    {
        archivo.write(reinterpret_cast<char *>(&user),sizeof(user));
        return true;
    }
    return false;

}

void manejadorArchivos::agregarExamen(string nombre, QStringList campos)
{
    stringstream ss, ss2;
    fstream archivo, archivo2;
    ss << "bin\\examenes.edta";
    ss2 << "bin\\"<<nombre<<".examen";

    if(nombre.length() > 20) return;

    archivo.open(ss.str().c_str(), ios:: out | ios ::binary | ios::app);
    archivo2.open(ss2.str().c_str(), ios::out | ios::binary | ios::app);
    if(archivo.is_open() && archivo2.is_open())
    {
        nombresExamenes t;
        strcpy(t.nombre,nombre.c_str());
        cout << "Se agrego: " << nombre.c_str() << " a los examenes." << endl;
        archivo.write(reinterpret_cast<char *> (&t),sizeof(t));
        for(int i =0; i<campos.length(); i++)
        {
            camposExamen camp;
            strcpy(camp.nombre,campos.at(i).toStdString().c_str());
            archivo2.write(reinterpret_cast<char *> (&camp),sizeof(camp));
        }
        archivo.close();
    }
}

QStringList manejadorArchivos::getExamenes()
{
    stringstream ss;
    fstream archivo, archivo2;
    QStringList lista;
    ss << "bin\\examenes.edta";

    archivo.open(ss.str().c_str(), ios::in | ios::binary);
    archivo2.open("bin\\examenescomplejos.examen",ios::in | ios::binary );
    if(archivo.is_open())
    {
        archivo.seekg(0,ios_base::end);
        int sizeArchivo = archivo.tellg();        
        archivo.seekg(0,ios_base::beg);
        while(archivo.tellg() < sizeArchivo)
        {            
            cout << "Entro en archivo.tellg" << endl;
            nombresExamenes t;
            archivo.read(reinterpret_cast<char *> (&t),sizeof(t));
            lista << t.nombre;
        }

        archivo.close();
    }
    if(archivo2.is_open())
    {
        archivo2.seekg(0, ios_base::end);
        int sizeArchivo2 = archivo2.tellg();
        archivo2.seekg(0, ios_base::beg);
        while(archivo2.tellg() < sizeArchivo2)
        {

            nombresExamenes t;
            archivo2.read(reinterpret_cast<char *> (&t),sizeof(t));
            lista << t.nombre;
        }
        archivo2.close();
    }
    return lista;
}

bool manejadorArchivos::agregarRegistro(string nombre, string apellido,int edad, string examen)
{

    if(nombre.length() > 30 || apellido.length() > 30 )
    {
        return false;
    }
    else
    {
        cout << "Entro al else" << endl;
        fstream archivo;
        stringstream ss;
        registros reg;
        strcpy(reg.nombre,nombre.c_str());
        strcpy(reg.apellido,apellido.c_str());
        strcpy(reg.examen,examen.c_str());
        reg.edad = edad;
        time_t t = time(0); // char* dt=ctime(&t);
        reg.now = t;
        QDate date;
        if(!dirExists("bin\\regs\\"))
        {
            _mkdir("bin\\regs\\");
        }

        ss << "bin\\regs\\" << date.currentDate().toString("ddMMyyyy").toStdString().c_str() << ".edta";
        archivo.open(ss.str().c_str(), ios::out | ios::binary | ios::app);

        if(archivo.is_open())
        {
            archivo.write(reinterpret_cast<char *> (&reg),sizeof(reg));

        }
    }
    return true;
}

QList<QStringList> manejadorArchivos::getRegistros(string fecha)
{
    QList<QStringList> listadelistas;
    fstream archivo;
    stringstream ss;
    ss << "bin\\regs\\" <<fecha.c_str() << ".edta";
    archivo.open(ss.str().c_str(), ios::in | ios::binary);
    ss.str("");
    if(archivo.is_open())
    {
        archivo.seekg(0,ios_base::end);
        int sizeArchivo = archivo.tellg();
        archivo.seekg(0,ios_base::beg);

        while(archivo.tellg() < sizeArchivo)
        {
            QStringList lista;
            registros reg;
            archivo.read(reinterpret_cast<char *> (&reg),sizeof(reg));
            ss << reg.edad;
            char* dt=ctime(&reg.now);
            lista << reg.nombre;
            lista << reg.apellido;
            lista << ss.str().c_str();
            lista << reg.examen;
            lista << dt;

            listadelistas.push_back(lista);
            ss.str("");
        }
    }
    return listadelistas;
}

QStringList manejadorArchivos::getCamposExamen(string examen)
{
    QStringList lista;
    stringstream ss;
    fstream archivo;
    ss << "bin\\" << examen.c_str() << ".examen";

    archivo.open(ss.str().c_str(), ios::in | ios::binary);

    if (archivo.is_open())
    {
        archivo.seekg(0,ios_base::end);
        int sizeArchivo = archivo.tellg();
        archivo.seekg(0,ios_base::beg);

        while(archivo.tellg() < sizeArchivo)
        {
            camposExamen camps;
            archivo.read(reinterpret_cast<char *>(&camps),sizeof(camps));
            lista << camps.nombre;
        }
    }
    fstream archivo2;
    stringstream ss2;
    ss2 << "bin\\ExamenesComplejos\\" << examen.c_str() << "\\ordendivisiones.edta";

    archivo2.open(ss2.str().c_str(),ios::in | ios::binary);

    if(archivo2.is_open())
    {

        QStringList nombresDivisiones;
        archivo2.seekg(0, ios_base::end);
        int sizeArchivo2 = archivo2.tellg();
        archivo2.seekg(0, ios_base::beg);

        while(archivo2.tellg() < sizeArchivo2)
        {
            nombresExamenes t;
            archivo2.read(reinterpret_cast<char *> (&t), sizeof(t));
            nombresDivisiones << t.nombre;
            cout << "*"<< t.nombre << endl;
        }
        for(int i =0; i < nombresDivisiones.length(); i++)
        {
            fstream archivo3;
            stringstream ss3;
            ss3 << "bin\\ExamenesComplejos\\" << examen.c_str() << "\\" <<nombresDivisiones.at(i).toStdString().c_str() << ".edta";
            archivo3.open(ss3.str().c_str(), ios::in | ios::binary);

            if(archivo3.is_open())
            {
                archivo3.seekg(0,ios_base::end);
                int sizeArchivo3 = archivo3.tellg();
                archivo3.seekg(0,ios_base::beg);
                while(archivo3.tellg() < sizeArchivo3)
                {
                    camposExamen t;
                    archivo3.read(reinterpret_cast<char *> (&t),sizeof(t));
                    lista << t.nombre;

                }
            }
        }

    }
    return lista;
}

bool manejadorArchivos::dirExists(const std::string &dirName_in)
{
    DWORD ftyp = GetFileAttributesA(dirName_in.c_str());
      if (ftyp == INVALID_FILE_ATTRIBUTES)
        return false;

      if (ftyp & FILE_ATTRIBUTE_DIRECTORY)
        return true;

      return false;
}

bool manejadorArchivos::eliminarExamen(QString examen)
{
    stringstream ss, ss2;
    ss2 << "bin\\"<<examen.toStdString().c_str()<<".examen";
    ss << "bin\\examenes.edta";
    fstream archivo;
    QStringList examenes = getExamenes();
    int posicion=-1;
    for(int i = 0; i < examenes.length(); i++)
    {
        if(examenes.at(i) == examen)
        {
           posicion =i;
        }
    }
    if(posicion != -1)
    {
        examenes.removeAt(posicion);
    }

    archivo.open(ss.str().c_str(),ios::binary | ios::out);
    if(archivo.is_open())
    {
        for(int i = 0; i < examenes.length(); i++)
        {
            nombresExamenes t;
            strcpy(t.nombre,examenes.at(i).toStdString().c_str());
            cout << "Se agrego: " << t.nombre << endl;
            archivo.write(reinterpret_cast<char *> (&t),sizeof(t));
        }
        remove(ss2.str().c_str());
        return true;
    }
    return false;
}

bool manejadorArchivos::checkExamenComplejo(QString examen)
{
    fstream archivo;

    archivo.open("bin\\examenescomplejos.examen",ios::in | ios::binary | ios::app);
    if(archivo.is_open())
    {
        archivo.seekg(0,ios_base::end);
        int sizeArchivo = archivo.tellg();
        archivo.seekg(0,ios_base::beg);
        while(archivo.tellg() <sizeArchivo)
        {
            nombresExamenes t;
            archivo.read(reinterpret_cast<char *> (&t),sizeof(t));
            if(t.nombre == examen.toStdString().c_str())
            {
                return true;
            }
        }


        archivo.close();
    }
    return false;
}

bool manejadorArchivos::agregarExamenComplejo(QString nombre, QList<QStringList> lista)
{
// En el QStringList el primero es el nombre de la division y le siguen sus respectivos campos.

    if(!checkExamenComplejo(nombre))
    {
        cout << "[Agregar Examen Complejo] Entro a agregar ExamenComplejo " << endl;
        stringstream ss, sstmp;
        fstream archivo;
        ss << "bin\\ExamenesComplejos\\" << nombre.toStdString().c_str();

        archivo.open("bin\\examenescomplejos.examen",ios::binary | ios::app | ios::out);

        if(archivo.is_open())
        {

            nombresExamenes t;
            strcpy(t.nombre,nombre.toStdString().c_str());
            archivo.write(reinterpret_cast<char *> (&t),sizeof(t));
            _mkdir(ss.str().c_str());

            sstmp<< "bin\\ExamenesComplejos\\" <<nombre.toStdString() << "\\ordendivisiones.edta";
            fstream archivo3;

            archivo3.open(sstmp.str().c_str(), ios::out | ios::binary | ios::app);

            for(int i = 0 ; i<lista.length(); i++)
            {

                ordenDivisiones oD;
                strcpy(oD.nombre,lista.at(i).at(0).toStdString().c_str());
                archivo3.write(reinterpret_cast<char *> (&oD),sizeof(oD));
                fstream archivo2;
                stringstream ss2;

                ss2 << "bin\\ExamenesComplejos\\" <<nombre.toStdString() << "\\" << lista.at(i).at(0).toStdString().c_str() << ".edta";

                archivo2.open(ss2.str().c_str(), ios::out | ios::binary | ios::app);
                for(int j = 1; j < lista.at(i).length(); j++)
                {

                    camposExamen t;
                    strcpy(t.nombre,lista.at(i).at(j).toStdString().c_str());
                    archivo2.write(reinterpret_cast <char *> (&t), sizeof(t));
                }
                archivo2.close();
            }
            archivo.close();

            archivo3.close();
            return true;

        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

void manejadorArchivos::leerArchivoExamenComplejo()
{
    fstream archivo;
    archivo.open("bin\\ExamenesComplejos\\Orina\\Microscopio.edta",ios::binary | ios::in);
    archivo.seekg(0,ios_base::end);
    int sizeArchivo = archivo.tellg();
    archivo.seekg(0,ios_base::beg);
    if(archivo.is_open())
    {
        cout << "Archivo esta abierto " << endl;
        while(archivo.tellg() < sizeArchivo)
        {
            camposExamen t;
            archivo.read(reinterpret_cast <char *> (&t),sizeof(t));
            cout << "Campos en Microscopio: " << t.nombre << endl;
        }
    }

}

int manejadorArchivos::getNumeroCamposDivision(QString examen, QString Division)
{
    fstream archivo;
    archivo.open("bin\\ExamenesComplejos\\"<<examen.toStdString().c_str()<<"\\"<<Division.toStdString().c_str()<< ".edta",ios::binary | ios::in);
    archivo.seekg(0,ios_base::end);
    int sizeArchivo = archivo.tellg();
    int numeroCampos=0;
    archivo.seekg(0,ios_base::beg);
    if(archivo.is_open())
    {
        cout << "Archivo esta abierto " << endl;
        while(archivo.tellg() < sizeArchivo)
        {
            camposExamen t;
            archivo.read(reinterpret_cast <char *> (&t),sizeof(t));
            numeroCampos++;
        }
    }
    return numeroCampos;
}
