#include "Lokalizacja.h"



Lokalizacja::Lokalizacja()
{
}


Lokalizacja::Lokalizacja(std::string miasto, std::string adres, int prestiz) : 
	_miasto{miasto},
	_adres{adres},
	_prestizLokalizacji{prestiz} {}


Lokalizacja::~Lokalizacja()
{
}

void Lokalizacja::szczegolyLokalizacji() {
	std::cout << "Bazar miescie sie w " << _miasto << " przy ulicy " << _adres << std::endl;
}

Lokalizacja* Lokalizacja::porownajLokalizacje(Lokalizacja* lokalizacja) {
	
	if (this->_prestizLokalizacji >= lokalizacja->_prestizLokalizacji) {
		return this;
	}
	else {
		return lokalizacja;
	}
}