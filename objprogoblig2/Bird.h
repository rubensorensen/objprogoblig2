#pragma once

#include "Animal.h"

class Bird : public Animal
{
public:

	enum e_Species { Sparrow, Penguin, Parrot, Owl, Toucan };

	Bird(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement);
	void PrintData();
	void Movement();

private:
	std::string Sex();
	std::string Species();
	
	std::string m_Name;
	e_Sex m_Sex;
	e_Species m_Species;
	float m_Weight;
	e_Movement m_Movement;
};

