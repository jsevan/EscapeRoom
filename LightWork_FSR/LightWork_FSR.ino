#include <Adafruit_NeoPixel.h>
#define NUM_PIXELS 71
#define PIN 6
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_PIXELS, PIN);

int fsrAnalogPin = 0;
int fsrReading;

void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  Serial.begin(9600);
  pinMode(fsrAnalogPin, INPUT);
}

void loop() {
  int fsrReading = analogRead(fsrAnalogPin);
  Serial.println(fsrReading);

  if (fsrReading < 50) {
    for (int i = 50; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0, 0, 0));
      pixels.show();
      delay(10);
    }
  } else if (fsrReading > 50 && fsrReading < 150) {
    // light up the light
    //map the value you receive to a number between 0 and 50
    int ledNum = map(fsrReading, 0, 1023, 0, 100);
    for (int i = 0; i < ledNum; i++) {
      pixels.setPixelColor(i, pixels.Color(50, 205, 50));
      pixels.show();
      delay(10);
    }
  } else if (fsrReading > 150 && fsrReading < 250) {
    int ledNum = map(fsrReading, 0, 1023, 0, 100);
    for (int i = 0; i < ledNum; i++) {
      pixels.setPixelColor(i, pixels.Color(50, 0, 25));
      pixels.show();
      delay(10);
    }
  }
  else if (fsrReading > 250 && fsrReading < 1023) {
    int ledNum = map(fsrReading, 0, 1023, 0, 100);
    for (int i = 0; i < ledNum; i++) {
      pixels.setPixelColor(i, pixels.Color(0, 50, 125));
      pixels.show();
      delay(10);
    }
  }
}
