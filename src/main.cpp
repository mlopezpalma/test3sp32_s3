#include <Arduino.h>

#define LED_BUILTIN 2
void setup(){

Serial.begin(115200);
 pinMode(LED_BUILTIN, OUTPUT);

}
void loop(){
 Serial.println("ON");
 digitalWrite(LED_BUILTIN, HIGH);
 delay(500);
Serial.println("OFF");
digitalWrite(LED_BUILTIN, LOW);
 delay(500);

}
