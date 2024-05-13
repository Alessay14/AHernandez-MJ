#include <iostream>
using namespace std;

int main() 
{
    // aplicar varaibles
    double totalCompra;
    char tieneMembresia;

 
    cout << "Ingrese el total de la compra: $";
    cin >> totalCompra;
// verificar si tiene membresia 
    cout << "¿Tiene membresia VIP? (Si/No): ";
    cin >> tieneMembresia;

    // Verificar si se cumple para aplicar el descuento
    if (totalCompra >= 150 || tieneMembresia == 'si' || tieneMembresia == 'si') 
    
    {
        cout << "Se aplicara un descuento especial.";
    }
     else 
    {
        cout << "Lo sentimos, no cumple con las condiciones para aplicar un descuento especial.";
    }

    return 0;
}