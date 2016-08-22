#include "digital_pin.h"


Digital_pin::Digital_pin(int pin, bool mode_led){
	set_pin(pin, mode_led);

}

void Digital_pin::set_pin(int pin, bool mode_led){
	if (mode_led == 1){
		pinMode(pin, HIGH);
	}else {pinMode(pin, LOW);}

	mode_led1 = mode_led;
}

bool Digital_pin::return_mode_led(){return mode_led1;}