#include "Zoo.h"
#include "Mammal.h"
#include "Fish.h"
#include "Bird.h"

Zoo::~Zoo()
{
	for (auto& a : m_Animals)
	{
		delete a;
		a = nullptr;
	}
	m_Animals.clear();
}

void Zoo::AddAnimal(Animal* animal)
{
	m_Animals.emplace_back(animal);
}

void Zoo::PrintAnimals()
{
	for (auto& a : m_Animals)
	{
		a->PrintData();
		a->Movement();
		std::cout << std::endl;
	}
}


void Zoo::PrintMammals()
{
	Mammal* m = nullptr;
	for (auto& a : m_Animals)
	{
		// Dynamic cast returns nullptr if casting is not possible
		m = { dynamic_cast<Mammal*>(a) };

		if (m != nullptr)
		// Only execute this block if casting was possible
		{
			a->PrintData();
			a->Movement();
			std::cout << std::endl;
			m = nullptr;
		}
	}
	delete m;
}


void Zoo::PrintBirds()
{
	Bird* b = nullptr;
	for (auto& a : m_Animals)
	{
		b = { dynamic_cast<Bird*>(a) };
		if (b != nullptr)
		{
			a->PrintData();
			a->Movement();
			std::cout << std::endl;
			b = nullptr;
		}
	}
	delete b;
}


void Zoo::PrintFishes()
{
	Fish* f = nullptr;
	for (auto& a : m_Animals)
	{
		f = { dynamic_cast<Fish*>(a) };
		if (f != nullptr)
		{
			a->PrintData();
			a->Movement();
			std::cout << std::endl;
			f = nullptr;
		}
	}
	delete f;
}