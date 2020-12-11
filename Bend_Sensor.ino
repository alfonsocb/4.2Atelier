int analogInPin = A5;
int sensorValue = 0;
int ledPin = 10 ;
void setup() {
  Serial.begin(9600);
 pinMode(A5, INPUT_PULLUP); 
 pinMode(10, OUTPUT); 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);              
  // print the results to the serial monitor:
  Serial.print("sensor = " );                       
  Serial.println(sensorValue);
  if (sensorValue < 100){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
    }
  }
