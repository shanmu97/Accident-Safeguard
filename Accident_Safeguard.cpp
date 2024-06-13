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

void loop() {
  
  sensorValue = analogRead(MQ3pin); // read analog input pin 0
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  //motor 
    digitalWrite(in1, HIGH); 
     digitalWrite(in2, LOW);
    // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
      // turn the LED off by making the voltage LOW
  delay(1000);       
  lcd.begin(16, 2);
     lcd.setCursor(0,0);
   if (sensorValue < Sober) {
   Serial.println("  |  Status: Stone Cold Sober");
   TurnMotorA();
    lcd.print(" ALCOHOL NOT DETECTED!");
    for (int positionCounter = 0; positionCounter < 30; positionCounter++) {  
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
   delay(200);
  }
    // for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
   // scroll one position right:
    //lcd.scrollDisplayRight();

    
// }
   } else if (sensorValue >= Sober ) {
    Serial.println("  |  Status: Drinking ");
      //dc motor 
      TurnOFFA();
     lcd.print("ALCOHOL DETECTED !");
    sendSMS();
  } 
  delay(2000); // wait 2s for next reading
}
void sendSMS() {
  // AT command to set SIM900 to SMS mode
  SIM900.print("AT+CMGF=1\r"); 
  delay(100);

  // REPLACE THE X's WITH THE RECIPIENT'S MOBILE NUMBER
  // USE INTERNATIONAL FORMAT CODE FOR MOBILE NUMBERS
 
  SIM900.println("AT+CMGS=\"+91XXXXXXXXXX\""); 
  delay(100);
  
  // REPLACE WITH YOUR OWN SMS MESSAGE CONTENT
  SIM900.println("a car engine has been turned off at this location  16.4963 N , 80.5007 E   .an urgent assistance needed"); 
  delay(100);

  // End AT command with a ^Z, ASCII code 26
  SIM900.println((char)26); 
  delay(100);
  SIM900.println();
  // Give module time to send SMS
  delay(5000); 
}

void TurnOFFA(){
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
}

void TurnMotorA(){              
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}
