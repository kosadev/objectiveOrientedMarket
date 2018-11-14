#include "Bazar.h"



Bazar::Bazar() : _nazwaBazaru{ "Bazarek" } {};

Bazar::Bazar(
	std::string nazwa,
	Lokalizacja *lokalizacja,
	Parking parking,
	std::vector<Sprzedawca> sprzedawcy,
	std::vector<Urzednik> urzednicy,
	std::vector<Policjant> policjanci,
	std::vector<Klient> klienci
) : 
	_nazwaBazaru{ nazwa },
	_lokalizacja{ lokalizacja },
	_parking{ parking },
	_sprzedawcy{ sprzedawcy },
	_urzednicy{ urzednicy },
	_policjanci{ policjanci },
	_klienci{ klienci } {}

Bazar::~Bazar() {}

void Bazar::dodajSprzedawce(Sprzedawca sprzedawca) {
	_sprzedawcy.push_back(sprzedawca);
}

void Bazar::dodajUrzednika(Urzednik urzednik) {
	_urzednicy.push_back(urzednik);
}


void Bazar::dodajPolicjanta(Policjant policjant) {
	_policjanci.push_back(policjant);
}

void Bazar::dodajKlienta(Klient klient) {
	_klienci.push_back(klient);
}

void Bazar::dodajKlienta() {

	std::string imie;
	char plec;

	std::cout << "\nPodaj imie nowego klienta: ";
	std::cin >> imie;

	std::cout << "\nPodaj plec nowego klienta(M/K): ";
	std::cin >> plec;

	_klienci.push_back(Klient(imie, plec));

	std::cout << "\n\n";
}

void Bazar::aktualnyStanBazaru() {


	std::cout << "\n\n" << _nazwaBazaru << "\n";

	_lokalizacja->szczegolyLokalizacji();

	std::cout << "\nNa bazarze handluje " << _sprzedawcy.size() << " sprzedawcow. Niech sie przedstawia:\n";

	for_each(_sprzedawcy.begin(), _sprzedawcy.end(), [](Sprzedawca sprzedawca) {
		std::cout << "\t";
		sprzedawca.przedstawSie();
	});

	std::cout << "\n\nGrasuje tutaj " << _urzednicy.size() << " urzednikow. Oto oni:\n";

	for_each(_urzednicy.begin(), _urzednicy.end(), [](Urzednik urzednik) {
		std::cout << "\t";
		urzednik.przedstawSie();
	});

	std::cout << "\n\nPorzadku pilnuje " << _policjanci.size() << " policjantow. Oto oni:\n";

	for_each(_policjanci.begin(), _policjanci.end(), [](Policjant policjant) {
		std::cout << "\t";
		policjant.infoPanPolicjant();
	});

	std::cout << "\n\n" << _klienci.size() << " kupcow szuka nie tylko dobrej okazji. Oto oni:\n";

	for_each(_klienci.begin(), _klienci.end(), [](Klient klient) {
		std::cout << "\t";
		klient.przedstawSie();
	});


	std::cout << "\n\nBazar moze sie pochwalic parkingiem:\n";

	_parking.informacjeParkingowe();

	std::cout << "\n\n";

}