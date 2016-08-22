#ifndef LOGIC_SUM_H_INCLUDED
#define LOGIC_SUM_H_INCLUDED

#include "logic_port.h"
#include "byte.h"

class Logic_Sum{
private:
	Logic_Port _soma; 		//cria uma porta logica
	bool oflow=0;
	caue::Byte c;
public:
	//Logic_Sum();			//construtor default

	Logic_Sum(caue::Byte a, caue::Byte b);	//construtor com parametros
	
	caue::Byte return_soma();
	caue::Byte somador(caue::Byte a, caue::Byte b);	// faz a soma bit por bit setando os valores de entrada na porta logica
	//bool carry(caue::Byte a, caue::Byte b);
	//bool carry(caue::Byte a, caue::Byte b);
	bool ovflow();

};
#endif