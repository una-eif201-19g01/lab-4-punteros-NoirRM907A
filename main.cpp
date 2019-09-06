#include <iostream>
#include "Empleado.h"
#include <time.h> 

int main() {
	srand((unsigned)time(NULL));

    Empleado empleado[3];

    empleado[0].setNombre("Mike");
    empleado[0].setAnnioExp(2);
    empleado[0].setSalario(1200000);

    return 0;
}