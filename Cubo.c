//arquivo cubo.c
#include<stdio.h>
#include<stdlib.h>
#include "Cubo.h"

typedef struct cubo{
	float l;
}Cubo;

Cubo* cubo_cria(float l){
	Cubo* x = (Cubo*) malloc(sizeof(Cubo));
	if(x != NULL){
		x->l = l;
	}
	return x;
}

void cubo_libera(Cubo* x){
	free(x);
}

float cubo_acesso(Cubo* x){
	return x->l = l;
}

void cubo_atribui(Cubo* x, float l){
	x->l = l;
}

float cubo_area(Cubo* x){
	float area = 6 * x->l * x->l;
	return area;
}

float cubo_volume(Cubo* x){
	float volume = x->l * x->l * x->l;
	return volume;
}
