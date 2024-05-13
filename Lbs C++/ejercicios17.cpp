#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    int contador = 0;
    while (contador < 10) {
        cout << "Hola " <<nombre<<endl;
        contador++;
    }

    return 0;
}