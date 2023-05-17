#pragma once
#include "Person.h"
#include "Gardener.h"

class Grower : public Person {
private:
	Gardener* gardener;

public:
	Grower();
	Grower(std::string n, Gardener* g);
	FlowerBouquet* prepareOrder(std::vector<std::string>);
};