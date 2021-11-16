int greenLED = 11;
int blueLED = 7;
int redLED = 3;
void setup() {
  // put your setup code here, to run once:
pinMode (3, OUTPUT);
pinMode (7, OUTPUT);
pinMode (11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
setColor(255,0,0);
delay(1000);
setColor(0,255,0);
delay(1000);
setColor(0,0,255);
delay(1000);
setColor(255,0,255);
delay(1000);
setColor(0,255,255);
delay(1000);
setColor(255,255,255);
delay(1000);(0,0,0);
}
void setColor(int redLED_value, int greenLED_value,  int blueLED_value){
analogWrite(redLED, redLED_value);
analogWrite(greenLED, greenLED_value);
analogWrite(blueLED, blueLED_value); 
}
