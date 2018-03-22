#ifndef SAPO_H
#define SAPO_H

#include <time.h>

class Sapo{

	int id;
	int distanciaPercorrida;
	int quantidadePulos;
	int distanciaMaxima;

	public:
		static int distanicaTotalCorrida;

		Sapo(int i, int d);

		int getId();

		void setId(int i);

		int getDistanciaPercorrida();

		void setDistanciaPercorrida(int d);

		int getDistanciaMaxima();

		void setDistanciaMaxima(int dm);

		int getQuantidadePulos();

		void setQuantidadePulos(int q);

		void pular();
};

#endif

