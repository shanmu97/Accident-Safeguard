# ACCIDENT SAFEGUARD
The main aim of this project is to develop a system that would detect the amount of alcohol that is consumed by the driver of the vehicle. The proposed system aims at preventing the user from driving when drunk and thereby intends to reduce the number of accidents occurring due to drunk driving. This system can continuously monitor the alcohol content of the driver's breathing by installing a sensor in the steering wheel. If the driver's breath alcohol level is discovered to be greater than the prescribed level (BAC) of 0.5 mg/Ml. the vehicle ignition system (DC Motor) will be turned off and the concerned authority will be alerted using the GSM module. 

## SYSTEM COMPONENTS
### 1. Arduino 
Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online. You can tell your board what to do by sending a set of instructions to the microcontroller on the board. To do so you use the Arduino programming language (based on Wiring), and the Arduino Software (IDE), based on Processing. The board is equipped with 14 digital input/output pins (of which 6 can be used as PWM outputs), and 6 analog input/output pins12.

### 2. GSM Module
A GSM module is a compact electronic device that facilitates communication between devices and the GSM (Global System for Mobile Communications) network. It integrates a GSM modem, power supply circuitry, and communication interfaces (such as RS-232 or USB). These modules are used in various applications, including SMS services, MMS services, and more. GSM modules can be external modems or embedded within equipment. They rely on SIM cards for network communication. Unlike mobile phones, which have embedded processors, GSM modules serve as dedicated communication components. They play a crucial role in enabling wireless communication across the globe.
* #### Wire the GPS to your Arduino board as follows:
  - VCC to 5V in Arduino
  - TX to digital pin 6
  - RX to digital pin 7
  - GND to ground pin
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
A GPS module is a compact electronic device that receives signals from a network of satellites orbiting the Earth to determine its precise location. It integrates various components, including a GPS receiver, antenna, and onboard circuitry, to process the received signals and provide accurate positioning information1. These modules play a crucial role in various applications, such as navigation, tracking, and geographic information systems (GIS).
* #### Wire the GPS to your Arduino board as follows:
  - VCC to 5V in Arduino
  - TX to digital pin 6
  - RX to digital pin 7
  - GND to ground pin
* #### Features of GPS Module:
  - A complete GPS module with an active antenna integrated, and a built-in EEPROM to save configuration parameter data.
  - Built-in 25 x 25 x 4mm ceramic active antenna provides strong satellite search capability.
  - Equipped with power and signal indicator lights and data backup battery.
  - Power supply: 3-5V; Default baud rate: 9600bps.
  - Interface: RS232 TTL.

### 4. LCD Display
LCDs (Liquid Crystal Displays) are versatile and commonly used for displaying information. Here’s a step-by-step guide:
* #### Wire the LCD screen to your Arduino board as follows:
  - LCD RS pin to digital pin 1.
  - LCD Enable pin to digital pin 11
  - LCD D4-D7 pins to digital pins 5, 4, 3, and 2
  - LCD R/W pin to GND
  - LCD VSS pin to GND
* #### Characteristics of LCD display
  - Character LCD 16x4
  - 5x8 dots includes cursor
  - Built-in controller (ST7066 or Equivalent)
  - +5V power supply (Also available for +3V)
  - WG16032D3 optional for +3V power supply
  - 1/16 duty cycle
### 5. DC Motor
DC motors are used to convert electrical energy into mechanical energy and we can use these for example in our power tools, toy cars and cooling fans. DC motor has such basic components, as a stator (stationary part of the element producing magnetic field) and a rotor part that rotates carrying winding or coil. When a DC voltage is connected to the coil, current flows through it and generates an electromagnetic field. When the magnetic field of this rotor interacts with that produced by the stator, a torque is induced which causes this piece to start spinning. DC motors are used where the speed of the motor needs to be controlled externally. The speed of DC motors can be controlled by changing the current of the armature winding.
### 6. Motor Driver
A motor driver is an essential component in robotics and automation projects, acting as the interface between a microcontroller and a motor. It is responsible for providing the necessary voltage, current, directionality, and protection to operate motors efficiently. Motor drivers allow for precise control over motors, enabling applications like robots, drones, and CNC machines to function correctly. Motor drivers come in various forms, tailored to the type of motor and control required. The most common topology used in motor drivers is the H-bridge, which allows for direction control of DC motors. The motor driver listens to the low voltage signals from a controller or processor and controls the actual motor, which requires a higher input voltage. This enables the microcontroller to command the motor driver to move the motor in a specific direction or at a particular speed based on the inputs received.
