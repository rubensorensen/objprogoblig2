#pragma once

#include "Animal.h"
#include <vector>

class Zoo
{

public:
	~Zoo();
	void AddAnimal(Animal* animal);
	void PrintAnimals();
	void PrintMammals();
	void PrintFishes();
	void PrintBirds();


private:
	std::vector<Animal*> m_Animals;
};

