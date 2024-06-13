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