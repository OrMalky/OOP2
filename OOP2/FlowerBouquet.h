#pragma once
#include <vector>
#include <string>

class FlowerBouquet {
private:
	std::vector<std::string> bouquet;
	bool isArranged;

public:
	FlowerBouquet();
	FlowerBouquet(std::vector<std::string> b);
	void arrange();
	std::vector<std::string> getVector();
};