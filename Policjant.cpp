#include "Policjant.h"



Policjant::Policjant(Stanowisko stanowisko) : _stanowisko{stanowisko} {}

Policjant::~Policjant() {}

void Policjant::infoPanPolicjant() {
	std::cout << "Pan Policjant atakuje przy uzyciu: ";
	_bron.coZaBron();
	std::cout << std::endl;
}


void Policjant::dajMuBron(Bron bron) {
	_bron = bron;
}


void Policjant::atak(Sprzedawca sprzedawca) {

	if (_bron.dejTyp() == Bron::Typ::Brak) {
		std::cout << "\nNie mam czym palowac\n";
	}
	else {
		std::cout << "\n" << sprzedawca.dejImie() << " zostal ";
		switch (_bron.dejTyp()) {
		case Bron::Typ::Pala:
			std::cout << "spalowany\n";
			break;
		case Bron::Typ::Klamka:
			std::cout << "postrzelony\n";
			break;
		}
	}
}
