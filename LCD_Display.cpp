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