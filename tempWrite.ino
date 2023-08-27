
int l=3, termo=A0, val;
float voltage;
void setup() {
  
pinMode(l, OUTPUT);
}

void loop() {
val=analogRead(termo);
voltage=(val*5.0/1023);
if(voltage*100-273.15 > 28)
{
  digitalWrite(l, HIGH);
}
else 
digitalWrite(l, LOW);
delay(1000);
}
