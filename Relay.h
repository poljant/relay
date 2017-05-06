/*
 * Relay.h
 *
 *   Copyright (c) 2016. All rights reserved.
 *
 *      Author: Jan Trzciński  <poljant@post.pl>
 *
 *      Klasa Relay umożliwia obsługę i kontrolę pracy przkaźnika
 *      podłączonego do określonego pinu.

 */

#ifndef RELAY_H_
#define RELAY_H_

class Relay {
	int pin;
public:
	Relay();
	virtual ~Relay();
//	void setPin(int);
	void begin(int);
	void setOn();
	void setOff();
	int read();
};
#endif /* RELAY_H_ */
