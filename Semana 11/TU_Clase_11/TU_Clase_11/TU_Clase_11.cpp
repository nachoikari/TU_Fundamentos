#include <iostream>
#include "Auto.h"
int main(){
    //(string pModelo, string pAnio, string pMarca);
    Auto obj1 = Auto("Corolla", "2020", "Toyota");
    cout<< obj1.toString();
    //std::cout << "Hello World!\n";
}
