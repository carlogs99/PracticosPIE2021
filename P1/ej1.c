#include <stdio.h>

int main() {
	//Bienvenida al usuario.
	printf("Vamos a realizar la operacion modulo: x MOD y. \n");
	
	//Ingreso numeros y los guardo en las variables correspondientes.
	printf("Ingrese primer numero (x): \n");
	int x;
	scanf("%d", &x);
	printf("Y el segundo (y): \n");
	int y;
	scanf("%d", &y);
	
	//Hago calculos correspondientes.
	int k = x/y;
	int z = x - k*y;
	
	//Imprimo resultado.
	printf("El resultado de %d modulo %d es %d.\n", x, y, z);
}
