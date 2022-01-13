//constants
#define led_pin1 10
#define led_pin2 11
#define led_pin3 12
#define buttonPin 4


void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // part A of the lab: blink an LED on and off repeatedly, used also for part E with the potentiometer 
  
  digitalWrite(led_pin1, HIGH);
  delay(1000);
  digitalWrite(led_pin1, LOW);
  delay(1000);

  //part B of the lab: blink multiple LEDS sequentially
  digitalWrite(led_pin1, HIGH);
  digitalWrite(led_pin2, LOW);
  digitalWrite(led_pin3, LOW);
  delay(1000);
  digitalWrite(led_pin1, LOW);
  digitalWrite(led_pin2, HIGH);
  digitalWrite(led_pin3, LOW);
  delay(1000);
  digitalWrite(led_pin1, LOW);
  digitalWrite(led_pin2, LOW);
  digitalWrite(led_pin3, HIGH);
  delay(1000);

  //part C of the lab - fade sequence with PWM and LED
   for (int i = 0; i <= 255; i++) {
    analogWrite(led_pin1, i);
    delay(10);
  }
    for (int i = 255; i >= 0; i--) {
    analogWrite(led_pin1, i);
    delay(10);
  }


  //part D of the lab- complete part B with button
  if (digitalRead(buttonPin)){
     digitalWrite(led_pin1, HIGH);
     delay(100);
     digitalWrite(led_pin1, LOW);
     delay(100);
  }else{
    digitalWrite(led_pin1, LOW);
  }
}
