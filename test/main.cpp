#include <iostream>


//#include "sapo.hpp"
#include "sapo.h"

int percurso = 25;

int main(){

	Sapo a(1,2);
	Sapo b(2,3);
	Sapo c(3,4);

	while(a.getDistanciaPercorrida() < percurso && b.getDistanciaPercorrida() < percurso && c.getDistanciaPercorrida() < percurso ){
		a.pular();
		b.pular();
		c.pular();
	}

	if(a.getDistanciaPercorrida() >= percurso){
		std::cout << "o sapo vencedor é o sapo " << a.getId() << ", com " << a.getQuantidadePulos() << " pulos, totalizando " << a.getDistanciaPercorrida()	<< " unidades de medida " << std::endl; 
		return 0; 
	} 
	if(b.getDistanciaPercorrida() >= percurso){
		std::cout << "o sapo vencedor é o sapo " << b.getId() << ", com " << b.getQuantidadePulos() << " pulos, totalizando " << b.getDistanciaPercorrida()	<< " unidades de medida " << std::endl; 
		return 0; 
	} 
	if(c.getDistanciaPercorrida() >= percurso){
		std::cout << "o sapo vencedor é o sapo " << c.getId() << ", com " << c.getQuantidadePulos() << " pulos, totalizando " << c.getDistanciaPercorrida()	<< " unidades de medida " << std::endl;
		return 0; 	
	} 	
}
