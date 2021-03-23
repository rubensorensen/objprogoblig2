#pragma once

#include <string>
#include <iostream>

class Animal
{
public:
	enum e_Sex { Male, Female };
	enum e_Movement { Walking, Jumping, Swimming, Flight };

	virtual void PrintData() = 0;
	virtual std::string Movement() = 0;
};