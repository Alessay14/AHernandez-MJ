#include <iostream>
using namespace std;

int main() {
    // aplicar variables
    int cantidadEntradas;
    char esMiembro;
    double precioEntrada = 50.0; 

    // Solicitar que ingrese los datos de la compra
    cout << "Cuantas entradas desea comprar? ";
    cin >> cantidadEntradas;
    cout << "Es usted miembro del teatro? (Si/No): ";
    cin >> esMiembro;

    // hacer los calculos para determinar el valor 
    double precioTotal = cantidadEntradas * precioEntrada;

    // Verificar las reglas para aplicar descuentos
    if (esMiembro == 'S' || esMiembro == 's') 
    { //aplicar desceunto de 10%
        precioTotal -= precioTotal * 0.10;
    } 
    else 
    { 
        if (cantidadEntradas > 10) 
        { 
            // Aplicar descuento del 5%
            precioTotal -= precioTotal * 0.05;
        }
    }
    cout << "El dinero a cobrar es: $" << precioTotal << endl;

    return 0;
}