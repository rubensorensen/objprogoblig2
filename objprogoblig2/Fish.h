#pragma once

#include "Animal.h"

class Fish : public Animal
{
public:

	enum e_Species { Cod, Goldfish, Guppy, Swordfish };

	Fish(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement);
	void PrintData();
	std::string Movement();

private:
	std::string Sex();
	std::string Species();

	std::string m_Name;
	e_Sex m_Sex;
	e_Species m_Species;
	float m_Weight;
	e_Movement m_Movement;
};

