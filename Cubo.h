//arquivo cubo.h
#include<stdio.h>
#include<stdlib.h>
#include"Cubo.c"

typedef struct cubo Cubo;

void cubo_libera(Cubo* x);

float cubo_acesso(Cubo* x);

void cubo_atribui(Cubo* x,float l);

float cubo_area(Cubo* x);

float cubo_volume(Cubo* x);
