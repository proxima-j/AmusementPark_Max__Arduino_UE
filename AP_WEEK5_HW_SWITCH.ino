

const int switchPin = 2;  // the pin that the LED is attached to
int lastSwitchState = LOW;   

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  // initialize the ledPin as an output:
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
 int switchState=digitalRead(switchPin);
 
 if (switchState != lastSwitchState) {

    lastSwitchState = switchState;
    Serial.println(switchState);
  }
 //Serial.println("A");
 //Serial.println(switchState);
 //delay(10);
}

