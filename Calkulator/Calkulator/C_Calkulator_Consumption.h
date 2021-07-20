#pragma once
#include <iostream>
#include "C_Calkulator.h"
namespace calkulator {
	namespace inner_consumption
	{
		class C_Calkulator_Consumption :
			public C_Calkulator
		{
		public:
			 void Fuel_Consumption_And_Get_Price(float liter, float price, float km) override
			{
				this->liter = km / 10;
				std::cout << "Per your kilometer " << this->liter << " Liters needed\n";

			}

		};
	}

}

