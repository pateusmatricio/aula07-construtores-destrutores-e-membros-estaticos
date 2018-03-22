#ifndef SAPO_HPP
#define SAPO_HPP

class Sapo{
		int id;
		int distanciaPercorrida;
		int quantidadePulos;
		int distanciaMaxima;

	public:
		static int distanicaTotalCorrida;

		int getId();

		void setId(int i);

		int getDistanciaPercorrida();

		void setDistanciaPercorrida(int d);

		int getQuantidadePulos();

		void setQuantidadePulos(int q);

		void pular();
};

#endif

