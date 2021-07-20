#pragma once
#include <iostream>
namespace calkulator {
#pragma region pure virtual class
	class C_Calkulator
	{
	protected:
		float km;
		float liter;
		float price;
#pragma region 
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
		friend std::ostream& operator << (std::ostream& out, const C_Calkulator& calkulator) {
			out << "kilometr: " << calkulator.km << "\n liter: " << calkulator.liter << "\n" << "price on liter: " << calkulator.price << "\n";
			return out;
		}
		virtual void Fuel_Consumption_And_Get_Price(float liter, float price, float km) = 0;


	};
#pragma endregion
};


