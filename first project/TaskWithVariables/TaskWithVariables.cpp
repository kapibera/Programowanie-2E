

#include <iostream>
#include <cmath>
/*Napisz funkcjê która pobierze dwie liczby oraz wykona podstawowe operacje arytmetyczne*/

void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	/*  suma, ró¿nica,    iloczyn, iloraz, reszta z dzielenia*/
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


/*Przetestowaæ ró¿ne fragmenty dzielenia*/
void task2()
{
	std::cout << "15 / 4 =" << (15 / 4) << "\n";
	std::cout << "15 / 4 =" << (15.0 / 4) << "\n";
	std::cout << "15 / 4 =" << (15 / 4.0) << "\n";
	std::cout << "15 / 4 =" << (15.0 / 4.0) << "\n";

}


/*Napisz funkjê która obiczy pole trójk¹ta*/
void task3()
{
	float base, height;

	std::cout << "Podaj podstawe trojkata\n";
	std::cin >> base;

	std::cout << "Podaj wysokosc trojkata\n";
	std::cin >> height;

	float area;
	area = 0.5 * base * height;

	std::cout << "Pole trojkata wynosi: " << area << "\n";

}


/*Napisz funkcjê, która obliczy przek¹tn¹ kwadratu*/
void task4()
{
	float side;

	std::cout << "Podaj bok kwadratu\n";
	std::cin >> side;

	float diagonal;
	diagonal = side * sqrt(2);

	std::cout << "Przekatna kwadratu: " << diagonal << "\n";

}


int main()
{
	//task1();
	//task2();
	task3()
}

