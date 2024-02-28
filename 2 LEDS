const int LEDone = 9;
const int LEDtwo = 10;

int currentPin = 0;

int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LEDone, OUTPUT);
  pinMode(LEDtwo, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    Serial.write(inByte);

    if (inByte == 'a') {
      currentPin = LEDone;
    }

    if (inByte == 'b') {
      currentPin = LEDtwo;
    }

    if (inByte >= '0' && inByte <= '9') { // Check if the received byte is a digit
      brightness = inByte - '0'; // Convert ASCII digit to integer value
      analogWrite(currentPin, brightness);
    }
  }
}
