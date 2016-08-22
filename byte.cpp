#include "byte.h"
//#include "logic_port.h"
namespace caue{
Byte::Byte (){
	for(int i =0; i<=7; i++){
	binario[i] = 0;
	}
}
Byte::Byte(int number_int){
	//Converter::convD2B(number_int);
	Byte::convD2B(number_int);

}
Byte::Byte(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h){
	binario[0] = h;
	binario[1] = g;
	binario[2] = f;
	binario[3] = e;
	binario[4] = d;
	binario[5] = c;
	binario[6] = b;
	binario[7] = a;

}

void Byte::set_binario(int i, bool z){
	binario[i] = z;
}

bool Byte::show_binario(int i){return binario[i];}


/*
void Byte::print_byte(void){
	//std::cout << "Valor em bits: ";
	for (int i = 7; i>=0 ; i--){
		std::cout << show_binario(i);
	}
	std::cout<<"\n\n";
}

void Byte::print_overflow(){
	std::cout << "Overflow: 00000001 ";
}
*/
void Byte::convD2B(int number_int){
    int k, i;

    for (i = 0; i <= 8 ; i++){
        k = number_int >> i;
        if (k & 1){
        	binario[i] = 1;
        }else{
	binario[i] = 0;
        }
    }
}

bool Byte::ret_bit(int g){return binario[g];}

//void Byte::return_overflow(){return }

// Byte::return_byte(){return binario;}
}