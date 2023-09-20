#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private : 
	
	int Year;
	
public :
	int Price;
	// Constructor ����
	Vehicle();
	Vehicle(int _Year, int _Price);

	//Destructor ����
	~Vehicle();

	//Method
	
	void PrintPrice();
	void PrintYear();
	int GetYear();
	void SetYear(int newYear);

};