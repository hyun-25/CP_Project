#include "io.h"
int SumNumber(int a, int b)
{
	int Sum = a + b;
	//cout << "Int : " << Sum << endl;

	return Sum;
}

float SumNumber(float a, float b)
{
	float Sum = a + b;
	cout << "Float : " << Sum << endl;

	return Sum;
}

template <typename T>
T SumType(T a, T b)
{
	return (a + b);
}