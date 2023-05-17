#pragma once
#include "Person.h"
#include "Gardener.h"

class Grower : public Person {
private:
	Gardener* gardener;

public:
	FlowerBouquet* prepareOrder(std::vector<std::string>);
};