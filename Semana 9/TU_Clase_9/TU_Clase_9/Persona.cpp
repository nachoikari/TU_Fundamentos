#include "Persona.h"

Persona::Persona() {
	this->nombre = "Nombre Indefinido";
	this->edad = 0;
	this->apellido = "Apellido indefinido";
}

Persona::Persona(string pNombre, string pApellido, int pEdad){
	this->nombre = pNombre;
	this->apellido = pApellido;
	this->edad = pEdad;
}

void Persona::mostrarInfo(){
	cout << this->nombre << " " << this->apellido << endl;
}

void Persona::setNombre(string pNombre){
	this->nombre = pNombre;
}

string Persona::getNombre(){
	return this->nombre;
}

Persona::~Persona()
{
}
