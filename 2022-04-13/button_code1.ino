int ButtonState = 0;
  
void setup()
{
  	pinMode(2, INPUT);
	pinMode(13, OUTPUT);
  	pinMode(8, OUTPUT);
}

void loop()
{
	ButtonState = digitalRead(2);
    if (ButtonState == HIGH)
   	{
 		digitalWrite(8, HIGH);
      	digitalWrite(13, HIGH);
      	delay(500);
      	digitalWrite(8, LOW);
      	digitalWrite(13, LOW);
      	delay(500);
      	digitalWrite(8, HIGH);
      	digitalWrite(13, LOW);
      	delay(500);
      	digitalWrite(8, LOW);
      	digitalWrite(13, HIGH);
      	delay(500);
    }
  	else
    {
    	digitalWrite(8, LOW);
		digitalWrite(13, LOW);
    }
}