#include <Adafruit_NeoPixel.h>
#define PIN 10
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

//Toggle Switch
int buttonInput = 2; //Digital Pin for Toggle Switch- other end goes to ground
int buttonState = 0;
int i = 0;


void setup() {
  Serial.begin(9600);
  pinMode(buttonInput, INPUT_PULLUP);
  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'

}

void loop()
{
  buttonState = digitalRead(buttonInput);
  if (buttonState == HIGH) {
    strip.Color(255, 0, 0), 50; // Red
  } else {
     buttonInput, LOW; {
      strip.setPixelColor(i, 0);
      strip.show();
    }
  }
}
