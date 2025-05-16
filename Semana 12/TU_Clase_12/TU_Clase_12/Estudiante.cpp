#include "Estudiante.h"

Estudiante::Estudiante(){
	this->nombre = "No tiene";
	this->califiFinal = 0.0;
}

Estudiante::Estudiante(string pNombre, double pCalificacion){
	this->califiFinal = pCalificacion;
	this->nombre = pNombre;
}

string Estudiante::toString(){
	return "Nombre: " + this->nombre + 
		", calificacion final: " + std::to_string(this->califiFinal);
}

void Estudiante::setName(string pNombre){
	this->nombre = pNombre;
}

void Estudiante::setCalificacion(double pCalificacion){
	this->califiFinal = pCalificacion;
}
