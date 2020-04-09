int potVal;

void setup(){
  Serial.begin(9600);
}

void loop(){
  potVal = analogRead(A0);
  Serial.println(potVal);
  delay(10);
  if (potVal < 512){
    Serial.println("Obesity");
    Serial.println(potVal);
  }
  else{
    Serial.println(potVal);
  }
}
