#pragma once
#include "libs.h"
#include "Produkt.h"

class Sprzedawca
{

private:
	std::string _imie;
	std::vector<Produkt> _produkty;


public:
	Sprzedawca(std::string imie = "Typowy sprzedawca");
	Sprzedawca(std::string imie, std::vector<Produkt> produkty);
	~Sprzedawca();

	std::string przedstawSie();
	double ileZaTenProdukt(int idProduktu, int ilosc);
	void dodajProdukt(Produkt produkt);
	std::string dejImie();

};

