#include <Arduino.h>
const int Relay1 = 6;        // Relay pin 1 (IN1)
const int Relay2 = 7;        // Relay pin 2 (IN2)
const int Relay3 = 8;        // Relay pin 3 (IN3)
const int Relay4 = 9;        // Relay pin 4 (IN4)
String data;  //Variable for storing received data
void SerialDecoder();
void setup() {
  Serial.begin(9600);  //Sets the baud for serial data transmission
  // Set Relay pins as OUTPUT
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
  // Init all relays to off
  digitalWrite(Relay1, HIGH);
  digitalWrite(Relay2, HIGH);
  digitalWrite(Relay3, HIGH);
  digitalWrite(Relay4, HIGH);
}
void loop() {
  // Read data from Bluetooth Module
  char ch = 0;
  data = "";
  while (1) { // When there is no command received the MCU will be in this loop. 
    while (Serial.available() <= 0) {
      };
    ch = Serial.read();
    if (ch == '#')
      break; // break the loop when a command is received
    data += ch;
  }
  SerialDecoder();// call serial Decoder function
}
//Decode received serial command
void SerialDecoder() { 
  // Print Bluetooth Module data on serial monitor
  Serial.print(data);
  Serial.print("\n");
  // Control the devices using voice command
  if (data.startsWith("turn on light"))  // turn on Device1
  {
    digitalWrite(Relay1, LOW);
    Serial.println("  :   light on");
    delay(200);
  } else if (data.startsWith("turn off light"))  // turn off Device1
  {
    digitalWrite(Relay1, HIGH);
    Serial.println("  :   light off");
    delay(2000);
  } else if (data.startsWith("turn on TV"))  // turn on Device2
  {
    digitalWrite(Relay2, LOW);
    Serial.println("  :   TV on");
    delay(200);
  }

  else if (data.startsWith("turn off TV"))  // turn off Device2
  {
    digitalWrite(Relay2, HIGH);
    Serial.println("  :   TV off");
    delay(200);
  } else if (data.startsWith("turn on music"))  // turn on Device3
  {
    digitalWrite(Relay3, LOW);
    Serial.println("  :   music on");
    delay(200);
  } else if (data.startsWith("turn off music"))  // turn off Device3
  {
    digitalWrite(Relay3, HIGH);
    Serial.println("  :   music off");
    delay(200);
  } else if (data.startsWith("turn on fan"))  // turn on Device4
  {
    digitalWrite(Relay4, LOW);
    Serial.println("  :   fan on");
    delay(200);
  } else if (data.startsWith("turn off fan"))  // turn off Device4
  {
    digitalWrite(Relay4, HIGH);
    Serial.println("  :   fan off");
    delay(200);
  } else if (data.startsWith("turn on all"))  // turn on all Devices
  {
    digitalWrite(Relay1, LOW);
    digitalWrite(Relay2, LOW);
    digitalWrite(Relay3, LOW);
    digitalWrite(Relay4, LOW);
    Serial.println("  :   All Relays on");
    delay(200);
  } else if (data.startsWith("turn off all"))  // turn off all Devices
  {
    digitalWrite(Relay1, HIGH);
    digitalWrite(Relay2, HIGH);
    digitalWrite(Relay3, HIGH);
    digitalWrite(Relay4, HIGH);
    Serial.println("  :   All Relays off");
    delay(200);
  } 
}
