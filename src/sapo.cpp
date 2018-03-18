#include <time.h>
#include "sapo.hpp"

class Sapo{
	public:
	
		srand(time(NULL));

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

		int Sapo::getQuantidadePulos(){
			return quantidadePulos;
		}

		void Sapo::setQuantidadePulos(int q){
			quantidadePulos = q;
		}

		int Sapo::getDistanciaMaxima(){
			return distanciaMaxima;
		}

		void Sapo::setDistanciaMaxima(int dm){
			distanciaMaxima = dm;
		}

		void pular(){
			i = rand() % getDistanciaMaxima();

			quantidadePulos++;
			setDistanciaPercorrida(getDistanciaPercorrida + i);
			
		}
}
