#pragma once
#include "Person.h"
#include "Grower.h"

class Wholesaler : public Person {
private:
	Grower* grower;

public:
	Wholesaler();
	Wholesaler(std::string n, Grower* g);
	FlowerBouquet* acceptOrder(Person* p, std::vector<std::string> order);
};