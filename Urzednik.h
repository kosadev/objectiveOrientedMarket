#pragma once
#include "libs.h"
#include "Sprzedawca.h"

class Urzednik
{
public:
	enum Instytucja {
		Zus,
		Skarbowy,
		Bank
	};

	Urzednik(std::string imie, Instytucja instytucja = Instytucja::Skarbowy);
	~Urzednik();

	void przedstawSie();
	void atak(Sprzedawca sprzedawca);

private:
	std::string _imie;
	Instytucja _instytucja;
};

