/*
* @file 	main.cpp
* @brief	corrida de sapos com sapos correndo em c++
* @author	Mateus Patricio
* @since 	17/03/2018
* @date		22/03/2018
* @sa 		sageyo sasageyo shinzo wo sasageyo
*/

#include <iostream>
#include "sapo.hpp"
#include "corrida.hpp"

//@brief tamanho da corrida!
int percurso = 25;

int main(){

	/* @brief Sapos criados arbitrariamente*/
	Sapo a(1,3);
	Sapo b(2,2);
	Sapo c(3,4);

	/* @brief corrida dos sapos propriamente dita*/
	corrida(a,b,c, percurso);

	return 0;
}
