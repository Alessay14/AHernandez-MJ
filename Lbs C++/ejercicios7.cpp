#include <iostream>

using namespace std;

int main() {
    
    int years_nacimiento, years_actual, edad;


    cout << "Ingrese el año de nacimiento: ";
    cin >> years_nacimiento;

    cout << "Ingrese el año actual: ";
    cin >> years_actual;

    
    edad = years_actual - years_nacimiento;

    
    cout << "La edad aproximada es: " << edad << " años" << endl;

    return 0;
}