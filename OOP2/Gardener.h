#pragma once
#include "Person.h"
#include "FlowerBouquet.h"

class Gardener : public Person{
public:
	Gardener();
	Gardener(std::string);
	FlowerBouquet* prepareBouquet(std::vector<std::string> order);
};