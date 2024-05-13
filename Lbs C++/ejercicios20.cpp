#include <iostream>

using namespace std;

float SueldoVentas(float ventas) {
    float porcentajeComision = 0.15;
    float bonoAdicional = 125;
    float sueldoBase = ventas * porcentajeComision;
    float sueldoTotal;

    if (ventas >= 1500) {
        sueldoTotal = sueldoBase + bonoAdicional;
    } else {
        sueldoTotal = sueldoBase;
    }

    return sueldoTotal;
}

int main() {
    float ventasRealizadas;

    cout << "Ingrese el monto total de ventas realizadas por el vendedor: $";
    cin >> ventasRealizadas;

    float sueldoTotal = SueldoVentas(ventasRealizadas);
    cout << "El sueldo a pagar al vendedor es: $" << sueldoTotal << endl;

    return 0;
}