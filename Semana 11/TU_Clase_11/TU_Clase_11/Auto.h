#pragma once
#include <string>
using namespace std;
class Auto{
private:
	string marca;
	string modelo;
	string anio;
public:
	Auto();
	Auto(string pModelo, string pAnio, string pMarca);
	string toString();
	~Auto();
};

