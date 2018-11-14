#include "Pojazd.h"



Pojazd::Pojazd(RodzajPaliwa rodzajPaliwa, std::string marka) :
	_rodzajPaliwa{rodzajPaliwa},
	_marka{marka} {}

Pojazd::~Pojazd()
{
}

void Pojazd::daneTechniczne() {
	std::cout << "\nPojazd marki " << _marka <<
		" i jezdzacy na ";

	switch (_rodzajPaliwa) {
	case RodzajPaliwa::LPG:
		std::cout << "gaz\n";
		break;
	case RodzajPaliwa::Diesel:
		std::cout << "rope\n";
		break;
	case RodzajPaliwa::Benzyna:
		std::cout << "benzyne\n";
		break;
	}
}

std::string Pojazd::dejMarke() {
	return _marka;
}

Pojazd::RodzajPaliwa Pojazd::dejRodzajPaliwa() {
	return _rodzajPaliwa;
}
