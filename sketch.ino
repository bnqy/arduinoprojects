
int l = 5;
void setup() {
   pinMode(l, OUTPUT);
}

void loop() {
   digitalWrite(l, HIGH);
   delay(250);
   digitalWrite(l, LOW);
   delay(250);
}
