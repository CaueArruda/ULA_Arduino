#include "logic_port.h"

Logic_Port::Logic_Port(){
//	ent1 = 0;
//	ent2 = 0;
}
void Logic_Port::set_ent(bool a, bool b){
	ent1 = a;
	ent2 = b;

}


bool Logic_Port::return_carry(){ return carry; }


bool Logic_Port::soma(){

	bool result = (ent1^ent2^carry);  //condicao xor
	carry = (ent1&carry|ent2&carry|ent1&ent2);
	//bool reset_carry(carry);
	return result;
}


