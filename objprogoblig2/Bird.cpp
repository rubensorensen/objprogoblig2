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

std::string Bird::Name()
{
	return m_Name;
}

std::string Bird::Movement()
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


std::string Bird::Sex()
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

std::string Bird::Species()
{
	switch (m_Species)
	{
	case e_Species::Sparrow:
		return "Sparrow";
		break;
	case e_Species::Penguin:
		return "Penguin";
		break;
	case e_Species::Parrot:
		return "Parrot";
		break;
	case e_Species::Owl:
		return "Owl";
		break;
	case e_Species::Toucan:
		return "Toucan";
		break;
	}
}