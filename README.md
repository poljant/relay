# relay
biblioteka przekaźników

Biblioteka dla sterowania przekaźnikami.

#define pinR D5

Relay r1;

r1.begin(pinR); inicjuje przeaźnik i ustala pin
r1.setOn(); załącza przekaźnik
r1.setOff(); wyłącza przekaźnik
r1.read(); czyta stan przekaźnika


#

