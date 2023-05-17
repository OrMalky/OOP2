#pragma once
#include "Person.h"
#include "FlowerBouquet.h"

class DeliveryPerson : public Person {
public:
	DeliveryPerson();
	DeliveryPerson(std::string n);
	void deliver(Person* p, FlowerBouquet* bouquet);
};