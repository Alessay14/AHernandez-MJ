#include <iostream>

using namespace std;

int main() {

    double temperatura, suma = 0.0;
    int contador = 0;
     
    do {
        cout << "Ingrese la temperatura del mes " << contador + 1 << ": ";
        cin >> temperatura;
        
        
        while (temperatura < -100 || temperatura > 100) {
            cout << "Error: La temperatura ingresada está fuera del rango válido (-100 a 100)." << endl;
            cout << "Ingrese nuevamente la temperatura del mes " << contador + 1 << ": ";
            cin >> temperatura;
        }
        
        suma += temperatura; 
        contador++; 
    } while (contador < 12); 
    double promedio = suma / 12.0;
    cout << "El promedio de las 12 temperaturas es: " << promedio << endl;
    
    return 0;
}