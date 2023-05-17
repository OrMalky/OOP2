#include "FlowerArranger.h"

FlowerArranger::FlowerArranger() {};

FlowerArranger::FlowerArranger(std::string n) : Person(n) {};

void FlowerArranger::arrangeFlowers(FlowerBouquet* bouquet) {
	bouquet->arrange();
	std::cout << "Flower Arranger " << name << " arranges the flowers" << std::endl;
}