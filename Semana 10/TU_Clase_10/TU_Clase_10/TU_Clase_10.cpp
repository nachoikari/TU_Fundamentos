// TU_Clase_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void hola();
void adios();

int main(){
    hola();
}
void hola() {
    cout << "Hola" << endl;
    adios();
}


void adios() {
    cout << "Chao" << endl;
}