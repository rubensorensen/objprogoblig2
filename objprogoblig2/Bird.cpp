#include "Bird.h"


Bird::Bird(std::string name, e_Sex sex, e_Species species, float weight, e_Movement movement)
	:m_Name{ name }, m_Sex{ sex }, m_Species{ species }, m_Weight{ weight }, m_Movement{ movement }
{
}


void Bird::PrintData()
{
	std::cout << "Type: Bird" << std::endl;
	std::cout << "Species: " << Species() << std::endl;
	std::cout << "Name: " << m_Name << std::endl;
	std::cout << "Sex: " << Sex() << std::endl;
	std::cout << "Weight: " << m_Weight << "kg" << std::endl;
	std::cout << "Movement: " << Movement() << std::endl;
	std::cout << std::endl;
}

std::string Bird::Movement()
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


std::string Bird::Sex()
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

std::string Bird::Species()
{
	switch (m_Species)
	{
	case 0:
		return "Sparrow";
		break;
	case 1:
		return "Penguin";
		break;
	case 2:
		return "Parrot";
		break;
	case 3:
		return "Owl";
		break;
	case 4:
		return "Toucan";
		break;
	}
}