#pragma once
#include "libs.h"

//to bedzie do palowania dla policjantow
class Bron
{
public:

	enum Typ {
		Pala,
		Klamka,
		Brak
	};

	Bron(Typ typ=Typ::Brak);
	~Bron();

	Typ dejTyp();
	void coZaBron();

private:
	Typ _typ;
};

