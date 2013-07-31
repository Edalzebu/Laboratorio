#ifndef MANEJADORARCHIVOS_H
#define MANEJADORARCHIVOS_H

#include <fstream>
#include <direct.h>
#include <windows.h>
#include <iostream>
#include <sstream>
#include <QStringList>
#include <ctime>
#include <QDate>

using namespace std;

struct nombresExamenes
{
    char nombre[20];
};
struct registros
{
    char nombre[30];
    char apellido[30];
    int edad;
    char examen[20];
    time_t now;
};
struct usuarios
{
    char login[20];
    char password[20];
};
struct camposExamen
{
    char nombre[20];
};

class manejadorArchivos
{
public:
    manejadorArchivos();
    void checkingArch();
    QList<QStringList> getAdministradores();
    bool agregarAdministrador(string usuario, string password);
    void agregarExamen(string nombre, QStringList campos);
    QStringList getExamenes();
    bool agregarRegistro(string nombre, string apellido, int edad, string examen);
    QList<QStringList> getRegistros(string fecha);
    QStringList getCamposExamen(string examen);
    bool dirExists(const std::string &dirName_in);

};

#endif // MANEJADORARCHIVOS_H
