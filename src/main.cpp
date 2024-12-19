#include <Arduino.h>
#include <stdio.h>

#define LED_PIN 13

#define HALL_SENSOR 14

// ---- SETUP --------------------------------------------------------------------------------
void setup() {
    pinMode(LED_PIN, OUTPUT);
    while (!Serial) {
        delay (500);
        digitalWrite(LED_BUILTIN, !digitalRead (LED_BUILTIN));
    }
    digitalWrite(LED_BUILTIN, HIGH);

    Serial.begin (9600);
    // threads.addThread(execute_crsf);
}
void loop() {
    int sensorValue = analogRead(HALL_SENSOR);
    Serial.println(sensorValue);
    delay(10);
}
