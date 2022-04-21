#include<iostream>

using namespace std;

float addition(float, float);
float subtraktion(float, float);
float multiplikation(float, float);
float division(float, float);


int main()
{
	float e1, e2;
	char to; 
	cout << "Bitte eingeben (Zahl 1 - Rechenoperator - Zahl 2 - Enter) :";
	cin >> e1 >> e2 >> to;
	lbl1:
	switch (to)
	{
	case '+':cout << addition(e1, e2); break;
	case '-':cout << subtraktion(e1, e2); break;
	case '/':cout << division(e1, e2); break;
	case '*':cout << multiplikation(e1, e2); break;
	default: goto lbl1;

	}
	
	
}

 float addition(float x, float y)
{


	float summ = x + y;

	return summ;
}
float subtraktion(float x, float y)
{

float diff = x - y;

return  diff;


}
float multiplikation(float x, float y)
{

	float prod = x * y;

	return  prod;


}

float division(float x, float y)
{

	float div = x / y;

	return  div;


}

