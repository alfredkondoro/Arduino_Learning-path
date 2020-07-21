//pin definitions
int potPin = A0;

//global variables
int lastPotValue;

void setup(){
  //set pin modes
  pinMode(potPin, INPUT);

  //Initialise Serial port
  Serial.begin(9600);
}

void loop(){
  // read the potPin and the divide by 255 to provide 5 possible reading to be used in the switch case
  int potValue = analogRead(potPin)/255;

  //if something has changed since last value
  if(potValue) != lastPotValue){

    //switch case
    switch(potValue){
      case 0:
        Serial.println("Very Low");
        break;
      case 1;
        Serial.println("Low");
        break;
      case 2;
        Serial.println("Moderate");
        break;
      case 3;
        Serial.println("High");
        break;
      case 4;
        Serial.println("Extreme");
        break;
      default:
        Serial.println("error!");
    }
  }
}
