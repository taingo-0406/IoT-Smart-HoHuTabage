#define TRIGGER 4
#define ECHO    5
 
void setup() {
 
  Serial.begin (9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUILTIN_LED, OUTPUT);
}
 
void loop() {
 
  long duration;
  long distance;
  digitalWrite(TRIGGER, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(TRIGGER, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;
  
  Serial.print("Centimeter: ");
  Serial.println(distance);
  delay(1000);
}

