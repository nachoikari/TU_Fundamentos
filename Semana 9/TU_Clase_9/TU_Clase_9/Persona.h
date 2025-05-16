#pragma once
#include <string>
#include <iostream>
using namespace std;
class Persona{
private:
	string nombre;
	string apellido;
	int edad;
public:
	Persona();
	Persona(string pNombre, string pApellido, int pEdad);
	void mostrarInfo();
	void setNombre(string pNombre);
	string getNombre();
	~Persona();
};

