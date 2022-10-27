
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

	if (secondNumber != 0);
	quotient = firstNumber / secondNumber;

	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";

	if (secondNumber == 0);
	std::cout << "Dzielenie przez zero!!!\n";


	if (secondNumber != 0);
	{	
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	
	
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

	if (numberToCheck > 0)
		std::cout << "Liczba wiêksza od zera\n";
	else
		std::cout << "Liczba mniejsza od zera\n";

}

/*Napisz funkcje, która wczyta liczbê i wyœwietli informacjê czy jest ona w zakresie <10, 25>*/
void task3()
{
	int numberToCheck;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> numberToCheck;

	std::cout << "Liczba jest w zakresie\n";
	std::cout << "Liczba nie jest w zakresie\n";
}



int main()
{
	//task1();
	//task2();
	task3()
}