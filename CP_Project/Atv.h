#pragma once
#include "Bike.h"


class Atv : public Bike
{
	int Year = 2022;

public :
	void Print();
	void PrintPrice();
};
