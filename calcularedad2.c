/*
Autor: Rafael Miranda Jimenez
Fecha: 19_10_2021
*/

/*Realizar un codigo que determine si el usuario es mayor o menor de edad dependiendo del año de nacimiento*/

#include <stdio.h>

int main() {//Inicio metodo principal
	//Declaracion de variables
	int fecha_Nacimiento;
	int fecha_actual = 2021;
	int diferencia =0;
	
	printf ("Digite su año de nacimiento: ");
	scanf ("%d", &fecha_Nacimiento);
	
	diferencia = (fecha_actual - fecha_Nacimiento);

	if ( diferencia >=18){
		printf ("%s %d %s", "El usuario tiene", diferencia,"por lo tanto es mayor de edad");	
	}
	else {
		printf ("%s %d %s", "El usuario tiene", diferencia,"por lo tanto es menor de edad");
	}

}//Fin metodo principal

