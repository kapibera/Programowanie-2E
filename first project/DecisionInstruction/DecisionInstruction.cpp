
#include <iostream>

/*DRY - don't repeat yourself - nie powtarzaj siê*/

/*Napisz funkcje, która wczyta dwie liczby i wykona dzielenie na nich*/
void task1()
{

	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	//iloaz
	int quotient;

	/*if (secondNumber != 0);
		quotient = firstNumber / secondNumber;

	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";

	if (secondNumber == 0);
	std::cout << "Dzielenie przez zero!!!\n";*/

	if (secondNumber != 0);
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero!!!\n";
	}

	std::cout << "Koniec programu\n";

}

/*Napisz funkcje, która wczyta liczbê i wyœwietli informacje czy jest ona dodatnia czy nie*/
void task2()
{
	int numberToCheck;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> numberToCheck;


}



int main()
{
	//task1();
	task2();
}