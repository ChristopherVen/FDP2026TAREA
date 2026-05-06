#include<iostream>
using namespace std;

int main()
{
int usuario,lunes,martes,miercoles,jueves,viernes,sabado,domingo;

cout<<"Bienvenido,Elige la opcion del dia"<<endl;
cout<< "lunes 1"<< endl; 
cout<< "Martes 2"<< endl; 
cout<< "Miercoles 3"<< endl; 
cout<< "Jueves 4"<< endl; 
cout<< "Viernes 5"<< endl; 
cout<< "Sabado 6"<< endl; 
cout<< "Domingo 7"<< endl; 
cin>>usuario;

switch (usuario)
{
    
case 1:
    cout<< "7:00 a.m a 8:40 a.m  ------------- Matematica"<<endl;
    cout<<"9:00 a.m a 10:40 a.m --------------- Calculo 1 "<<endl;
    cout<< "11:00 a.m a 12:00 p.m ------------- Hora libre"<<endl;
    cout<<"1:00 p.m a 2:00 p.m --------------- Hora libre "<<endl;
    cout<<"3:00 p.m a 4:00 p.m --------------- Hora libre "<<endl;
    cout<<"5:00 p.m a 6:00 p.m --------------- Hora libre "<<endl;
    break;

case 2:
    cout<< "7:00 a.m a 8:40 a.m  ------------- Hora libre"<<endl;
    cout<<"9:00 a.m a 10:40 a.m --------------- Hora libre"<<endl;
    cout<< "11:00 a.m a 12:00 p.m ------------- Lenguaje"<<endl;
    cout<<"1:00 p.m a 2:00 p.m --------------- Hora libre "<<endl;
    cout<<"3:00 p.m a 4:00 p.m --------------- Historia "<<endl;
    cout<<"5:00 p.m a 6:00 p.m --------------- Hora libre "<<endl;
    break;

case 3:
    cout<< "7:00 a.m a 8:40 a.m  ------------- Matematica"<<endl;
    cout<<"9:00 a.m a 10:40 a.m --------------- Calculo 1 "<<endl;
    cout<< "11:00 a.m a 12:00 p.m ------------- Hora libre"<<endl;
    cout<<"1:00 p.m a 2:00 p.m --------------- Hora libre "<<endl;
    cout<<"3:00 p.m a 4:00 p.m --------------- Hora libre "<<endl;
    cout<<"5:00 p.m a 6:00 p.m --------------- Hora libre "<<endl;
    break;

case 4:
cout<< "7:00 a.m a 8:40 a.m  ------------- Hora libre"<<endl;
cout<<"9:00 a.m a 10:40 a.m --------------- Hora libre"<<endl;
cout<< "11:00 a.m a 12:00 p.m ------------- Lenguaje"<<endl;
cout<<"1:00 p.m a 2:00 p.m --------------- Hora libre "<<endl;
cout<<"3:00 p.m a 4:00 p.m --------------- Historia "<<endl;
cout<<"5:00 p.m a 6:00 p.m --------------- Hora libre "<<endl;
break;

case 5:
    cout<< "7:00 a.m a 8:40 a.m  ------------- Hora libre"<<endl;
    cout<<"9:00 a.m a 10:40 a.m --------------- Hora libre"<<endl;
    cout<< "11:00 a.m a 12:00 p.m ------------- Lenguaje"<<endl;
    cout<<"1:00 p.m a 2:00 p.m --------------- Hora libre "<<endl;
    cout<<"3:00 p.m a 4:00 p.m --------------- Hora libre "<<endl;
    cout<<"5:00 p.m a 6:00 p.m --------------- Hora libre "<<endl;
    break;

    case 6:
    cout<< "7:00 a.m a 8:40 a.m  ------------- Hora libre"<<endl;
    cout<<"9:00 a.m a 10:40 a.m --------------- Laboratorio"<<endl;
    cout<< "11:00 a.m a 12:00 p.m ------------- Hora libre"<<endl;
    cout<<"1:00 p.m a 2:00 p.m --------------- Dialogo "<<endl;
    cout<<"3:00 p.m a 4:00 p.m --------------- Historia "<<endl;
    cout<<"5:00 p.m a 6:00 p.m --------------- Hora libre "<<endl;
    break;

    case 7:
    cout<< "7:00 a.m a 8:40 a.m  ------------- Hora libre"<<endl;
    cout<<"9:00 a.m a 10:40 a.m --------------- Hora libre"<<endl;
    cout<< "11:00 a.m a 12:00 p.m ------------- Hora libre"<<endl;
    cout<<"1:00 p.m a 2:00 p.m --------------- Hora libre "<<endl;
    cout<<"3:00 p.m a 4:00 p.m --------------- Historia "<<endl;
    cout<<"5:00 p.m a 6:00 p.m --------------- Hora libre "<<endl;
    break;


default: 
cout<<"Ingrese de nuevo los datos"<<endl;
    break;
}


return 0;
}