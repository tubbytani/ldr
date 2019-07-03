int pin=A0;
int value;
void setup() {
  Serial.begin(9600);
  
  

}

void loop() {
value=analogRead(pin); 
Serial.println(value);
if (value==0)
{
  analogWrite(9,500);
}
delay(1000);

}
