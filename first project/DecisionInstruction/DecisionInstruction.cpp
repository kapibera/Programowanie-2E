
#include <iostream>

/*Napisz funkcje, kt�ra wczyta dwie liczby i wykona dzielenie na nich*/

void task1()
{

	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	int quotient;

	quotient = firstNumber / secondNumber;

	std::cout << "Iloraz" << quotient << "\n";
}

int main()
{
	task1()
}

