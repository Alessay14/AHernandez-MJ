#include <iostream>

using namespace std;

int main() {
    // nombrar las variables
    float base, altura, area, perimetro;

    
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    // Calcular el área del rectángulo
    area = base * altura;

    // Calcular el perímetro del rectángulo
    perimetro = 2 * base + 2 * altura;

    
    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}