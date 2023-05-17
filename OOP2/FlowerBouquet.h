#pragma once
#include <vector>
#include <string>

class FlowerBouquet {
private:
	std::vector<std::string> bouquet;
	bool isArranged;

public:
	void arrange();
};