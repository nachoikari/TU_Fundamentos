#include "Auto.h"

Auto::Auto(){
	this->modelo = "Indefinido";
	this->anio = "Indefinido";
	this->marca = "Indefinido";
}

Auto::Auto(string pModelo, string pAnio, string pMarca){
	this->modelo = pModelo;
	this->anio = pAnio;
	this->marca = pMarca;
}

string Auto::toString(){
	return "Marca: " + this->marca + ", Modelo: "+ this->modelo + ", Anio: "+this->anio;
}

Auto::~Auto(){

}

