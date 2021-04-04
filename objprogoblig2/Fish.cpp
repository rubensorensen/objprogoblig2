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

std::string Fish::Name()
{
	return m_Name;
}

std::string Fish::Movement()
{
	switch (m_Movement)
	{
	case e_Movement::Walking :
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


std::string Fish::Sex()
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

std::string Fish::Species()
{
	switch (m_Species)
	{
	case e_Species::Cod:
		return "Cod";
		break;
	case e_Species::Goldfish:
		return "Goldfish";
		break;
	case e_Species::Guppy:
		return "Guppy";
		break;
	case e_Species::Swordfish:
		return "Swordfish";
		break;
	}
}