#pragma once
#include "libs.h"
#include "Lokalizacja.h"
#include "Sprzedawca.h"
#include "Urzednik.h"
#include "Policjant.h"
#include "Klient.h"
#include "Parking.h"


class Bazar
{
private:
	std::string _nazwaBazaru;

	Lokalizacja *_lokalizacja;
	Parking _parking;

	std::vector<Sprzedawca> _sprzedawcy;
	std::vector<Urzednik> _urzednicy;
	std::vector<Policjant> _policjanci;
	std::vector<Klient> _klienci;



public:
	Bazar();
	Bazar(
		std::string nazwa,
		Lokalizacja *lokalizacja,
		Parking parking,
		std::vector<Sprzedawca> sprzedawcy,
		std::vector<Urzednik> urzednicy,
		std::vector<Policjant> policjanci,
		std::vector<Klient> klienci
	);

	~Bazar();

	void dodajSprzedawce(Sprzedawca sprzedawca);
	void dodajUrzednika(Urzednik urzednik);
	void dodajPolicjanta(Policjant policjant);
	void dodajKlienta(Klient klient);
	void dodajKlienta();

	void aktualnyStanBazaru();


};

