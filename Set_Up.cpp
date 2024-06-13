#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#define MQ3pin 13
SoftwareSerial SIM900(11,12); 
int in1 = 8; //Declaring the pins where in1 in2 from the driver are wired 
int in2 = 10;
float sensorValue;  //variable to store sensor value
#define Sober 200// Define max value that we consider sober
#define Drunk 400   // Define min value that we consider drunk
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 2, en = 3, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
   Serial.begin(9600); // sets the serial port to 9600
  Serial.println("MQ3 warming up!");
  pinMode(in1, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(in2, OUTPUT);
 
  delay(2000); // allow the MQ3 to warm up
  lcd.cursor();
  SIM900.begin(19200);
  // Give time to your GSM shield log on to network
  delay(2000);   
}