/*
 * Relay.cpp
 *
 *  Copyright (c) 2016. All rights reserved.
 *
 *      Author: Jan Trzciński  <poljant@post.pl>
 * modyfied 28-10-2019
 */

#include <Arduino.h>
#include "Relay.h"

Relay::Relay() {
    pin = 0;
    inv = false;
}

Relay::~Relay()
{

}
void Relay::begin(void)
{
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}
void Relay::begin(int p)
{
    pin = p;
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}

void Relay::begin(int p ,bool r)
{
    pin = p;
    inv = r;
    pinMode(pin, OUTPUT);
    digitalWrite(pin, inv ? HIGH : LOW);
}
void Relay::setOn(void)
{
    digitalWrite(pin, inv ? LOW : HIGH);
}
void Relay::setOff(void)
{
    digitalWrite(pin, inv ? HIGH : LOW);
}
int Relay::read(void)
{
    return (digitalRead(pin) and !inv) ? HIGH : LOW ;
}
bool Relay::isOn(void)
{
    return (digitalRead(pin) and !inv);
}
void Relay::setPin(int p){
    pin = p;
}
void Relay::inverted(bool r)
{
    inv= r;
}
bool Relay::inverted(void){
    return inv;
}
