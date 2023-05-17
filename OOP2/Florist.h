#pragma once
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

class Florist : public Person {
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;

public:
	Florist();
	Florist(std::string n, Wholesaler* w, FlowerArranger* a, DeliveryPerson* d);
	void acceptOrder(Person* p, std::vector<std::string> order);
};