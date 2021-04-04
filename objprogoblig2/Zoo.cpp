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


void Zoo::RemoveAnimal(const std::string& name)
{
	for (size_t i{ m_Animals.size() - 1 }; i >= 0; i--)
	{
		if (m_Animals[i]->Name() == name)
		{
			delete m_Animals[i];
			m_Animals[i] = nullptr;
			m_Animals.erase(m_Animals.cbegin() + i);
			return;
		}
	}
}


void Zoo::PrintAnimals()
{
	for (auto& a : m_Animals)
	{
		a->PrintData();
	}
}


void Zoo::PrintMammals()
{
	for (auto& a : m_Animals)
	{
		//	Dynamic cast returns nullptr if casting is not possible
		if (dynamic_cast<Mammal*>(a) != nullptr)
		{
			a->PrintData();
		}
	}
}


void Zoo::PrintBirds()
{
	for (auto& a : m_Animals)
	{
		//	Dynamic cast returns nullptr if casting is not possible
		if (dynamic_cast<Bird*>(a) != nullptr)
		{
			a->PrintData();
		}
	}
}


void Zoo::PrintFishes()
{
	for (auto& a : m_Animals)
	{
		//	Dynamic cast returns nullptr if casting is not possible
		if (dynamic_cast<Fish*>(a) != nullptr)
		{
			a->PrintData();
		}
	}
}