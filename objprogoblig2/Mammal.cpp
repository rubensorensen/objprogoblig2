#include "Mammal.h"

Mammal::Mammal(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement)
	:m_Name{ name }, m_Sex{ sex }, m_Species{ species }, m_Weight{ weight }, m_Movement{ movement }
{
}

void Mammal::PrintData()
{
	std::cout << "Type: Mammal" << std::endl;
	std::cout << "Species: " << Species() << std::endl;
	std::cout << "Name: " << m_Name << std::endl;
	std::cout << "Sex: " << Sex() << std::endl;
	std::cout << "Weight: " << m_Weight << "kg" << std::endl;
	std::cout << "Movement: " << Movement() << std::endl;
	std::cout << std::endl;
}

std::string Mammal::Name()
{
	return m_Name;
}


std::string Mammal::Movement()
{
	switch (m_Movement)
	{
	case e_Movement::Walking:
		return "Walking";
		break;
	case e_Movement::Jumping:
		return "Jumping";
		break;
	case e_Movement::Swimming:
		return "Swimming";
		break;
	case e_Movement::Flight:
		return "Flight";
		break;
	}
}


std::string Mammal::Sex()
{
	switch (m_Sex)
	{
	case e_Sex::Male:
		return "Male";
		break;
	case e_Sex::Female:
		return "Female";
		break;
	}
}


std::string Mammal::Species()
{
	switch (m_Species)
	{
	case e_Species::Zebra:
		return "Zebra";
		break;
	case e_Species::Bear:
		return "Bear";
		break;
	case e_Species::Moose:
		return "Moose";
		break;
	case e_Species::Fox:
		return "Fox";
		break;
	case e_Species::Llama:
		return "Llama";
		break;
	case e_Species::Kangaroo:
		return "Kangaroo";
		break;
	}
}