const byte buzzer = 13;

void setup() {
  pinMode(buzzer, OUTPUT);

}

void loop() {
 tone(buzzer, 500, 100);

 delay(100);
}
