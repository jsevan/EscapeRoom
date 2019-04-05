//The following code was written with the reference of the online links mentioned below.

//https://learn.adafruit.com/force-sensitive-resistor-fsr/using-an-fsr

//http://www.instructables.com/id/Force-sensitive-resistor-activated-led/

// Lets "declare" variables so that the computer knows
//about them when executing the code. We'll also need them so
//we can refer to them later.

//Variable names are case sensitive so type each name correctly
//whenever you refer to it.

int sensorPin = 0;    // force sensitive resistor connected to analog pin 0
int ledPin1 = 9;    //LED pin connected to digital pin 9
int ledPin2 = 10;    //LED pin connected to digital pin 10
int ledPin3 = 11;    //LED pin connected to digital pin 11
int sensorValue = 0;

void setup() // This funtion runs once the sketch starts up.
// We'll be using pin 9, 10 and 11 to light the LED so it's important
//to refer to it as an output. We've named it ledPin.
{
  Serial.begin(9600); // starting up your serial monitor to view varying values
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop()  // This funtion runs repeatedly after setup()is completed
{
  sensorValue = analogRead(sensorPin); //reading the values from the analog pin of the sensor
  // and throwing it out as a value
  Serial.print("Force value = ");  //Display value "Force value"
  Serial.println(sensorValue);

  if (sensorValue ; 0 & amp; &amp; sensorValue & lt; = 500;) // an "if" statement giving a condition   //for the values that will allow you to switch between LED's.    {     digitalWrite(ledPin1, HIGH); // this is to say if the above statement is     // the LED shoud light up   }   else digitalWrite(ledPin1, LOW); // this is to say that if the above statement   //is not true the LED should turn or remain off.      if(sensorValue &gt; 500 &amp;&amp; sensorValue &lt;= 800)   {   digitalWrite(ledPin2, HIGH);   }   else digitalWrite(ledPin2, LOW);      if(sensorValue &gt; 800)
  {
    digitalWrite(ledPin3, HIGH);
  }
  else digitalWrite(ledPin3, LOW);
}
