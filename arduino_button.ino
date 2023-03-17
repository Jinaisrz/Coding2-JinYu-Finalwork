const int buttonPin = 2;
int buttonState = 0;
int pre_buttonState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH && pre_buttonState == LOW){
    Serial.write("1");
  }
  pre_buttonState = buttonState; 
}
