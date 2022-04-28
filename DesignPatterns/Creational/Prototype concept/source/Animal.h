#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
#include <cstring>

using namespace std;

class Animal
{
protected:
	char _hairColor[10];
	int _hairLength, _tail, _weight, _height, _age;
	int _intelligence, _stubbornness, _agressiveness;

public:
	virtual Animal * clone() = 0;
	void setHairLength(int length) {_hairLength = length; }
	void setHairColor(const char * color) { strcpy(_hairColor, color); }
	void setTail(int length) { _tail = length; }
	void setWeight(int weight) {_weight = weight; }
	void setHeight(int height) {_height = height; }
	void setAge(int age) { _age = age; }
};

#endif