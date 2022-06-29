int Led_Pin = 6;
int Led_Pin2 = 11;
int Pot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
void setup()
{
pinMode(Led_Pin, OUTPUT);
pinMode(Led_Pin2, OUTPUT);
}
void loop()
{
sensorValue = analogRead(Pot_Pin);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(Led_Pin, outputValue);
outputValue = map(sensorValue, 0, 1023, 255, 0);
analogWrite(Led_Pin2, outputValue);
  
}

