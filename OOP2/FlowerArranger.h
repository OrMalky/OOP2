#pragma once
#include "Person.h"
#include "FlowerBouquet.h"

class FlowerArranger : public Person {
public:
	FlowerArranger();
	FlowerArranger(std::string n);
	void arrangeFlowers(FlowerBouquet* bouquet);
};