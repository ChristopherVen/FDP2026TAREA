#include<iostream>
using namespace std;

int main(){
int a=0;
int b=1;
int contador=0;
int n;
int siguiente;

cout<<"Bienvenido"<<endl;
cout<<"Ingressar el numero"<<endl;
cin>>n;

while (contador<n)
{

cout<<a<<" ";

siguiente = a+b;  
a=b;
b=siguiente;
contador++;
}


return 0;
}