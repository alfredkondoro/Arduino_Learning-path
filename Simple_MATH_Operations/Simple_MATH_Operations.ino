int x = 10;
int y = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i = x + y;
  int j = x - y;
  int k = x * y;
  int l = x / y;
  float m = x / y;

  Serial.println(i);
  Serial.println(j);
  Serial.println(k);
  Serial.println(l);
  Serial.println(m);
  delay(1000);
  
}
