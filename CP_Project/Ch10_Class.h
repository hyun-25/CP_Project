#pragma once

class Car
{
	char Name[30];
	int Year;
	int Velocity;

 public :

	 Car(int V)
	 {
		 //Name[30] = N;
		 //Year = Y;
		 Velocity = V;

	 }
	void DriveVelocity();
	void DriveTime();

};