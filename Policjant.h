#pragma once
#include "Bron.h"
#include "Sprzedawca.h"

class Policjant
{
public:
	enum Stanowisko {
		Aspirant,
		Detektyw,
		Komendant
	};

	Policjant(Stanowisko stanowisko = Stanowisko::Aspirant);
	~Policjant();

	void infoPanPolicjant();
	void dajMuBron(Bron bron);
	void atak(Sprzedawca sprzedawca);

private:
	Policjant::Stanowisko _stanowisko;
	Bron _bron;





};

