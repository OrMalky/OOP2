#include "Wholesaler.h"

Wholesaler::Wholesaler() : grower(nullptr) {};

Wholesaler::Wholesaler(std::string n, Grower* g) : Person(n), grower(g) {};

FlowerBouquet* Wholesaler::acceptOrder(Person* p, std::vector<std::string> order) {
	std::cout << "Wholesaler " << name << " forwards the request to Grower " << grower->getName() << std::endl;
	FlowerBouquet* bouquet = grower->prepareOrder(order);
	std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << name << std::endl;
	return bouquet;
}