//constants
int led_pin1 1
int led_pin2 2
int led_pin3 3
int buttonPin 4
bool buttonState = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin1, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin),ISR, CHANGE); 
}

void loop() {
  // part A of the lab: blink an LED on and off repeatedly
  digitalWrite(led_pin1, HIGH);
  delay(1000);
  digitalWrite(led_pin1, LOW);
  delay(1000);

  //part B of the lab: blink multiple LEDS sequentially
//  digitalWrite(led_pin1, HIGH);
//  digitalWrite(led_pin2, LOW);
//  digitalWrite(led_pin3, LOW);
//  delay(1000);
//  digitalWrite(led_pin1, LOW);
//  digitalWrite(led_pin2, HIGH);
//  digitalWrite(led_pin3, LOW);
//  delay(1000);
//  digitalWrite(led_pin1, LOW);
//  digitalWrite(led_pin2, LOW);
//  digitalWrite(led_pin3, HIGH);

  //part C of the lab - fade sequence with PWM and LED
//   for (int i = 0; i <= 255; i++) {
//    analogWrite(led_pin1, i);
//    delay(10);
//  }

  //part D of the lab- complete part B with button
//  if (buttonState){
//     digitalWrite(led_pin1, HIGH);
//     delay(1000);
//     digitalWrite(led_pin1, LOW);
//     delay(1000);
//  }else{
//    digitalWrite(led_pin1, LOW);
//  }
}

//interrupt service routine to execute on button press 
void ISR(){
  buttonState = !buttonState;
}
