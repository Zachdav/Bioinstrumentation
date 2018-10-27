///Electrocardiogram Device///
//Connect to A0//

//Defining Constants and Variables
const int analogInPin0 = A0;  
int sensorValue0 = 0;

const int analogInPin0 = A1;
int sensorValue1 = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  delay(500);
}

void loop() {
  // read the analog in values:
  sensorValue0 = analogRead(analogInPin0);
  sensorValue1 = analogRead(analogInPin1);
  
  // print the results to the Serial Monitor:
  //Serial.print("val ");
  
  Serial.print(sensorValue0);
  Serial.print(",");
  Serial.println(sensorValue1);
  
  delay(2);
  //delay(350);
}
