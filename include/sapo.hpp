#ifndef SAPO_HPP
#define SAPO_HPP

//Sapos são anfíbios que gostam de apostar corridas e pular e têm uma id
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

		//modifica a distancia percorrida e o numero de pulos para a corrida
		void pular();
};

#endif

