//Using a push button to switch off the LED when pressed and on when released.

//A small LED Bulb
int ledPin = 3;
//A push button
int buttonPin = 2;

void setup() {
  //Assign the variable to a pin on the arduino board
  pinMode(ledPin, OUTPUT);
  //Instead of connecting a pullup resistor when can assign it here 
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  //Initialize the state of button and it will be digitally read from the buttonPin variable
  int buttonState = digitalRead(buttonPin);
  //A value of 1 or 0 will be assigned to the pin of the led light
  digitalWrite(ledPin, buttonState);
}
