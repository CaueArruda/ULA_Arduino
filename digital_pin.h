#include <Arduino.h>
#include <Wire.h>


class Digital_pin{
private:
	bool mode_led1 = 0;

public:
	Digital_pin(int pin, bool mode_led);
	void set_pin(int pin, bool mode_led);
	bool return_mode_led();

};