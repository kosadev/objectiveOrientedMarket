#include "Urzednik.h"



Urzednik::Urzednik(std::string imie, Instytucja instytucja) : 
	_imie{imie},
	_instytucja { instytucja } {}


Urzednik::~Urzednik()
{
}

void Urzednik::przedstawSie() {
	std::cout << "Nazywam sie " << _imie <<
		"\nobrabuje Cie w imieniu ";

	switch(_instytucja) {
	case Instytucja::Zus:
		std::cout << " ZUSu\n";
		break;
	case Instytucja::Skarbowy:
		std::cout << " Urzedu Skarbowego\n";
		break;
	case Instytucja::Bank:
		std::cout << " Banku\n";
		break;
	}
}


void Urzednik::atak(Sprzedawca sprzedawca) {
	std::cout << "\nSprzedawca " << sprzedawca.dejImie() <<
		" zosta³ ";

	switch (_instytucja) {
	case Instytucja::Zus:
		std::cout << " obciazony kosztem zaleglych skladek\n";
		break;
	case Instytucja::Skarbowy:
		std::cout << " oskarzony o oszustwa podatkowego\n";
		break;
	case Instytucja::Bank:
		std::cout << " wyeksmitowany z uwagi na zaleglosci w splacie kredytu\n";
		break;
	}
}