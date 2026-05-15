#include<iostream>
using namespace std;

int main(){
    int menu;

    do
    {
    cout<<"Bienvenido"<<endl;
    cout<<"Selecciones la opcion:"<<endl;
    cout<<"1-Repetir menu"<<endl;
    cout<<"2-Salir"<<endl;
    cin>>menu;

    switch (menu)
    {
    case 1:
        cout<<"REPETIR DE NUEVO :)"<<endl;
        break;

    default:
    cout<<"SALIDA";
        break;
    }
    } while (menu != 2);

    return 0;
}