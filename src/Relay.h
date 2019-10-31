/*
 * Relay.h
 *
 *   Copyright (c) 2016. All rights reserved.
 *
 *      Author: Jan Trzciński  <poljant@post.pl>
 *
 *      Klasa Relay umożliwia obsługę i kontrolę pracy przkaźnika
 *      podłączonego do określonego pinu.
 *   modyfikowano 28-10-2019
  */

#ifndef RELAY_H_
#define RELAY_H_

class Relay {
    int pin;
    bool inv;
public:
    Relay();
    virtual ~Relay();
    void setPin(int);
    void begin();
    void begin(int );
    void begin(int , bool );
    void setOn();
    void setOff();
    int read();
    bool isOn();
    bool inverted();
    void inverted(bool);
};
#endif /* RELAY_H_ */
