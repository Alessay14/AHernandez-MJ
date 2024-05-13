#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout <<"Ingrese el tipo de instrumento: "<<endl;
    cout <<"1. guitarra "<<endl;
    cout <<"2. piano "<<endl;
    cout <<"3. bateria "<<endl;
    cout <<"3. violin "<<endl;
    cout <<"4. flauta "<<endl;
    cout <<"---------------------------------"<<endl;
    cout <<"por favor seleccione su instrumento deseado: ";
    cin >> opcion;


    switch (opcion)
    {
    case 1: // guitarra
        cout << "el descuento de la guitarra es del 10%."<<endl;       
        break;
    case 2: // piano
        cout <<"el descuento de el piano es del 15%."<<endl;
        break;

    case 3: //bateria
        cout <<"el descuento de la bateria es del 20%."<<endl;
        break;

    case 4: // violin
        cout <<"el descuento de el violin es del 12%."<<endl;
        break;

    case 5: // flauta
        cout <<"el descuento de la flauta es de 8%."<<endl;
        break;
    
    default: //en caso del que usuario entregue una opcion no valida
        cout <<"instrumento no reconocido. intente de nuevo"<<endl;
    }

    return 0;

}
