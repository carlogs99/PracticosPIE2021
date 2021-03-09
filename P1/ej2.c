#include <stdio.h>
#include <stdlib.h>

//Programa que simula la tirada de un dado.
int main() {

	//Defino el rango de los números aleatorios a generar.
	int min = 0;
	int max = 6;
	
	//Define el "seed" para generar la aleatoriedad en base al tiempo 		actual.
	int seed = time(NULL);
	srand(seed);	
	
	//Calcula e imprime en el rango.
	//Observar que el rand() devuelve un numero muy grande.
	//Pensar que x % y solo podra devolver algo menor que y. 
	printf("%d \n", rand() % (max-min+1) + min);
	return 0;
}
