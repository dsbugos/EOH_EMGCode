/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
MyoWare "+" to Feather 3V
MyoWare "-" to Feather GND
MyoWare "SIG" to Feather A0
*/
int ledPin = 6;
int moveVal = 350;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(6, OUTPUT); //gives pin A4 an output voltage
  pinMode(keyboardPin, INPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValueR = analogRead(A0); //integer for the right MyoWare
  int sensorValueL = analogRead(A1); //integer for the left MyoWare
  if (sensorValueR>moveVal){ //NEEDS A WAY TO OUTPUT A KEYSTROKE. PUT THAT ARGUMENT HERE. 
    //digitalWrite(6,HIGH);
  }
  else if (moveValueL>moveVal){ //Same as above. Put the keystroke function in this if statement and have it output the key for left movement. 
    //digitalWrite(6,HIGH);
  }  
  else{
    //Something here that ensures there are no keystrokes. This will only execute if sensorValueR and sensorValueL are both below moveVal.  
  }
  Serial.println(sensorValueR);
  delay(150);        // delay in between reads for stability. Only here to make reading the serial monitor easier. Delete once the code works to improve MyoWare response time. 
}
