#pragma once
#include <iostream>
#include "C_Calkulator.h"

namespace calkulator {
	namespace inner_price
	{
		class C_Calkulator_Price :
			public C_Calkulator
		{
		public:
			void Fuel_Consumption_And_Get_Price(float liter, float price, float km) override
			{
				this->price = price * liter;
				std::cout << "Refueling for "<<liter << " liters = " << this->price<<" $\n";

			}

		};
	}

}
