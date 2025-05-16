#ifndef  ESTUDIANTES_H
#define ESTUDIANTES_H
#include <string>

using std::string;

class Estudiante{
private:
	string nombre;
	double califiFinal;
public:
	Estudiante();
	Estudiante(string pNombre, double pCalificacion);
	string toString();
	void setName(string pNombre);
	void setCalificacion(double pCalificacion);
};
#endif 