# ACCIDENT SAFEGUARD
The main aim of this project is to develop a system that would detect the amount of alcohol that is consumed by the driver of the vehicle. The proposed system aims at preventing the user from driving when drunk and thereby intends to reduce the number of accidents occurring due to drunk driving. This system can continuously monitor the alcohol content of the driver's breathing by installing a sensor in the steering wheel. If the driver's breath alcohol level is discovered to be greater than the prescribed level (BAC) of 0.5 mg/Ml. the vehicle ignition system (DC Motor) will be turned off and the concerned authority will be alerted using the GSM module. 

## SYSTEM COMPONENTS
### 1. Arduino 
-	Arduino Uno is a microcontroller board based on the ATmega328P (datasheet). It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply Arduino Uno [13] connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started. 
-	You can tinker with your UNO without warring too much about doing something wrong, worst case scenario you can replace the chip for a few dollars and start over again. "Uno" means one in Italian and was chosen to mark the release of Arduino Software (IDE) 1.0. 
-	The Uno board and version 1.0 of Arduino Software (IDE) were the reference versions of Arduino, now evolved to newer releases.
-	 The Uno board is the first in a series of USB Arduino boards, and the reference model for the Arduino platform; for an extensive list of current, past or outdated boards see the Arduino index of boards.
-	Arduino consists of both a physical programmable circuit board (often referred to as a microcontroller) and a piece of software, or IDE (Integrated Development Environment) that runs on your computer, used to write and upload computer code to the physical board. 
-	The Arduino IDE uses a simplified version of C++, making it easier to learn to program. Finally, Arduino provides a standard form factor that breaks out the functions of the micro-controller into a more accessible package.

### 2. GSM Module
- A GSM module is a compact electronic device that facilitates communication between devices and the GSM (Global System for Mobile Communications) network.
- It integrates a GSM modem, power supply circuitry, and communication interfaces (such as RS-232 or USB).
- These modules are used in various applications, including SMS services, MMS services, and more.
- GSM modules can be external modems or embedded within equipment.
- They rely on SIM cards for network communication. Unlike mobile phones, which have embedded processors, GSM modules serve as dedicated communication components.
- They play a crucial role in enabling wireless communication across the globe.
* #### Features of GSM Module: 
  - Improved spectrum efficiency 
  -	International roaming 
  - Compatibility with integrated services digital network (ISDN) 
  - Support for new services.
  -	SIM phonebook management
  -	Fixed dialing number (FDN)
  -	Real time clock with alarm management
  -	High-quality speech
  -	Uses encryption to make phone calls more secure
  -	Short message service (SMS)
### 3. GPS Module
- A GPS module is a compact electronic device that receives signals from a network of satellites orbiting the Earth to determine its precise location.
- It integrates various components, including a GPS receiver, antenna, and onboard circuitry, to process the received signals and provide accurate positioning information1.
- These modules play a crucial role in various applications, such as navigation, tracking, and geographic information systems (GIS).
* #### Features of GPS Module:
  - A complete GPS module with an active antenna integrated, and a built-in EEPROM to save configuration parameter data.
  - Built-in 25 x 25 x 4mm ceramic active antenna provides strong satellite search capability.
  - Equipped with power and signal indicator lights and data backup battery.
  - Power supply: 3-5V; Default baud rate: 9600bps.
  - Interface: RS232 TTL.

### 4. LCD Display
- LCDs (Liquid Crystal Displays) are versatile and commonly used for displaying information. Here’s a step-by-step guide:
#### * Wire the LCD screen to your Arduino board as follows:
  - LCD RS pin to digital pin 1.
  - LCD Enable pin to digital pin 11
  - LCD D4-D7 pins to digital pins 5, 4, 3, and 2
  - LCD R/W pin to GND
  - LCD VSS pin to GND
#### * Characteristics of LCD display
  - Character LCD 16x4
  - 5x8 dots includes cursor
  - Built-in controller (ST7066 or Equivalent)
  - +5V power supply (Also available for +3V)
  - WG16032D3 optional for +3V power supply
  - 1/16 duty cycle

