#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numero,resultado;

    cout<<"ingrese numero del 1 al 100: ";
    cin >> numero;

    int arreglo[numero];
    int suma = 0;

    for (int i = 0; i < numero; i++)
    {
        cout<<"ingrese el numero que va a ser sumado con los otros: ";
        cin>>arreglo[i];
    }

    for (int i = 0; i < numero; i++)
    {
        suma += arreglo[i];
    }
    resultado = suma;

    cout<<"el resultado de los numeros entrado es: "<<resultado;

    return 0;
}
