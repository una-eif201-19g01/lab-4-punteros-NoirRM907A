/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
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


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>
class Empleado {
protected:
	//Atributos
	std::string nombre;
	int numero;
	int annioExp;
	float salario;
	int id;
	bool bandera;

private:
	//Metodos Privados
	float aumentarSalario();
	void revision(bool*);

public:
	//Constructores
	Empleado();
	Empleado(std::string, int, int, float, int, bool);

	//Destructores
	~Empleado();

	//Metodos Set
	void setNombre(std::string);
	void setNumero(int);
	void setAnnioExp(int);
	void setSalario(float);
	void setID(int);
	void setBandera(bool);

	//Metodos Get
	std::string getNombre();
	int getNumero();
	int getAnnioExp();
	float getSalario();
	int getID();
	bool getBandera();

	//Metodo Publico
	std::string detalleEmpleado();

	////crear funcion numeros random

};




#endif //EMPLEADOPUNTEROS_EMPLEADO_H
