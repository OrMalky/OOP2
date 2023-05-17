#include "Gardener.h"

Gardener::Gardener() {};

Gardener::Gardener(std::string n) : Person(n) {};

FlowerBouquet* Gardener::prepareBouquet(std::vector<std::string> order) {
	std::cout << "Gardener " << name << " prepares the flowers" << std::endl;
	return new FlowerBouquet(order);
}