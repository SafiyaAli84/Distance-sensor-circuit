// C++ code
const int trigPin = 10;
const int echoPin =9;

float duration, distance;

void setup()
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
  
Serial.begin(9600);
Serial.println("Setup is complete");

pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
}

void loop(){
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = ( duration*.0343)/2;
  
  Serial.println(distance);
  delay(100);
  
  if (distance > 150){
     digitalWrite(4,HIGH);
  } else {
    digitalWrite(4, LOW);
  }
}
