
#include <iostream>
#include "C_Calkulator_Consumption.h"
#include "C_Calkulator_Price.h"

using namespace calkulator::inner_consumption;
using namespace calkulator::inner_price;
int main()
{
    C_Calkulator_Consumption liters_spent;
    liters_spent.Fuel_Consumption_And_Get_Price(0,0,200);
    std::cout << "\n";

    C_Calkulator_Price refueling_price;
    refueling_price.Fuel_Consumption_And_Get_Price(20, 2, 0);

}
