#pragma once
#include "libs.h"
#include "Pojazd.h"


class Parking
{

public:
	enum Typ {
		Podziemny,
		Naziemny
	};

	Parking(Typ typ = Typ::Naziemny, int maxMiejsca = 10);
	~Parking();

	void zaparkuj(Pojazd pojazd);
	void zwolnijMiejsceParkingowe(int indeksMiejsca);
	int iloscWolnychMiejsc();
	void informacjeParkingowe();

private:
	std::vector<Pojazd> _pojazdyNaParkingu;
	Typ _typParkingu;
	int _maxMiejsca;

};

