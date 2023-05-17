#pragma once
#include "FlowerBouquet.h"
#include <string>
#include <vector>
#include <iostream>

class Florist;

class Person {
protected:
	std::string name;

public:
	Person();
	Person(std::string n);
	void orderFlowers(Florist* florist, Person* person, std::vector<std::string> order);
	void acceptFlowers(FlowerBouquet* bouquet);
	std::string getName();

private:
	void printVector(std::vector <std::string> v);	//Prints a vector of strings with comma sepperation. Used for printing orders
};