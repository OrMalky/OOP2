#pragma once
#include "Person.h"
#include "FlowerBouquet.h"

class DeliveryPerson : public Person {
public:
	void deliver(Person* p, FlowerBouquet* bouquet);
};