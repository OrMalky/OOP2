#pragma once
#include "Person.h"
#include "FlowerBouquet.h"

class FlowerArranger : public Person {
public:
	void arrangeFlowers(FlowerBouquet* bouquet);
};