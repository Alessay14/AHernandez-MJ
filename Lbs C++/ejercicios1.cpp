#include <iostream>

using namespace std;

int main() {
    // nombrar las variables
    float examen1, examen2, examen3, examen4;
    float promedio;
    
    cout << "Ingrese la calificación del primer examen: ";
    cin >> examen1;

    cout << "Ingrese la calificación del segundo examen: ";
    cin >> examen2;

    cout << "Ingrese la calificación del tercer examen: ";
    cin >> examen3;

    cout << "Ingrese la calificación del cuarto examen: ";
    cin >> examen4;

    // Calcular promedio de examenes 
    promedio = (examen1 + examen2 + examen3 + examen4) / 4.0;

    
    cout << "El promedio final es: " << promedio << endl;

    return 0;
}