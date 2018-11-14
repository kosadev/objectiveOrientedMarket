#include "Bron.h"



Bron::Bron(Typ typ) : _typ{typ} {}


Bron::~Bron()
{
}

Bron::Typ Bron::dejTyp() {
	return _typ;
}

void Bron::coZaBron() {
	
	switch (_typ) {
	case Bron::Brak:
		std::cout << "\nZadna bron\n";
		break;
	case Bron::Pala:
		std::cout << "\nPala\n";
		break;
	case Bron::Klamka:
		std::cout << "\nPistolet\n";
		break;
	}
}