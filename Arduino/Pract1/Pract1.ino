#include <SoftwareSerial.h>

SoftwareSerial mySerial(10,11);
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  
}

void loop() {
   char c = "Helloo";
 /* for(byte i=0;i<10;i++)
  {
  mySerial.write(i);
  }  */
  
  
  Serial.write(c,7);
  delay(1000);
}
