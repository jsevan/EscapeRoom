#include <Adafruit_NeoPixel.h>
#define NUM_PIXELS 73
#define PIN 2
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_PIXELS, PIN);

int fsrAnalogPin = 0;
int fsrReading;

void setup() {
    pixels.begin();
    Serial.begin(9600);
    pinMode(fsrAnalogPin, INPUT);

}
void fsrHandle() {
    int fsrReading = analogRead(fsrAnalogPin);
    Serial.println(fsrReading);
    
    if (fsrReading < 50) {
        for (int i = 73; i >= 0; i--) {
            pixels.setPixelColor(i, pixels.Color(0, 0, 0));
            pixels.show();
            delay(10);
        }
    } else if (fsrReading > 50 && fsrReading < 350) {
        //light up the light
        //map the value you receive to a number between 0 and 100
        int ledNum = map(fsrReading, 0, 1023, 0, 255);
        for (int i = 0; i <ledNum; i++) {
            //Salmon color
            pixels.setPixelColor(i, pixels.Color(250, 128, 114));
            pixels.show();
            delay(10);
        }
    } else if (fsrReading > 350 && fsrReading < 650) {
        int ledNum = map(fsrReading, 0, 1023, 0, 255);
        for (int i = 0; i <ledNum; i++) {
            //pink
            pixels.setPixelColor(i, pixels.Color(50, 0, 50));
            pixels.show();
            delay(10);
        }
    } else if (fsrReading > 650 && fsrReading < 1023) {
        int ledNum = map(fsrReading, 0, 1023, 0, 255);
        for (int i = 0; i <ledNum; i++) {
            //Lime color
            pixels.setPixelColor(i, pixels.Color(50, 205, 50));
            pixels.show();
            delay(10);
        }
    }
}

void loop() {

}
