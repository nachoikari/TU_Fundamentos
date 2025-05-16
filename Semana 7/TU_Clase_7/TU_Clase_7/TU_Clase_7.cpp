#include <iostream>

using namespace std;
void menu();
int suma(int a, int b);
int main(){
    
    /*std::cout << "Hello World!\n";
    int edad = 0;
    int numero = 7;
    edad = numero + 1;
    cout << "El valor de edad es: " << edad << endl;
    */
    /*
    int edad = 18;
    if (edad > 30) {
        cout << "Es mayor de 30" << endl;
    }
    else if (edad > 18) {
        cout << "Es mayor de edad" << endl;
    }
    else {
        cout << "Es menor de edad" << endl;
    }*/

    /*bool var1 = false, var2 = true;
    if (!var1) {
        cout << "Paso a verdadera";
    }*/
    
    /*int opcion = 2;
    switch (opcion) {
    case 1:
        cout << "Caso 1" << endl;
        break;
    case 2:
        cout << "Caso 2" << endl;
        break;
    default:
        cout << "No hay caso" << endl;
    }*/
    
    /*
    bool var1 = true;
    int contador = 1;
    while (var1) {
        cout << "numero de iteracion: " << contador << endl;
        if (contador == 5) {
            var1 = false;
        }
        contador++;
    }*/
    
    /*for (int i = 0; i <= 5;i++) {
        cout << "numero de iteracion: " << i << endl;
    }*/
    //menu();
    cout << suma(5, 2);
    return 0;
}

void menu() {
    cout << "Opcion 1-tal cosa \n2-otra cosa\n no hay mas" << endl;
}

int suma(int a, int b) {
    
    int resultado = a + b;
    return resultado;
}