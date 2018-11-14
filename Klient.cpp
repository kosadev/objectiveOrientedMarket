#include "Klient.h"



Klient::Klient()
{
}


Klient::Klient(std::string imie, char plec) :
	_imie{imie},
	_plec{plec} {}

Klient::~Klient()
{
}

void Klient::przedstawSie() {
	std::cout << "\nNazywam sie " << _imie <<
		" szukam ";
	(_plec == 'K') ? std::cout << "chlopa\n" : std::cout <<  "baby\n";
}
