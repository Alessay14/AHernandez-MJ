#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout<<"ingrese la temperatura en grados celcius: ";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout <<"La temperatura entrada en grados celcius es equivalente a "<<fahrenheit<< " grados fahrenheit."<<endl;
    
    return 0;
}


