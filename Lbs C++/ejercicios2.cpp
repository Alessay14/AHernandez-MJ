#include <iostream>

using namespace std;

int main() {
    // nombrar las  variables
    float velocidad, tiempo, distancia;

    
    cout << "Ingrese la velocidad promedio (en km/h): ";
    cin >> velocidad;

    cout << "Ingrese el tiempo de viaje (en horas): ";
    cin >> tiempo;

    
    distancia = velocidad * tiempo;

    // ense►4ar cual fue la distancia total recorrida
    cout << "La distancia total recorrida es: " << distancia << "kilometros" << endl;

    return 0;
}