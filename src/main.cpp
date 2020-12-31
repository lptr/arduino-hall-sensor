#include <Arduino.h>

/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

const int analogInPin = A0; // ESP8266 Analog Pin ADC0 = A0
const int hallSensorPin = D2;

void setup()
{
    Serial.begin(115200);
    while (!Serial) {
        delay(100);
    }
    pinMode(hallSensorPin, INPUT);
    pinMode(BUILTIN_LED, OUTPUT);

    Serial.println("Booted");
    Serial.println("Booted");
    Serial.println("Booted");
    Serial.println("Booted");
}

void loop()
{
    int analogValue = analogRead(analogInPin);
    int digitalValue = digitalRead(hallSensorPin);
    digitalWrite(BUILTIN_LED, digitalValue);

    Serial.printf("Analog = %d, digital = %d\n", analogValue, digitalValue);

    delay(1000);
}
