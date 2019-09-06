/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *
 *     Estudiante:  Noel Muñoz Ramírez
 *
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <sstream>
#include "Empleado.h"
using::std::string;

//Constructor sin Parametros
Empleado::Empleado() {
	setNombre(" ");
	setNumero(0);
	setAnnioExp(0);
	setSalario(0);
	setID(0);
}

//Constructor con Parametros
Empleado::Empleado(std::string nombre, int numero, int annioExp, float salario, int id, bool bandera) : nombre(nombre),
numero(numero), annioExp(annioExp), salario(salario), id(id), bandera(bandera) {}

//Destructor
Empleado::~Empleado() {}

//Metodos Privados
float Empleado::aumentarSalario() {
	if ((annioExp == 1) && (annioExp < 3)) {
		return (salario * 0.2);
	}
	else {
		if (annioExp <= 3) {
			return (salario * 0.5);
		}
	}
}

void Empleado::revision(bool* banderaRev) {}

std::string Empleado::detalleEmpleado() {}


