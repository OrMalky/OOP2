#include <iostream>
#include "FlowerBouquet.h"
#include "Person.h"
#include "Gardener.h"
#include "Wholesaler.h"
#include "Grower.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
#include "Florist.h"

int main()
{
    Person chris("Chris");
    Person robin("Robin");

    Gardener garett("Garett");
    Grower gray("Gray", &garett);
    Wholesaler watson("Watson", &gray);

    FlowerArranger flora("Flora");
    DeliveryPerson dylan("Dylan");

    Florist fred("Fred", &watson, &flora, &dylan);

    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };
    chris.orderFlowers(&fred, &robin, order);

    std::cout << "Press any key to continue...";
    std::cin.ignore();

    return 0;
}
