#include "Zoo.h"
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"

int main(void)
{
	Zoo zoo;
	zoo.AddAnimal(new Mammal("Annie", Animal::e_Sex::Female, Mammal::e_Species::Zebra, 45, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Mammal("Ole", Animal::e_Sex::Male, Mammal::e_Species::Bear, 100, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Bird("Elisabeth", Animal::e_Sex::Female, Bird::e_Species::Owl, 0.50, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Mammal("Marit", Animal::e_Sex::Female, Mammal::e_Species::Fox, 12, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Mammal("Henry", Animal::e_Sex::Male, Mammal::e_Species::Zebra, 50, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Bird("Christian", Animal::e_Sex::Male, Bird::e_Species::Owl, 0.75, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Bird("Cristopher", Animal::e_Sex::Male, Bird::e_Species::Toucan, 1.3, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Mammal("Heidi", Animal::e_Sex::Female, Mammal::e_Species::Zebra, 25, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Mammal("Anders", Animal::e_Sex::Male, Mammal::e_Species::Llama, 40, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Bird("Silje", Animal::e_Sex::Female, Bird::e_Species::Owl, 0.83, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Mammal("Liv", Animal::e_Sex::Female, Mammal::e_Species::Llama, 40, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Bird("Jon", Animal::e_Sex::Male, Bird::e_Species::Sparrow, 0.09, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Fish("Nina", Animal::e_Sex::Female, Fish::e_Species::Goldfish, 0.12, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Mammal("Niels", Animal::e_Sex::Male, Mammal::e_Species::Kangaroo, 50, Animal::e_Movement::Jumping));
	zoo.AddAnimal(new Bird("Kristian", Animal::e_Sex::Male, Bird::e_Species::Penguin, 4.5, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Bird("Iver", Animal::e_Sex::Male, Bird::e_Species::Toucan, 2.03, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Mammal("Inger", Animal::e_Sex::Female, Mammal::e_Species::Bear, 80, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Mammal("Jens", Animal::e_Sex::Male, Mammal::e_Species::Kangaroo, 18, Animal::e_Movement::Jumping));
	zoo.AddAnimal(new Mammal("Ingrid", Animal::e_Sex::Female, Mammal::e_Species::Llama, 40, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Fish("Johannes", Animal::e_Sex::Male, Fish::e_Species::Cod, 3, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Mammal("Silje", Animal::e_Sex::Female, Mammal::e_Species::Bear, 75, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Mammal("Hans", Animal::e_Sex::Male, Mammal::e_Species::Fox, 10, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Fish("Ida", Animal::e_Sex::Female, Fish::e_Species::Goldfish, 0.1, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Bird("Gudrun", Animal::e_Sex::Female, Bird::e_Species::Parrot, 2.43, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Bird("Rasmus", Animal::e_Sex::Male, Bird::e_Species::Toucan, 1.76, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Fish("Anna", Animal::e_Sex::Female, Fish::e_Species::Swordfish, 2.3, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Bird("Berit", Animal::e_Sex::Female, Bird::e_Species::Penguin, 5.7, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Mammal("Maria", Animal::e_Sex::Female, Mammal::e_Species::Kangaroo, 30, Animal::e_Movement::Jumping));
	zoo.AddAnimal(new Bird("Randi", Animal::e_Sex::Female, Bird::e_Species::Parrot, 1.45, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Mammal("Kari", Animal::e_Sex::Female, Mammal::e_Species::Moose, 90, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Fish("Erich", Animal::e_Sex::Male, Fish::e_Species::Cod, 4.3, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Fish("Hilde", Animal::e_Sex::Female, Fish::e_Species::Guppy, 0.4, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Bird("Oliver", Animal::e_Sex::Male, Bird::e_Species::Parrot, 2.94, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Mammal("Peder", Animal::e_Sex::Male, Mammal::e_Species::Moose, 100, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Fish("Jacob", Animal::e_Sex::Male, Fish::e_Species::Swordfish, 3.7, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Bird("John", Animal::e_Sex::Male, Bird::e_Species::Sparrow, 0.10, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Bird("Marianne", Animal::e_Sex::Female, Bird::e_Species::Sparrow, 0.11, Animal::e_Movement::Flight));
	zoo.AddAnimal(new Fish("Knud", Animal::e_Sex::Male, Fish::e_Species::Guppy, 0.11, Animal::e_Movement::Swimming));
	zoo.AddAnimal(new Bird("Halvor", Animal::e_Sex::Male, Bird::e_Species::Penguin, 6.23, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Mammal("Lars", Animal::e_Sex::Male, Mammal::e_Species::Llama, 40, Animal::e_Movement::Walking));
	zoo.AddAnimal(new Bird("Astrid", Animal::e_Sex::Female, Bird::e_Species::Toucan, 0.9, Animal::e_Movement::Flight));

	zoo.PrintAnimals();

	std::cin.get();
	return 0;
}