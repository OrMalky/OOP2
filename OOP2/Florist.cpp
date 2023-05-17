#include "Florist.h"

Florist::Florist() {};

Florist::Florist(std::string n, Wholesaler* w, FlowerArranger* a, DeliveryPerson* d) :
	Person(n), wholesaler(w), flowerArranger(a), deliveryPerson(d) {};

void Florist::acceptOrder(Person* p, std::vector<std::string> order) {
	//Obtaining bouquet
	std::cout << "Florist " << name << " forwards request to Wholesaler " << wholesaler->getName() << std::endl;
	FlowerBouquet* bouquet = wholesaler->acceptOrder(p, order);
	std::cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << name << std::endl;

	//Arranging flowers
	std::cout << "Florist " << name << " request flowers arrangment from Flower Arranger " << flowerArranger->getName() << std::endl;
	flowerArranger->arrangeFlowers(bouquet);
	std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << name << std::endl;

	//Delivery
	std::cout << "Florist " << name << " forwards flowers to Delivery Person " << deliveryPerson->getName() << std::endl;
	deliveryPerson->deliver(p, bouquet);
}