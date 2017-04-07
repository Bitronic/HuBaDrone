#include <CoDrone.h>
void setup() {
  // put your setup code here, to run once:
CoDrone.begin(115200);
CoDrone.AutoConnect(NearbyDrone);

CoDrone.FlightEvent(TakeOff);
delay(500);
CoDrone.FlightEvent(Landing);

}

void loop() {
byte bt11 = digitalRead(11);
if(bt11){
  CoDrone.FlightEvent(Stop);
}
  
//YAW = CoDrone.AnalogScaleChange(analogRead(22));
//THROTTLE =  CoDrone.AnalogScaleChange(analogRead(23));
//ROLL =  CoDrone.AnalogScaleChange(analogRead(24));
//PITCH =  CoDrone.AnalogScaleChange(analogRead(25));
}
