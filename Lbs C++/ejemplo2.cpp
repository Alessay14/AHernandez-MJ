#include <iostream>
#include <string>
using namespace std;

int main()
{
    int entero;
    float flotante;
    char character;
    string cadena;

    cout <<"Ingrese un numero entero: ";
    cin >> entero;

    cout << "Ingrese un numero flotante: ";
    cin >> flotante;

    cout << "Ingrese un caracter: ";
    cin >> character;

    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore(); // ignorar el '\n' dejado por // cin >> character
    getline(cin, cadena); // lee una linea de texto desde la // entrada estandar (cin) y la almacena en la variable cadena 

    cout << "----------------------------" << endl;
    cout << "El numero de tipo entero entrado fue: " << entero << endl;
    cout << "El numero de tipo float entrado fue: " << flotante << endl;
    cout << "El numero de tipo caracter entrado fue: " << character << endl;
    cout << "El numero de tipo cadena entrado fue: " << cadena << endl;

    return 0;
}