#pragma once
#include <iostream>
#include "C_Calkulator.h"

namespace calkulator {
	namespace inner_consumption
	{
		class C_Calkulator_Price :
			public C_Calkulator
		{
		public:
			void Fuel_Consumption_And_Get_Price(float liter, float price, float km) override
			{
				this->price = km / 10;
				std::cout << "Per your kilometer " << this->liter << " Liters needed\n";

			}

		};
	}

}
