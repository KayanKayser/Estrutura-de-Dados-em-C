#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"Cubo.h"

int main(){
	setlocale(LC_ALL,"portuguese");
	float area, volume, y;
	Cubo* x1;
	printf("Digite o tamanho do lado: ");
	scanf("%f", &y);
	x1 = cubo_cria(y);
	area = cubo_area(x1);
	printf("A área do cubo é: %f\n", area);
	volume = cubo_volume(x1);
	printf("O volume do cubo é: %f\n", volume);
	return 0;
}
