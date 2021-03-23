#include "Fish.h"

Fish::Fish(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement)
	:m_Name{ name }, m_Sex{ sex }, m_Species{ species }, m_Weight{ weight }, m_Movement{ movement }
{
}


void Fish::PrintData()
{
	std::cout << m_Name << ", Fish, " << Species() << ", " << Sex() << ", " << m_Weight << "kg" << std::endl;
}

void Fish::Movement()
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


std::string Fish::Sex()
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

std::string Fish::Species()
{
	switch (m_Species)
	{
	case 0:
		return "Cod";
		break;
	case 1:
		return "Goldfish";
		break;
	case 2:
		return "Guppy";
		break;
	case 3:
		return "Swordfish";
		break;
	}
}