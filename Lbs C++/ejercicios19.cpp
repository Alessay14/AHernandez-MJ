#include <iostream>

using namespace std;

int main() {
    
    double temperatura, suma = 0.0;
   
    for (int contador = 0; contador < 12; ++contador) {
        cout << "Ingrese la temperatura del mes " << contador + 1 << ": ";
        cin >> temperatura;

        while (temperatura < -100 || temperatura > 100) {
            cout << "Error: La temperatura ingresada está fuera del rango válido (-100 a 100)." << endl;
            cout << "Ingrese nuevamente la temperatura del mes " << contador + 1 << ": ";
            cin >> temperatura;
        }
        suma += temperatura; 
    }
    double promedio = suma / 12.0;
    cout << "El promedio de las 12 temperaturas es: " << promedio << endl;
    
    return 0;
}