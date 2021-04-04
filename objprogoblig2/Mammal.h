#pragma once

#include "Animal.h"

class Mammal : public Animal
{
public:

	enum class e_Species { Zebra, Bear, Moose, Fox, Llama, Kangaroo };

	Mammal(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement);
	void PrintData();
	std::string Name();

private:
	std::string Movement();
	std::string Sex();
	std::string Species();

	std::string m_Name;
	e_Sex m_Sex;
	e_Species m_Species;
	float m_Weight;
	e_Movement m_Movement;
};

