// pin definitions
int ledPin =13;
int buttonPin = 2;

//global variables
int toggleState;
int lastButtonState = 1;
long unsigned int lastPress;
//long: doubles the size of the container(variable modifier)
//unsigned: removes the possibility of a negative integer(variable modifier)
int debounceTime= 20;

void setup() {
  //setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  int buttonState = digitalRead(buttonPin);
  //read the state of buttonPin and store it as buttonState (0 or 1)

  if((millis() - lastPress) > debounceTime) //if the time between the last buttonChange is greater than the debounceTime
  //millis is an arduino function that measures the time since boot or since the program was initiated
  {
    lastPress = millis(); //update lastPress

    if(buttonState == 0 && lastButtonState ==1) //if is pressed currently but it was realeased last change
    {
      toggleState =! toggleState;  //toggle the LED State. Flips its value.
      digitalWrite(ledPin, toggleState);
      lastButtonState = 0;    //record the lastButtonState
    } 

    if(buttonState == 1 && lastButtonState ==0) //if button is not pressed and was pressed last change
    {
      lastButtonState = 1; //record the lastButtonState
    }
    
   }
  
}
