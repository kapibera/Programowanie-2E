
#include <iostream>

/*DRY - don't repeat yourself - nie powtarzaj siê*/


void task4()
{
	int numberToCheck, checkNumber;

	std::cout << "Podaj liczbê\n";
	std::cin >> numberToCheck;

	checkNumber = numberToCheck % 2;

	if (checkNumber > 0)
		std::cout << "liczba nie jest parzysta";
	else
		std::cout << "liczba jest parzysta";
}

void task5()
{
	int sideOfSquere;

	std::cout << "podaj dlugosc boku kwadratu:\n";
	std::cin >> sideOfSquere;

	if (sideOfSquere > 0)
	{
		int area = sideOfSquere * sideOfSquere;
		int circuit = 4 * sideOfSquere;

		std::cout << "Pole:" << area << " Obwod:" << circuit << "\n";
	}
	else
		std::cout << "Podaleœ nieprawidlowa wartoœæ boku. Powinna byæ wieksza od zera.\n";

}


void task6()
{

	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druge liczbe\n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber << "jest wieksza\n";
	else
		std::cout << secondNumber << "jest wieksza\n";
}

void task7()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	std::cout << "Podaj trzecia liczbe\n";
	std::cin >> thirdNumber;

	if (firstNumber > secondNumber && firstNumber > thirdNumber)
		std::cout << firstNumber << "jest najwieksza";
	else if (secondNumber > firstNumber && secondNumber > thirdNumber)
		std::cout << secondNumber << "jest najwieksza";
	else if (thirdNumber > firstNumber && thirdNumber > secondNumber)
		std::cout << thirdNumber << "jest najwieksza";

}

void task12()
{
	int temperatura;

	std::cout << "Podaj temperature: ";
	std::cin >> temperatura 

}





int main()
{
	//task4();
	//task5();
	//task6();
	//task7();

}