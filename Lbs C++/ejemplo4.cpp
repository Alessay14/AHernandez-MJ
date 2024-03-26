#include <iostream>
using namespace std;

int main()
{
    //definir variables
    double radio, area;
    const double PI = 3.14;

    cout<< "ingrese la medida del radio: ";
    cin >> radio;
    
    area = PI * radio * radio;

    cout << " El area del circulo es: "<<area<<endl;

    return 0;
}