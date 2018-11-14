#include "Parking.h"

Parking::Parking(Typ typ, int maxMiejsca) :
	_typParkingu{typ},
	_maxMiejsca{maxMiejsca} {}


Parking::~Parking()
{
}

void Parking::zaparkuj(Pojazd pojazd) {
	if (_pojazdyNaParkingu.size() == _maxMiejsca) {
		std::cout << "\nNie ma gdzie zaparkowac" << std::endl;
	}
	else if (_typParkingu == Typ::Podziemny && pojazd.dejRodzajPaliwa() == Pojazd::RodzajPaliwa::LPG) {
		std::cout << "\nNo z gazem w podziemnym sobie nie staniesz";
	}
	else {
		_pojazdyNaParkingu.push_back(pojazd);
		std::cout << "\nZaparkowano na miejscu nr " << _pojazdyNaParkingu.size() - 1 << std::endl;
	}
}

void Parking::zwolnijMiejsceParkingowe(int indeksMiejsca) {
	if (_pojazdyNaParkingu.size() == 0) {
		std::cout << "\nParking jest pusty\n";
	}
	else if(indeksMiejsca>=0 && indeksMiejsca<_maxMiejsca){
		_pojazdyNaParkingu.erase(_pojazdyNaParkingu.begin() + indeksMiejsca);
		std::cout << "\nNo i poprakowane\n";
	}
	else {
		std::cout << "\nBledny indeks\n";
	}
}

int Parking::iloscWolnychMiejsc() {
	return _maxMiejsca - _pojazdyNaParkingu.size();
}


void Parking::informacjeParkingowe() {
	
	std::cout << "\nParking jest ";
	switch (_typParkingu) {
	case Typ::Naziemny:
		std::cout << "naziemny\n";
		break;
	case Typ::Podziemny:
		std::cout << "podziemny\n";
		break;
	}

	if (this->iloscWolnychMiejsc() == 0) {
		std::cout << "Parking jest pusty\n";
	}
	else {
		std::cout << "Na stoi " << _pojazdyNaParkingu.size() << " a konkretnie: \n";


		for_each(_pojazdyNaParkingu.begin(), _pojazdyNaParkingu.end(), [](Pojazd pojazd) {
			std::cout << pojazd.dejMarke() << "\n";
		});
	}
}