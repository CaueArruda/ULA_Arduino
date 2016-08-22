//#include "logic_sum.h"
#include "logic_sum.h"



//Logic_Sum::Logic_Sum(){}

Logic_Sum::Logic_Sum(caue::Byte a, caue::Byte b){
	c = Logic_Sum::somador(a, b);
	
}
caue::Byte Logic_Sum::somador(caue::Byte a, caue::Byte b){
	caue::Byte d;
	for (int i = 0; i<=7; i++){
		
		_soma.set_ent(a.ret_bit(i), b.ret_bit(i));
		d.set_binario(i, _soma.soma());
		oflow = _soma.return_carry();
		//c.set_overflow(_soma.return_carry());
	}
	return d;
	//c.print_byte(); 
}
caue::Byte Logic_Sum::return_soma(){return c;}


bool Logic_Sum::ovflow(){return oflow;}