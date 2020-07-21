//Using a potentiometer to alter the rate of brightness of LED Bulb.

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
  int potValue = analogRead(potPin)/4;
  //It is divided by four because the ADC is 10bits(varies between 0-1023) and PWM is 8bits(varies between 0-255)
  //Dividing by 4 scales the two components
  
  Assign the value to the LED Bulb as received from the potentiometer
  analogWrite(ledPin, potValue);
}
