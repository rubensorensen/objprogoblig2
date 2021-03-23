#include "Fish.h"

Fish::Fish(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement)
	:m_Name{ name }, m_Sex{ sex }, m_Species{ species }, m_Weight{ weight }, m_Movement{ movement }
{
}


void Fish::PrintData()
{
	std::cout << "Type: Fish" << std::endl;
	std::cout << "Species: " << Species() << std::endl;
	std::cout << "Name: " << m_Name << std::endl;
	std::cout << "Sex: " << Sex() << std::endl;
	std::cout << "Weight: " << m_Weight << "kg" << std::endl;
	std::cout << "Movement: " << Movement() << std::endl;
	std::cout << std::endl;
}

std::string Fish::Movement()
{
	switch (m_Movement)
	{
	case 0:
		return "Walking";
		break;
	case 1:
		return "Jumping";
		break;
	case 2:
		return "Swimming";
		break;
	case 3:
		return "Flight";
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