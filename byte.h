#ifndef BYTE_H_INCLUDED
#define BYTE_H_INCLUDED

//#include <iostream>

//#include <array>
//#include "converter.h"
namespace caue{

class Byte {
private:
	//std::array< bool, 8>binario;
	bool binario[8];
	//bool overflow = 0;

public:
	Byte (); 			//construtor default
	Byte(int number_int); 		// construtor com parametro inteiro
	Byte(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h); //construtor byte direto
	bool show_binario(int i); 	//retorna o binario

	//void print_byte();      		// escreve o byte
	//void print_overflow();  		// escreve o estado de overflow
	void set_binario(int i, bool z) ; 	//altera uma posicao do byte
	
	//caue::Byte return_byte();
	
	bool ret_bit(int g);	
	void convD2B(int number_int);  // converte decimal para binario



};

}

#endif