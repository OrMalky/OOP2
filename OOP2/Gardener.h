#pragma once
#include "Person.h"
#include "FlowerBouquet.h"

class Gardener : public Person{
public:
	FlowerBouquet* prepareBouquet(std::vector<std::string> order);
};