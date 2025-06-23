#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

const int FILAS = 4;
const int COLUMNAS = 4;

// Función que llena una matriz con valores aleatorios entre 1 y 100
void llenarMatrizAleatoria(int matriz[FILAS][COLUMNAS]) {
    // Semilla para que los números cambien cada vez que se ejecuta el programa
    srand(time(NULL));

    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz[i][j] = rand() % 100 + 1;  // Números del 1 al 100
        }
    }
}

// Función auxiliar para mostrar la matriz
void mostrarMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void x(int& b) {
    cout << &b << endl;
    b = 6;
}


//Hallar el mayor elemento de una matriz
void hallarMayor(int matriz[FILAS][COLUMNAS]) {
    int n = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0;j < COLUMNAS; j++) {
            if (matriz[i][j] > n ) {

            }
        }
    }
}
//Hallar la moda de una matriz. TAREA MORALLLLLLL
void moda(int matriz[FILAS][COLUMNAS]) {
    int numero = 0;
    int contador = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0;j < COLUMNAS; j++) {

        }
    }
}

void intercambiarFilas(int matriz[FILAS][COLUMNAS], int filaX, int filaY) {
    for (int i = 0;i < COLUMNAS;i++) {
        int temp = matriz[filaX][i]; 
        matriz[filaX][i] = matriz[filaY][i];
        matriz[filaY][i] = temp;
    }
}
/*
Verificar si una matriz es identidad: Es identidad si todos sus elementos son 0 excepto
los de la diagonal principal, que deben ser 1
*/
bool identidad(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0;j < COLUMNAS; j++) {
            if (matriz[i][j] != 1 && i == j) {
                return false;
            }
            if (matriz[i][j] != 0 && i != j) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matriz[FILAS][COLUMNAS];

    llenarMatrizAleatoria(matriz);
    cout << "Matriz generada con números aleatorios:" << endl;
    mostrarMatriz(matriz);
    

    return 0;
}