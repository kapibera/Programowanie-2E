
#include <iostream>

/*DRY - don't repeat yourself - nie powtarzaj si�*/


void task4()
{
	int numberToCheck, checkNumber ;

	std::cout << "Podaj liczb�\n";
	std::cin >> numberToCheck;

	checkNumber = numberToCheck % 2;

	if (checkNumber > 0)
		std::cout << "liczba nie jest parzysta";
	else
			std::cout << "liczba jest parzysta";
}

void task6()
{



}





int main()
{
	task4();
	task6();

}