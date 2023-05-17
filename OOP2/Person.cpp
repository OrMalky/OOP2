#include "Person.h"
#include "Florist.h"

Person::Person(std::string n) : name(n) {};

Person::Person() : name("") {};

std::string Person::getName() {
	return name;
}

void Person::printVector(std::vector<std::string> v) {
	for (int i = 0; i < v.size(); i++)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << v[i];
	}
	std::cout << std::endl;
}

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> order) {
	std::cout << name << " orders flowers to " << person->getName() << " from " << florist->getName() << ": ";
	printVector(order);
	florist->acceptOrder(person, order);
}

void Person::acceptFlowers(FlowerBouquet* bouquet) {
	std::cout << name << " accepts the flowers: ";
	printVector(bouquet->getVector());
	delete bouquet;
}