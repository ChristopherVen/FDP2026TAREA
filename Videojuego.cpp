#include<iostream>
using namespace std;

int main()
{
int puntaje;

cout<<"Por favor Danos tu valoracion "<< endl;
cin>>puntaje;

switch(puntaje)
{
    case 1: cout<<"Muy bajo"<<endl;break;
    case 2: cout<<"Muy Alo"<<endl;break;
    case 3: cout<<"Muy Medio"<<endl;break;
    case 4: cout<<"Muy Superior"<<endl;break;
    case 5: cout<<"Muy Excelente"<<endl;break;
    default:cout << "Edad no valida." << endl;break;
            


}
    return 0;
}