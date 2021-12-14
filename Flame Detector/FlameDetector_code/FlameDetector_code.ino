const int LED = 1;
const int arduino_input = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(arduino_input, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sense = digitalRead(arduino_input);
  
  if (sense == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
  }
  else
  {
    digitalWrite(LED, LOW);
    delay(200);
  }

}
