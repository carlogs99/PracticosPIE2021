#include <stdio.h>
#include <math.h>


//Calcula la normal gaussiana en un punto.
int main() {
	//Parametros de entrada de la normal.
	float sigma = 4;
	float x = 2;
	float mu = 1;
	
	//Calculo la normal.
	float normal = (1/(sigma*sqrt(2*M_PI)))*exp(-0.5*((x-mu)/sigma)*((x-mu)/sigma));
	
	//Imprimo. Observar que hay que usar %f en lugar de %d.
	printf("%f \n", normal);
	return 0;
}
