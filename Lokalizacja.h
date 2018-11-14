#pragma once
#include "libs.h"

class Lokalizacja
{
	std::string _miasto;
	std::string _adres;
	int _prestizLokalizacji;

public:
	Lokalizacja();
	Lokalizacja(std::string miasto, std::string adres, int prestiz);
	~Lokalizacja();

	void szczegolyLokalizacji();
	Lokalizacja* porownajLokalizacje(Lokalizacja* lokalizacja);

};

