#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout <<"bienvenido a Johanna's cafe: "<<endl;
    cout <<"menu"<<endl;
    cout <<"1. cafe "<<endl;
    cout <<"2. Te "<<endl;
    cout <<"3. Chocolate Caliente "<<endl;
    cout <<"3. Jugo de naranja "<<endl;
    cout <<"---------------------------------"<<endl;
    cout <<"porfavor selecciona tu bebida: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //cafe
        cout << "el precio del cafe es $2"<<endl;
        break;
    
    case 2: //Te
        cout << "El precio del Te es $1.5"<<endl;
        break;
    
    case 3: //Chocolate Caliente
        cout <<" El precio del chocolate caliente es $2.5"<<endl;
        break;
    
    case 4: //Jugo de naranja
        cout <<" El precio del jugo de naranja es $3"<<endl;
        break;

    default: // en caso de que el usuario ingrese una opcion no valida
        cout <<" Opcion NO valida. Por Favor , selecciona uuna bebida del menu"<<endl;
    
    }

    return 0;

}