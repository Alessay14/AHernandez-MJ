#include <iostream>
#include <string>
using namespace std;

int main() {
    // poner nombre de variable 
    string estadoTarjeta;

    // Solicitar  el estado de tarjeta de la biblioteca
    cout << "La tarjeta de biblioteca esta activa? (activa/inactiva): ";
    cin >> estadoTarjeta;

    // Verificar si la tarjeta está activa
    if (estadoTarjeta == "activa") 
    {
        // Mostrar mensaje de que el usuario puede realizar préstamos
        cout << "La tarjeta esta activa. Puede realizar prestamos." << endl;
    } 
    else if (estadoTarjeta == "inactiva") 
    {
        cout << "La tarjeta no esta activa. No se permiten prestamos." << endl;
    } else {
        cout << "Entrada no valida. Por favor, responda con 'activa' o 'inactiva'." << endl;
    }

    return 0;
}