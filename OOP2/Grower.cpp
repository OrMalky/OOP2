#include "Grower.h"

Grower::Grower() {};

Grower::Grower(std::string n, Gardener* g) : Person(n), gardener(g) {};

FlowerBouquet* Grower::prepareOrder(std::vector<std::string> order) {
	std::cout << "Grower " << name << " forwards the request to Gardener " << gardener->getName() << std::endl;
	FlowerBouquet* bouquet = gardener->prepareBouquet(order);
	std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << name << std::endl;
	return bouquet;
}