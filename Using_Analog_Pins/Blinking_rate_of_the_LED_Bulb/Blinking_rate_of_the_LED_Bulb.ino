//Using a potentiometer to alter the rate of blinking rate of LED Bulb.

//A small LED Bulb
int ledPin = 3;
//A potentiometer
int potPin = 2;

void setup() {
  //Assign the variable to a pin on the arduino board
  pinMode(ledPin, OUTPUT);
  //Assign the variable to a pin on the arduino board
  pinMode(potPin, INPUT);
}

void loop() {
  //Initialize the state of potentiometer and it will be read in analog form from the potPin variable
  int potValue = analogRead(potPin);
  //A value of 1 will be assigned to the pin of the led light
  digitalWrite(ledPin, HIGH);
  //The delay will depend on the analog value given by the potentiometer
  delay(potValue);   

  potValue = analogRead(potPin);
  //A value of 0 will be assigned to the pin of the led light
  digitalWrite(ledPin, LOW);
  //The delay will depend on the analog value given by the potentiometer
  delay(potValue); 
}
