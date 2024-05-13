#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    
    if (n < 1 || n > 100) {
        cout << "El tamaño del arreglo debe estar entre 1 y 100." << endl;
        return 1;
    }
    
    int arreglo[n];
    
    cout << "Ingrese los elementos del arreglo separados por espacios: ";
    for (int i = 0; i < n; ++i) {
        cin >> arreglo[i];
    }
    
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += arreglo[i];
    }
    
    cout << "La suma de los elementos del arreglo es: " << suma << endl;
    
    return 0; 
}