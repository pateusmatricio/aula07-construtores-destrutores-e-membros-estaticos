/*
* @file 	sapo.cpp
* @brief	sapos que vão correr nas corridas de sapos
* @author	Mateus Patricio
* @since 	17/03/2018
* @date		22/03/2018
* @sa 		
*/

#include "sapo.hpp"
#include <time.h>
#include <stdlib.h>

Sapo::Sapo(int i, int d){
	setId(i);
	setDistanciaMaxima(d);
	quantidadePulos = 0;
	distanciaPercorrida = 0;	
}

int Sapo::getId(){
	return id;
}

void Sapo::setId(int i){
	id = i;
}

int Sapo::getDistanciaPercorrida(){
	return distanciaPercorrida;
}

void Sapo::setDistanciaPercorrida(int d){
	distanciaPercorrida = d;
}

int Sapo::getDistanciaMaxima(){
	return distanciaMaxima;
}

void Sapo::setDistanciaMaxima(int dm){
	distanciaMaxima = dm;
}

int Sapo::getQuantidadePulos(){
	return quantidadePulos;
}

void Sapo::setQuantidadePulos(int q){
	quantidadePulos = q;
}

/* @brief ato ou efeito do sapo */
void Sapo::pular(){
	srand(time(NULL));

	int i = rand() % getDistanciaMaxima();

	setQuantidadePulos(getQuantidadePulos() + 1);
	setDistanciaPercorrida(getDistanciaPercorrida() + i);


}