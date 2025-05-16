#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include "Estudiante.h"
using std::cout;
using std::cin;
using std::endl;
int const NUM_ESTUDIANTE = 5;
class Curso{
private:
	Estudiante estudiantes[NUM_ESTUDIANTE];
	string cursoNombre;
public:
	Curso();
	Curso(string pNombre);
	void agregarEstudiantes();
};
#endif
