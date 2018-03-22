//corrida.cpp
#include <iostream>
#include "corrida.hpp"

void corrida(Sapo a, Sapo b, Sapo c, int percurso){
	while(a.getDistanciaPercorrida() < percurso && b.getDistanciaPercorrida() < percurso && c.getDistanciaPercorrida() < percurso ){
		a.pular();
		b.pular();
		c.pular();
	}

	if(a.getDistanciaPercorrida() >= percurso){
		std::cout << "o sapo vencedor é o sapo " << a.getId() << ", com " << a.getQuantidadePulos() << " pulos, totalizando " << a.getDistanciaPercorrida()	<< " unidades de medida " << std::endl; 
		b.setDistanciaPercorrida(0); 
		c.setDistanciaPercorrida(0); 
	} 
	if(b.getDistanciaPercorrida() >= percurso){
		std::cout << "o sapo vencedor é o sapo " << b.getId() << ", com " << b.getQuantidadePulos() << " pulos, totalizando " << b.getDistanciaPercorrida()	<< " unidades de medida " << std::endl; 
		a.setDistanciaPercorrida(0); 
		c.setDistanciaPercorrida(0); 
	} 
	if(c.getDistanciaPercorrida() >= percurso){
		std::cout << "o sapo vencedor é o sapo " << c.getId() << ", com " << c.getQuantidadePulos() << " pulos, totalizando " << c.getDistanciaPercorrida()	<< " unidades de medida " << std::endl;
		a.setDistanciaPercorrida(0); 
		b.setDistanciaPercorrida(0); 
	}
}