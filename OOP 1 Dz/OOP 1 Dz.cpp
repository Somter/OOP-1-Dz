// OOP 1 Dz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;    
class Fraction
{
private:
	int number;		

public:	
	void Init(int _number)	
	{
		number = _number;	
	}

	Fraction Sum(Fraction Denominator)
	{
		Fraction Rezult;
		Rezult.number = number + Denominator.number;	
		return Rezult;	
	}
	Fraction Subtraction(Fraction Denominator)	
	{
		Fraction Rezult;
		Rezult.number = number - Denominator.number;	
		return Rezult;		
	}
	Fraction Multiplication(Fraction Denominator)	
	{
		Fraction Rezult;
		Rezult.number = number * Denominator.number;	
		return Rezult;
	}
	Fraction Division(Fraction Denominator)
	{
		Fraction Rezult;
		Rezult.number = number / Denominator.number;	
		return Rezult;
	}
	void Print() 
	{
		cout << "Result: " << number << endl;	
	}
};

int main()
{
	int FirstNumber;	
	int SecondNumber;
	int choise;
		cout << "What do you want to do? " << endl;
		cout << "1 - Add numbers" << endl;
		cout << "2 - number subtraction" << endl;
		cout << "3 - Number multiplication" << endl;
		cout << "4 - dividing numbers" << endl;	
		cout << "Your choise: ";
		cin >> choise;

		cout << "Enter first number: ";
		cin >> FirstNumber;
		cout << "Enter second number: ";
		cin >> SecondNumber;	
		Fraction Numerator;
		Numerator.Init(FirstNumber);

		Fraction Denominator;
		Denominator.Init(SecondNumber);

		Fraction Rezult;
		switch (choise) {
		case 1:
			Rezult = Numerator.Sum(Denominator);
			Rezult.Print();
			break;
		case 2:
			Rezult = Numerator.Subtraction(Denominator);
			Rezult.Print();
			break;
		case 3:
			Rezult = Numerator.Multiplication(Denominator);
			Rezult.Print();
			break;
		case 4:
			Rezult = Numerator.Division(Denominator);
			Rezult.Print();
			break;
		}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
