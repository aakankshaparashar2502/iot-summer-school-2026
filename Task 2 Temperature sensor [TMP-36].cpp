Temperature sensor [TMP-36]

const int sensorPin = A0;

void setup() {
Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial. println(sensorValue);
  delay(1000);
  float voltage = sensorValue* (5.0/1023.0);
  //Serial.println(voltage); // voltge = 5v, step size = 1023
  float temperatureC = (voltage - 0.5)*100 ;
  Serial.print("temprerature is");
  Serial. println(temperatureC);
  
}