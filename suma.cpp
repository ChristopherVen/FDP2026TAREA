#include <iostream>
using namespace std;

int main() {
    int numero;
    int i = 2;     
    int suma = 0;

    cout << "Ingresa los numeros: ";
    cin >> numero;

    while (i <= numero) {
        suma += i;  
        i += 2;     
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}