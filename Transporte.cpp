#include<iostream>
using namespace std;

int main()
{
int transporte;
float Bus,Taxi,Metro;
cout<< "Bienvenido a TransporteSV"<<endl;
cout<<"Que tipo de transporte deseas hoy"<<endl;
cout<< "Bus (1)"<<endl;
cout<< "Taxi (2)"<<endl;
cout<< "Metro (3)"<<endl;

cin>>transporte;

switch (transporte)
{
case 1:
    cout<<"Bus, el precio del Bus es de: $0.25"<<endl;break;
case 2:
    cout<<"Taxi, el precio del Taxi es de: $15.0"<<endl;break;
case 3:
    cout<<"Metro, el precio del Bus es de: $0.76"<<endl;break;

default:
cout<<"Gracias por utilizar nuestra app"<<endl;
    break;
}

    return 0;
}