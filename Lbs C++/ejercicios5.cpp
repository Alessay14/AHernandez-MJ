#include <iostream>

using namespace std;

int main() {
    // nombrar las variables
    float base, altura, area;

    
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    // Calcular el área del rectángulo
    area = base * altura;

    
    cout << "El area del rectángulo es: " << area << endl;

    return 0;
}