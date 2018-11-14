#include "Produkt.h"



Produkt::Produkt(std::string nazwaProduktu, double podaz, double cena) :
	_nazwaProduktu{nazwaProduktu},
	_podazProduktu{podaz},
	_cenaProduktu{cena}
{ }


Produkt::~Produkt()
{
}


void Produkt::infoProdukt() {

	std::cout << _nazwaProduktu << ":\n- Cena: " << _cenaProduktu
		<< "\n- Podaz produktu: " << _podazProduktu << std::endl;
}

std::string Produkt::dejNazweProdukty() {
	return _nazwaProduktu;
}

double Produkt::dejCeneProduktu() {
	return _cenaProduktu;
}

double Produkt::dejPodazProduktu() {
	return _podazProduktu;
}