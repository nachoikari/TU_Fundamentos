#include <iostream>
#include "Persona.h"


int main(){
    Persona obj = Persona();
    obj.mostrarInfo();
    Persona obj2 = Persona("Isaac", "Artavia", 21);
    obj2.mostrarInfo();
    int x = 0;

    return 0;
}
