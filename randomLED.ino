//Led circuits. Prepare for explosions
//3V is 512 in AnalogLand. Do not exceed or the led will explode

//various ints for led analog pin no.
int red = A0;
int blue = A1;
int green = A2;


void setup() {
  //begin serial mon
  Serial.begin(9600);
  //test serial mon
  Serial.println("hello world");

}

void loop() {
  /*
   * generates random signals for the
   * leds that are 3 volt only
   */
  
 
  int redvolt = random(0, 512);
  int bluevolt = random(0, 512);
  int greenvolt = random(0, 512);

  //code to show the analog signals on serial mon
  //for debugging and making sure it works
  Serial.println(redvolt);
  Serial.println(bluevolt);
  Serial.println(greenvolt);
  //write the led signals
  analogWrite(red, redvolt);
  analogWrite(green, greenvolt);
  analogWrite(blue, bluevolt);
  delay (500);

}
