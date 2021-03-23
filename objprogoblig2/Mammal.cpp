#include "Mammal.h"

Mammal::Mammal(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement)
	:m_Name{ name }, m_Sex{ sex }, m_Species{ species }, m_Weight{ weight }, m_Movement{ movement }
{
}

void Mammal::PrintData()
{
	std::cout << m_Name << ", Mammal, " << Species() << ", " << Sex() << ", " << m_Weight << "kg" << std::endl;
}


void Mammal::Movement()
{
	switch (m_Movement)
	{
	case 0:
		std::cout << "Walking" << std::endl;
		break;
	case 1:
		std::cout << "Jumping" << std::endl;
		break;
	case 2:
		std::cout << "Swimming" << std::endl;
		break;
	case 3:
		std::cout << "Flight" << std::endl;
		break;
	}
}


std::string Mammal::Sex()
{
	switch (m_Sex)
	{
	case 0:
		return "Male";
		break;
	case 1:
		return "Female";
		break;
	}
}

std::string Mammal::Species()
{
	switch (m_Species)
	{
	case 0:
		return "Zebra";
		break;
	case 1:
		return "Bear";
		break;
	case 2:
		return "Moose";
		break;
	case 3:
		return "Fox";
		break;
	case 4:
		return "Llama";
		break;
	case 5:
		return "Kangaroo";
		break;
	}
}