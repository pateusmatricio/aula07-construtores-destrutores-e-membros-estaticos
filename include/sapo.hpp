#ifndef SAPO_HPP

#define SAPO_HPP

#endif


class Sapo{
	private:
		int id;
		int distanciaPercorrida;
		int quantidadePulos;
		int distanciaMaxima;

	public:
		static distanicaTotalCorrida;

		int Sapo::getId();

		void Sapo::setId(int i);

		int Sapo::getDistanciaPercorrida();

		void Sapo::setDistanciaPercorrida(int d);

		int Sapo::getQuantidadePulos();

		void Sapo::setQuantidadePulos(int q);

		void pular();
}
