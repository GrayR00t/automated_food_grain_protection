//RECEIVING ARDUINO SENSOR DATA TO ANDROID.
#include<SoftwareSerial.h>
Software SerialBTserial(10,11);//RX|TX
  int sensorPin=A0;
  int sensorValue=0;
void setup() {
  
  BTSerial.begin(9600);
}

void loop() {
  sensorValue=analogRead(sensorPin);
  //RECEIVING STRING OF OUTPUT SEPERATED BY (,)
  BTserial.print(sensorValue);
  BTserial.print(",");
  BTserial.print(";");
  delay(20);

}
