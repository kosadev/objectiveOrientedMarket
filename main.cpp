#include <iostream>
#include "Bazar.h"
#include "Pojazd.h"

int main() {


	Lokalizacja* lokalizacja1 = new Lokalizacja("Zielonka", "Kolejowa 2", 100);
	Lokalizacja* lokalizacja2 = new Lokalizacja("Warszawa", "Marywilska 44", 2);

	Lokalizacja* lepszaLokalizacja = lokalizacja1->porownajLokalizacje(lokalizacja2);

	


	Sprzedawca mirek("Mirek"), stasiek("Stasiek"), halyna("Halyna");

	Produkt produkty[10] = {
		{"Jablko", 30, 0.22},
		{"Banan", 50, 0.32},
		{"Woda", 30, 0.02},
		{"Kebab", 200, 12},
		{"Baton", 30, 2.22},
		{"Elektronika", 20, 4.22},
		{"Zlom", 30, 0.75},
		{"Poduszka", 5, 20.99}
	};


	mirek.dodajProdukt(produkty[3]);
	mirek.dodajProdukt(produkty[4]);

	halyna.dodajProdukt(produkty[0]);
	halyna.dodajProdukt(produkty[1]);
	halyna.dodajProdukt(produkty[2]);

	stasiek.dodajProdukt(produkty[5]);
	stasiek.dodajProdukt(produkty[6]);
	stasiek.dodajProdukt(produkty[7]);

	std::vector<Sprzedawca> sprzedawcy({ stasiek, mirek, halyna });

	//tworze bronie dla przyszlych policjantow
	Bron pistolet(Bron::Typ::Klamka);
	Bron gumowaPala(Bron::Typ::Pala);

	//tworze policjantow i przypisuje im bron
	Policjant komendant(Policjant::Stanowisko::Komendant);
	komendant.dajMuBron(pistolet);
	Policjant aspirant(Policjant::Stanowisko::Aspirant);
	aspirant.dajMuBron(gumowaPala);

	//vector policjantow
	std::vector<Policjant> policjanci({ komendant, aspirant });

	//vector urzednikow
	std::vector<Urzednik> urzednicy({
		Urzednik("Myszowol", Urzednik::Instytucja::Zus),
		Urzednik("Brzeczyslaw", Urzednik::Instytucja::Bank),
		Urzednik("Wojciech")
		});


	//vector klientow
	std::vector<Klient> klienci({
		Klient("Basia", 'K'),
		Klient("Konrad", 'M'),
		Klient("Lukasz", 'M'),
		Klient("Maryla", 'K'),
		});


	//bawie sie Parkingiem
	Pojazd volkswagenGolf(Pojazd::RodzajPaliwa::Diesel, "Volkswagen");
	Pojazd frontera(Pojazd::RodzajPaliwa::Benzyna, "Opel");
	Pojazd lanos(Pojazd::RodzajPaliwa::LPG, "Daewoo");

	Parking parking(Parking::Typ::Podziemny);

	parking.zaparkuj(volkswagenGolf);
	parking.zaparkuj(frontera);
	parking.zaparkuj(lanos);//lanos sobie nie zaparkuje


	Bazar konkretnyBazar("Bazarek w Zielonce", lepszaLokalizacja, parking, sprzedawcy, urzednicy, policjanci, klienci);

	konkretnyBazar.aktualnyStanBazaru();












	system("pause");
	return 0;
}