
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

void task6()
{

	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsz¹ liczbê\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drug¹ liczbê\n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber << "jest wiêksza";
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

	if (secondNumber < firstNumber > thirdNumber)
		std::cout << firstNumber << "jest wieksza";
	else if (firstNumber < secondNumber > thirdNumber)
		std::cout << secondNumber << "jest wieksza";
	else if (firstNumber < thirdNumber > secondNumber)
		std::cout << thirdNumber << "jest wieksza";

}





int main()
{
	//task4();
	//task6();
	task7();

}