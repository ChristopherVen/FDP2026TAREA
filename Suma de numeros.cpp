#include <iostream>

using namespace std;

int main() {
    int numo;
    int suma = 0;

    do {
        cout << "Ingresa un numero (0 para salir): ";
        cin >> numo;
        suma += numo; 
    } while (numo != 0);

    cout << "La suma total es: " << suma << endl;

    return 0;
}