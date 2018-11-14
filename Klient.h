#pragma once
#include "libs.h"

class Klient
{
	std::string _imie;
	char _plec;

public:
	Klient();
	Klient(std::string imie, char plec);
	~Klient();

	void przedstawSie();
};

