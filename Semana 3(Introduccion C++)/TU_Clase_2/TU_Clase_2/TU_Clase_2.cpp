#include <iostream>
#include <string>

using namespace std;

int main(){
    int x = 8;
    int i = 0;
    while ( x == 8) {
        cout << "i = " << i << endl;
        cout << "Hola" << endl;
        cout << "Hola" << endl;
        cout << "Hola" << endl;
        cout << "Hola" << endl;
        cout << "Hola" << endl;
        cout << "Hola" << endl;
        i++;
        if (i == 2) {
            x = -1;
        }
    }
    return 0;
}

/*
Operadores aritmeticos
+ - * / 
== != >

*/
/*
Operadores logicos
 ^ || ! == != 

*/
/*
    int entero = 0;//2 bytes

    bool uno_cero = false;
    std::string cadena = "Hola";
    float con_decimal = 1.0;
    double doble = 1.0;//mas grande que el float

    char caracter = 'A';//codigo ascii
*/
/*
if(condicion)
*/
/*
while(condicion)

*/
/*
cout << "Hola" << endl;
    int age = 0;
    bool bandera = false;
    cin >> age;
    if ( (age == 10)) {
        cout << "Tiene de 10 anios" << endl;
    }
    else {
        cout << "No tiene de 10 anios" << endl;
    }

    int option = -1;
    cout << "Ingrese la opcion" << endl;
    cin >> option;
    switch (option) {
        case 1:
            cout << "Option =" << 1 << endl;

        case 2:
            cout << "Option =" << 2 << endl;
            break;
        case 3:
            cout << "Option =" << 3 << endl;
            break;
    }



*/