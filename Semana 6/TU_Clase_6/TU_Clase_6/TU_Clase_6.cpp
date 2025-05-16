#include <iostream>
#include <string>
using namespace std;
bool esPrimo(int n);

int main(){
    int number = 0;
    std::cout << "Ingrese un numero" << std::endl;
    std::cin >> number;
    if (esPrimo(number) == false) {
        cout << "El numero no es primo" << endl;
    }
    else {
        cout << "El numero es primo" << endl;
    }
    return 0;
}
/*
Escribe una función que reciba un número entero positivo y determine si es un número primo.
Devuelve True si lo es y False en caso contrario.
*/
/*
n= 5
1 2 3 4 5

*/
bool esPrimo(int n) {
    if (n < 0) {
        return false;
    }
    for (int i = 1;i <= n;i++) {
        if (n % i == 0 ) {
            return false;
        }
    }
    return true;
}