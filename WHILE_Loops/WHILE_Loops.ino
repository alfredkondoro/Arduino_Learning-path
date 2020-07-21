//Using WHILE Loop to make the LED blink faster when pressed and slower when released

// pin definitions
int ledPin =13;
int buttonPin = 2;

//global variables
int toggleState;
int ButtonState = 1;

void setup() {
  //setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  buttonState = digitalRead(buttonPin); //reading the digital value from the assigned pin

   while(buttonState == 0){
    toggleState =! toggleState; //changing the state
    digitalWrite(ledPin, toggleState);
    delay(50);
    }

    toggleState =! toggleState;
    digitalWrite(ledPin,toggleState)
    delay(200);
}
