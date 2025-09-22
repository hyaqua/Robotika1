// Automatic plant watering project
// Made by Jonas Rudnickas
// For Vilnius University
// Robotics course

#include <Servo.h>

// Servo variables
Servo spout;
int ServoPin = 3;
int ServoRotation = 0;

int spoutOpen = 90;
int spoutClosed = 0;

// Soil sensor variables
int sensorPin = A0;
int sensorVal = 0;
void setup()
{
	spout.attach(ServoPin);
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
  
  sensorVal = analogRead(sensorPin);
  
  sensorVal = map(sensorVal, 0, 1023, spoutOpen, spoutClosed);
  
  spout.write(sensorVal);

}