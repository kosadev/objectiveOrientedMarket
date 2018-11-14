#include "Sprzedawca.h"


Sprzedawca::Sprzedawca(std::string imie) : _imie{ imie } {};

Sprzedawca::Sprzedawca(std::string imie, std::vector<Produkt> produkty) :
	_imie{ imie },
	_produkty{ produkty }
{

}

Sprzedawca::~Sprzedawca()
{
}

std::string Sprzedawca::przedstawSie() {

	std::cout << "Dzien dobry! Nazywam sie " << _imie << std::endl;

	if (!_produkty.empty()) {
		std::cout << "Moge Ci zaoferowac:\n";

		for_each(_produkty.begin(), _produkty.end(), [](Produkt produkt) {
			produkt.infoProdukt();
		});
	}



	return _imie;
}


double Sprzedawca::ileZaTenProdukt(int idProduktu, int ilosc) {

	double cena = ilosc * _produkty.at(idProduktu).dejCeneProduktu();

	std::cout << "\nPanie kochany za " << ilosc << " sztuk " << _produkty.at(idProduktu).dejNazweProdukty()
		<< "\nto ja chca " << cena << " i ani mysle cos opuscic!\n";

	return cena;
}

void Sprzedawca::dodajProdukt(Produkt produkt) {
	_produkty.push_back(produkt);
}

std::string Sprzedawca::dejImie() {
	return _imie;
}