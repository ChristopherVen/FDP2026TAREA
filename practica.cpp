/*#include<iostream>
using namespace std;

int main()
{
int usuario ,n;

cout<< "Bienvenido,Ingrese tu edad "<< endl;
cin>>n;

usuario>=18;
switch (usuario)
{
case 1:cout<<"Eres categoria G"<<endl;break;
case 2:cout<<"Eres categoria PG"<<endl;break;
case 3:cout<<"Eres categoria PG-13"<<endl;break;
case 4:cout<<"Eres categoria RÑ"<<endl;break;


default:cout<<"No es apto para ver ";break;
}


    return 0;
}*/











#include <iostream>
using namespace std;

int main() 
{
    int edad;
    int opcionCategoria = 0;

    cout << "Bienvenido. Ingrese su edad: " << endl;
    cin >> edad;

    // Clasificamos la edad en una opción para el switch
    if (edad >= 0 && edad < 10) {
        opcionCategoria = 1; // Niños pequeños
    } else if (edad >= 10 && edad < 13) {
        opcionCategoria = 2; // Antes de la adolescencia
    } else if (edad >= 13 && edad < 18) {
        opcionCategoria = 3; // Adolescentes
    } else if (edad >= 18) {
        opcionCategoria = 4; // Adultos
    }

    // Ahora el switch evalúa la opción asignada
    switch (opcionCategoria) 
    {
        case 1:
            cout << "Te recomendamos la categoria: G (Todo publico)" << endl;
            break;
        case 2:
            cout << "Te recomendamos la categoria: PG (Sugerido con compania de un adulto)" << endl;
            break;
        case 3:
            cout << "Te recomendamos la categoria: PG-13 (Mayores de 13 anos)" << endl;
            break;
        case 4:
            cout << "Te recomendamos la categoria: R (Restringido para mayores de edad)" << endl;
            break;
        default:
            cout << "Edad no valida." << endl;
            break;
    }

    return 0;
}