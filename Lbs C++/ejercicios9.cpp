#include <iostream>
#include <string>

int main() {
    // Solicitar el estado de la tarjeta
    std::string estadoTarjeta;
    std::cout << "Ingrese el estado de la tarjeta (activa/inactiva): ";
    std::cin >> estadoTarjeta;
    
        if (estadoTarjeta == "activa") {
        std::cout << "La tarjeta esta activa. Puede realizar prestamos." << std::endl;
    } else if (estadoTarjeta == "inactiva") {
        std::cout << "La tarjeta no está activa. No se permiten prestamos." << std::endl;
    } else {
        std::cout << "Estado de tarjeta no valido." << std::endl;
    }
    
    return 0;
}