#pragma once
#include "libs.h"

class Pojazd
{


public:
	enum RodzajPaliwa {
		LPG,
		Diesel,
		Benzyna
	};

	Pojazd(RodzajPaliwa rodzajPaliwa = RodzajPaliwa::Benzyna, std::string marka = "Opelek");
	~Pojazd();

	void daneTechniczne();
	std::string dejMarke();
	RodzajPaliwa dejRodzajPaliwa();


private:
	RodzajPaliwa _rodzajPaliwa;
	std::string _marka;
};

