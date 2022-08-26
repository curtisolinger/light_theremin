// Declare a global variable to represent the value (0 - 1023) coming from the phototransistor.
int sensorValue;
// Declare a global variable to be the low value coming off the phototransistor during calibration.
int sensorLow = 1023;
// Global variable to be the high value during calibration.
int sensorHigh = 0;
// Declare a global variable that is tied to the LED on the microcontroller to be activated during calibration. 
const int ledPin = 13;

void setup() {
  // Turn the LED on the microcontraoller on to signify the start of calibration.
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  // The calibration loop - this will product two values sensorLow and sensorHigh that respectively 
  // record the lowest and highest values recorded by the phototransistor during the calibration period. 
  while (millis() < 5000) {
    // Read the value coming from the phototransistor and store that in sensorValue
    sensorValue = analogRead(A0);
    // If sensorValue is greater than sensorHigh (set to 0 initially) then change sensorHigh to sensorValue
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    If sensorValue is less than sensorLow (set to 1023 initially) then change sensorLow to sensorValue
    if (sensorValue < sensorLow) {
      sensorLow = SensorValue;
    }
  }
  // Turn the microcontroller LED off to signify the end of the calibration period.
  digitalWrite(ledPin, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}
