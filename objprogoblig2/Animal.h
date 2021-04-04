#pragma once

#include <string>
#include <iostream>

class Animal
{
public:
	enum class e_Sex { Male, Female };
	enum class e_Movement { Walking, Jumping, Swimming, Flight };
	virtual void PrintData() = 0;
	virtual std::string Name() = 0;

protected:
	virtual std::string Movement() = 0;
	virtual std::string Sex() = 0;
	virtual std::string Species() = 0;
};