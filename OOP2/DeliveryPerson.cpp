#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson() {};

DeliveryPerson::DeliveryPerson(std::string n) : Person(n) {};

void DeliveryPerson::deliver(Person* p, FlowerBouquet* bouquet) {
	std::cout << "Delivery Person " << name << " delivers flowers to " << p->getName() << std::endl;
	p->acceptFlowers(bouquet);
}