 /*
 * This is the Arduino code for push button to turn LED ON and OFF
 * the output pen 10 is connected to relay 
 * watch video instruction on video http://youTu.be/2WwedCRwmgA
 * 

 * 
 * Written by Ahmad Nejrabi for Roboja Video, www.Robojax.com
 * Date: Dec 14, 2017, in Ajax, Ontario, Canada
 * Permission granted to share this code given that this
 * note is kept with the code.
 * Disclaimer: this code is "AS IS" and for educational purpose only.
 Be carefull working with AC is dangrous. Disconnect from AC power when working and wear protective gloves when touch the AC components.
 * http://robojax.com/learn/arduino/
 * 
 */

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);// define pin two as input for push button
  pinMode(10, OUTPUT);// defind pin 10 as output
}

void loop() {
  
  int pushed = digitalRead(2);// read pin 2 and put the result in the "pushed" variable
  if(pushed == LOW){
    digitalWrite(10, HIGH);// if pushed is equal LOW, turn the pin 10 HIGH (give it 5v)
    Serial.println("hello");
  }else{
    digitalWrite(10, LOW);// else set pin 10 to low or zero volt
  }
}
