void setup() {
  // first thing that would run when the microcontroller is turned on
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}

void loop() {
  // runs after the void setup
  // put your main code here, to run repeatedly:

  //digitalWrite outputs 1 or 0
  digitalWrite(13, HIGH);
  // when it is HIGH it turns the pin on
  // when it is LOW it turns the pin off
  delay(500);
  // in milliseconds
  digitalWrite(13, LOW);
  delay(500);
}
