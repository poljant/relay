# relay
device relays

library relay

Seting and control the relays.

#define pinR D5

Relay r1;

r1.begin([pinR], [inverted]); init reley [or set pin] [or set inverted]

r1.setPin(pinR) set pin = pinR

r1.setOn(); realay set On

r1.setOff(); realay set Off

r1.read(); return HIGH or LOW

r1.isOn(): return On or Off

r1.inverted(value)	set inverted value=true or not inverted  value=false

r1.inverted() return true or false

#

