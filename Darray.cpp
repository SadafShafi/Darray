#include "Arduino.h"
#include "MyLib.h"

MyLib::MyLib(int K){

    _churr = K;
}

void MyLib::PrintHello(){

    Serial.println("Khello my friend\n Here is value of _churr >> ");
    Serial.print(_churr);

}

void MyLib::PrintMore(){

    Serial.println("What else should I write now\n");
}