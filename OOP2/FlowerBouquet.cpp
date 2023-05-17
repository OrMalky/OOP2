#include "FlowerBouquet.h"

FlowerBouquet::FlowerBouquet(std::vector<std::string> b) : bouquet(b), isArranged(false) {};

FlowerBouquet::FlowerBouquet() : bouquet(), isArranged(false) {};

void FlowerBouquet::arrange() {
	isArranged = true;
}

std::vector<std::string> FlowerBouquet::getVector() {
	return bouquet;
}
