#include <iostream>

using namespace std;

int main()
{
    float numero; // variable de tipo float 
    int entero;  // variable de tipo entero

    cout << "ingrese un numero: ";
    cin >> numero;

    entero = numero; // extraccion parte entera del numero entrado 

    try 
    {
        if(numero / entero) //condicion si el numero ingresado no es igual a un entero 
        {
            throw "El numero entero ingresado es.";
        } 

        cout << "el numero entero ingresado es: "<<numero << endl;
    }
    catch(const char* mensaje)
    {
        cout << "excepcion capturada"<<endl;
    }

    return 0;
}