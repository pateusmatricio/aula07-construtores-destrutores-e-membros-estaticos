#include <iostream>
#include "sapo.hpp"
#include "corrida.hpp"

int percurso = 25;

int main(){

	Sapo a(1,3);
	Sapo b(2,2);
	Sapo c(3,4);

	corrida(a,b,c, percurso);

	return 0;
}
