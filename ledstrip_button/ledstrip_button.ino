#include <Adafruit_NeoPixel.h>
#define NUM_PIXELS 73
#define PIN 10
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_PIXELS, PIN);


void setup() {
  Serial.begin(9600);
  pixels.begin();
  pinMode(2, INPUT_PULLUP);// define pin two as input for push button
  pinMode(10, OUTPUT);// defind pin 10 as output
}

void loop() {
  
  int pushed = digitalRead(2);// read pin 2 and put the result in the "pushed" variable
  if(pushed == LOW){
    digitalWrite(10, HIGH);// if pushed is equal LOW, turn the pin 10 HIGH (give it 5v)
    pixels.setBrightness(50);
    pixels.setPixelColor(50, 255);
    pixels.show();
    Serial.println("hello");
  }else{
    digitalWrite(10, LOW);// else set pin 10 to low or zero volt
    pixels.setBrightness(0);
    pixels.setPixelColor(50, 0);
    pixels.show();
  }
}
