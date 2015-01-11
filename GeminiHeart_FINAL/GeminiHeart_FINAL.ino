int solenoid1 = 6;
int solenoid2 = 3;

void setup() {                
  pinMode(solenoid1, OUTPUT);
  pinMode(solenoid2, OUTPUT);   
}

void loop() {
  digitalWrite(solenoid1, HIGH);
  digitalWrite(solenoid2, LOW);
  delay(50);
  digitalWrite(solenoid1, LOW);  
  digitalWrite(solenoid2, LOW);
  delay(220);
  digitalWrite(solenoid1, LOW);
  digitalWrite(solenoid2, HIGH);
  delay(50);
  digitalWrite(solenoid1, LOW);  
  digitalWrite(solenoid2, LOW);
  delay(1200); 
}

