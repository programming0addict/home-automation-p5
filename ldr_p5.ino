#include<Servo.h>


int ldr=A0;
int rain=A1;

  int  ir=7;
  int led1=13;
  int led2=12;
  int led3=11;
  int buzzer = 10;

Servo servo1;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(ldr,INPUT);
pinMode(rain,INPUT);
pinMode(ir,INPUT);

servo1.attach(6);


}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(ldr);
int rainvalue = analogRead(rain);
int irval = digitalRead(ir);



 
  



if(value>100){
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
 
  
  
  
  
}
 else{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  
 }

 if(rainvalue<750){
  

    digitalWrite(buzzer,HIGH);

  

  
}
 else{
  digitalWrite(buzzer,LOW);
 
 }
 
if(irval==LOW){
  
  servo1.write(0);
  delay(3000);
  
  
  
  
}
 else{
  servo1.write(130);
  
 
 }
 
}
