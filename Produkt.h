#pragma once
#include "libs.h"

class Produkt
{
private:

	std::string _nazwaProduktu;
	double _podazProduktu;
	double _cenaProduktu;

public:
	Produkt(std::string nazwaProduktu = "Mydlo i powidlo", double podaz = 0, double cena = 0);
	~Produkt();

	void infoProdukt();
	std::string dejNazweProdukty();
	double dejCeneProduktu();
	double dejPodazProduktu();
};

