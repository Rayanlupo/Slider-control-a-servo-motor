#include <ESP32Servo.h>
Servo servo1;
int servoPin = 18;
int sliderPin = 32;
int angle = 0;
void setup() {
servo1.attach(servoPin);
Serial.begin(115200);
pinMode(sliderPin, INPUT);

}

void loop() {
  int slider = analogRead(sliderPin);

  angle = map(slider, 0, 4095, 0, 180); 

  servo1.write(angle);

}
