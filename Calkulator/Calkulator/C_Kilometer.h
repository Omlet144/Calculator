#pragma once
#include <iostream>
namespace kilometr {
#pragma region pure virtual class
		class C_Calkulator
		{
		protected:
			float km;
			float liter;
			float price;
			C_Calkulator()
			{
				this->km = 0;
				this->liter = 0;
				this->price = 0;
			}
			C_Calkulator(float km, float liter)
			{
				this->km = km;
				this->liter = liter;
				this->price = price;
			}
		public:
			

	
		};
#pragma endregion
};


