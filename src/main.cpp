#include <Arduino.h>

int led=5;
void setup() {
  Serial.begin(115200);
  Serial.print("esto es el setup ");
  
  pinMode(led,OUTPUT);

}

void loop() {
  Serial.print("esto es el loop \n");
  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  delay(2000);
}