#include <Relay.h>

//esp8266 LED is inverted
#define RELAY_PIN LED_BUILTIN
Relay r;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  r.begin(RELAY_PIN, true);
  Serial.println();
  Serial.println("Relay is begin and inverted is true");
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Relay (LED) is Off");
  r.setOff();
  delay(2000);
  Serial.println("Relay (LED) is On");
  r.setOn();
  delay(2000);

}
