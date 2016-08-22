#include <Arduino.h>
#include <Wire.h>
#include "byte.h"
#include "digital_pin.h"
#include "logic_sum.h"

using namespace caue;
 
void setup()
{
  //Pinos ligados aos pinos 1, 2, 3 e 4 do teclado - Linhas
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  //LEDS
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  //BUZER
  pinMode(9, OUTPUT);
  //Pinos ligados aos pinos 5, 6, 7 e 8 do teclado - Colunas
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
   
}
 Byte a(0,0,0,0,0,0,0,0);
 Byte b(0,0,0,0,0,0,0,0);
 //Byte c();
 bool overflow = 0;
//bool mybits[4] = {0,0,0,0};

void loop()
{
    for (int ti = 3; ti<5; ti++){
    
        //Alterna o estado dos pinos das linhas
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        //digitalWrite(5, LOW);
        //digitalWrite(6, LOW);
        digitalWrite(ti, HIGH);
        //Verifica se alguma tecla da coluna 1 foi pressionada

        for (int k = 10; k<=13; k++){
            int aux = 3;
            if (digitalRead(k) == HIGH){
                if (ti == 3){
                    a.set_binario(aux, 1);
                    //while(digitalRead(k) == HIGH){}
                }if (ti == 4){
                    b.set_binario(aux, 1);
                    //while(digitalRead(k) == HIGH){}
                }
            }
            aux-- ;
        } //// COMPARAR COM READ_BOTONS ANTIGO PARA CHECAR ESSE FOR DO K
    }
    Logic_Sum somar(a, b); //somar
    Byte c(somar.return_soma());
    overflow = somar.ovflow();
    //overflow = somar.carry(a, b);

    
    //Digital_pin led1(5, c.ret_bit(0)); //liga led
    digitalWrite(5, c.ret_bit(0)==1?HIGH:LOW);
    digitalWrite(6, c.ret_bit(1)==1?HIGH:LOW);
    digitalWrite(7, c.ret_bit(2)==1?HIGH:LOW);
    //digitalWrite(8, c.ret_bit(3)==1?HIGH:LOW); 
    //Digital_pin led2(6, c.ret_bit(1));
    //Digital_pin led3(7, c.ret_bit(2));
    //Digital_pin led4(8, c.ret_bit(3));
    //Digital_pin buzer(9, overflow);  // BUZER

    //delay(0);
}
 
