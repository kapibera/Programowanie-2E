

#include <iostream>

/*Napisz funkcj� kt�ra pobierze dwie liczby oraz wykona podstawowe operacje arytmetyczne*/

void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	/*  suma, r�nica,    iloczyn, iloraz, reszta z dzielenia*/
	int sum, difference, product, quotient, rest;
		
	sum = firstNumber + secondNumber;
	difference = firstNumber - secondNumber;
	product = firstNumber * secondNumber;
	quotient = firstNumber / secondNumber;
	rest = firstNumber % secondNumber;

	std::cout << "Suma" << sum << "\n";
	std::cout << "Roznica" << difference << "\n";
	std::cout << "Iloczyn" << product << "\n";
	std::cout << "Iloraz" << quotient << "\n";
	std::cout << "Reszta z dzielenia" << rest << "\n";
}


/*Przetestowa� r�ne fragmenty dzielenia*/
void task2()
{
	std::cout << "15 / 4 =" << (15 / 4) << "\n";
	std::cout << "15 / 4 =" << (15.0 / 4) << "\n";
	std::cout << "15 / 4 =" << (15 / 4.0) << "\n";
	std::cout << "15 / 4 =" << (15.0 / 4.0) << "\n";

}

int main()
{
	//task1();
	task2();

}

