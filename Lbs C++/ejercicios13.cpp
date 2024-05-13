#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int sumaCalificaciones = 0;
    float promedio;
    string nombreEstudiante;
    int calificacionEstudiante;
    int numeroEstudiantes;

    cout << "Ingrese la cantidad total de estudiantes en el grupo: ";
    cin >> numeroEstudiantes;
    
    if (numeroEstudiantes > 10 || numeroEstudiantes <= 0) 
    {
        cout << "La cantidad de estudiantes no es valida. Debe ser un número entre 1 y 10." << endl;
        return 1;
    }
    for (int i = 1; i <= numeroEstudiantes; ++i) 
    {
        cout << "Estudiante #" << i << ":" << endl;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;
        cout << "Ingrese la puntuacion de " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante; 
        sumaCalificaciones += calificacionEstudiante;
    }

    promedio = static_cast<float>(sumaCalificaciones) / numeroEstudiantes;
    cout << "El promedio general de las calificaciones del grupo es: " << promedio << endl;

    return 0;
}