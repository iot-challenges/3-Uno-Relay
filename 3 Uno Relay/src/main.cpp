/**
 *
 *****************************************************************
 * IOT Challenges - https://instagram.com/iotchallenges          *
 *****************************************************************
 * Evandro Fruhauf                                               *
 *  GitHub - https://github.com/evandrodp                        *
 *  LinkedIn - http://linkedin.com/in/evandrofruhauf             *
 *****************************************************************
 * This code can contain parts from other open-sources projects, *
 * whenever possible it will be quoted.                          *
 *****************************************************************
 *
 * Relay
 *
 * Challenge: Turns on the Relay on for 3 seconds, then off for three seconds, repeatedly.
 *
**/
#include <Arduino.h>

// Set RELAY pin
#define RELAY 8

void setup()
{
  // initialize RELAY digital pin as an output.
  pinMode(RELAY, OUTPUT);
}

void loop()
{
  // turn the RELAY on (HIGH is the voltage level)
  digitalWrite(RELAY, HIGH);
  // wait
  delay(3000);
  // turn the RELAY off by making the voltage LOW
  digitalWrite(RELAY, LOW);
   // wait
  delay(3000);
}
