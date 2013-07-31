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
    /*fstream archivo, archivo2;
    archivo.open(ss.str().c_str(), ios::out | ios::binary | ios::app);
    if(archivo.is_open())
    {
        cout << "[Archivo]:  El archivo de examenes esta abierto." << endl;
    }
    else
    {
        cout << "[FALLO]: El archivo de examenes no se pudo abrir." << endl;
    }*/
    fstream archivo2;
    archivo2.open("bin\\reg.edta",ios::out | ios::binary | ios::app);
    if(archivo2.is_open())
    {
        cout << "[Archivo]: El archivo de los registros esta abierto" << endl;
    }
    else
    {
        cout << "[FALLO]: El archivo de los registros no se pudo abrir." << endl;
    }
    archivo2.close();
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
    fstream archivo;
    QStringList lista;
    ss << "bin\\examenes.edta";
    archivo.open(ss.str().c_str(), ios::in | ios::binary);


    if(archivo.is_open())
    {
        archivo.seekg(0,ios_base::end);
        int sizeArchivo = archivo.tellg();
        archivo.seekg(0,ios_base::beg);
        while(archivo.tellg() < sizeArchivo)
        {            
            nombresExamenes t;
            archivo.read(reinterpret_cast<char *> (&t),sizeof(t));

            lista << t.nombre;
        }

        archivo.close();
    }
    return lista;
}

bool manejadorArchivos::agregarRegistro(string nombre, string apellido,int edad, string examen)
{
    if(nombre.length() > 20 || apellido.length() > 20 )
    {
        return false;
    }
    else
    {
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
    ss << "bin\\regs\\" <<fecha.c_str();
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
            char* dt=ctime(&reg.now);
            ss << reg.nombre << "," << reg.apellido << "," << reg.examen << "," << dt;
            lista << ss.str().c_str();
            listadelistas.push_back(lista);
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
