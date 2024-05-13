#include <iostream>
#include <string>

int main() {
    // Solicitar el estado de la tarjeta
    std::string estadoTarjeta;
    std::cout << "Ingrese el estado de la tarjeta (activa/inactiva): ";
    std::cin >> estadoTarjeta;
    
    std::string mensaje = (estadoTarjeta == "activa") ? "La tarjeta está activa. Puede realizar préstamos." : "La tarjeta no está activa. No se permiten préstamos.";

    std::cout << mensaje << std::endl;
    
    return 0;
}