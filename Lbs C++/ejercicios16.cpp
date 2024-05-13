#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    for (int i = 0; i < 10; ++i) {
        cout << "Hola " << nombre << endl;
    }

    return 0;
}