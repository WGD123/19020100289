#include <MsTimer2.h>
int pinInterrupt=2;
int tick = 0;
int tick1 = 0;
void onTimer()
{
    tick++;
    if(tick>9)
    {
      tick=0;
      tick1=tick1+1;
    }
    if(tick1>9)
    {
      tick1=0;
    }
  }
void myfunc()
{
    tick=0;
  tick1 = 0;
    
  }
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600); 
  MsTimer2::set(1000, onTimer);
  MsTimer2::start();
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
  
  

 byte income=0;
 byte income1=0;
void loop()
{
    income=tick;
    income=income-'0';
    
    digitalWrite(3,income&0x1);
    digitalWrite(4,(income>>1)&0x1);
    digitalWrite(5,(income>>2)&0x1);
    digitalWrite(6,(income>>3)&0x1);
    
    digitalWrite(11,LOW);
    income1=tick1;
    income1=income1-'0';
    
    digitalWrite(7,income1&0x1);
    digitalWrite(8,(income1>>1)&0x1);
    digitalWrite(9,(income1>>2)&0x1);
    digitalWrite(10,(income1>>3)&0x1);
    
    digitalWrite(12,LOW);
    
}

