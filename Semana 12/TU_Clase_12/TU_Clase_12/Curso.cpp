#include "Curso.h"
Curso::Curso(){
	this->cursoNombre = "Indefinido";
}

Curso::Curso(string pNombre){
	this->cursoNombre = pNombre;
}

void Curso::agregarEstudiantes(){
	string nombre = " ";
	double calificacion = 0.0;
	for (int i = 0; i < NUM_ESTUDIANTE; i++) {
		cout << "Ingrese	 el nombre del estudiante" << endl;
		cin >> nombre;
		cout << "Ingrese la calificacion del estudiante" << endl;
		cin >> calificacion;
		this->estudiantes[i].setName(nombre);
		this->estudiantes[i].setCalificacion(calificacion);
	}
}
