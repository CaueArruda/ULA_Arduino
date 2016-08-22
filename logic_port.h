#ifndef LOGIC_PORT_H_INCLUDED
#define LOGIC_PORT_H_INCLUDED
//#include "logic_sum.h"

class Logic_Port {
private:
	bool ent1 = 0, ent2 = 0, carry = 0;

public:
	Logic_Port (void);		//construtor default

	void set_ent(bool a, bool b);  	//seta a entrada da porta logica
	bool soma();			//usa a porta logica como soma de bits
	bool return_carry();		//retorna o valor de carry


};
#endif