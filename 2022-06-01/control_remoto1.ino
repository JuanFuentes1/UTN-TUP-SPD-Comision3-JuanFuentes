#include <IRremote.h>
int RECV_PIN = 14;
int IRData = 0;
int led = 7;

IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
pinMode(led, OUTPUT);  
Serial.begin(9600);
irrecv.enableIRIn();
}
void loop() 
{
  if (irrecv.decode(&results))
  {
  IRData = results.value;

      if(IRData == 2295)
      {
          digitalWrite(led, HIGH);
      }
      else if(IRData == -30601)
      {
          digitalWrite(led, LOW);
      }
    irrecv.resume();
  }
}