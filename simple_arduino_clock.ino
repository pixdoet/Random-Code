//ints
int seconds = 0;
int minutes = 0;
int hours = 0;

/*
 * Remember to adjust the clock before using
 * Clock will reset when power is lost to the
 * settings you set in void setup()
 * 
 * The clock is at the Serial Monitor.
 * Open it as soon as you uploaded the project.
 * 
 * An Arduino must be connected to the computer.
 * No other components are needed to power this (it runs on its own!)
 * 
 * This code is extremely underpowered and unreliable
 * This is only a project. Do not use it at
 * important and life-related equipment
 * 
 * This code is provided to you as-is and is not consented to 
 * ANY warranty, to the point of being risky to use this code.
 * 
 * Welcome to copy, edit and share.
 * As Freddie Mecury once said:
 * "Do anything you want to my code, just don't make it boring"
 * *jkjk i said that
 * 
 * This is VERY long but i wanna prevent myself from lawsuits so 
 * yeah
 */




void setup() {
  // put your setup code here, to run once:
  // Adjust the clock here first, before going anywhere else
  seconds = 0;
  minutes = 29;
  hours = 16;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Main clock code
  seconds += 1;
  if (seconds > 59){
    minutes += 1;
    seconds = 1;
  }
  if (minutes > 59){
    hours += 1;
    minutes = 1;
  }

  if (hours > 24){
    hours = 0;
    minutes = 0;
    seconds = 0;
  }
  
  // print the time
  Serial.println("Secs: "); Serial.println(seconds);
  Serial.println("Mins: "); Serial.println(minutes);
  Serial.println("Hours: "); Serial.println(hours);
  // delay 1 sec
  delay(1000);

}
