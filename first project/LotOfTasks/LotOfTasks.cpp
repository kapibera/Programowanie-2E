
#include <iostream>


//1. Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.

void task1()
{
    int firstNumber, secondNumber, mean;

    std::cout << "podaj dwie liczby \n";
    std::cin >> firstNumber;
    std::cin >> secondNumber;

    mean = firstNumber + secondNumber;
    mean = mean / 2;
    std::cout << " srednia wynosi " << mean;

}

//2. Program obliczaj�cy pole prostok�ta.

void task1()
{
    int firstNumber, secondNumber, area;

    std::cout << "podaj dwie liczby \n";
    std::cin >> firstNumber;
    std::cin >> secondNumber;

    area = firstNumber * secondNumber;
    std::cout << "pole wynosi " << area;
}




//1. Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta

void task1if()
{
    int numberFromUser;

    std::cout << "podajesz liczbe: \n";
    std::cin >> numberFromUser;

    if (numberFromUser % 2 == 0)
    {
        std::cout << "liczba jest parzysta";
    }
    else
        std::cout << "nie parzysta";
}

//2. Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero

void task2if()
{
    int numberFromUser;

    std::cout << "podajesz liczbe: \n";
    std::cin >> numberFromUser;

    if (numberFromUser > 0)
        std::cout << "liczba jest dodatnia";
    else
        if (numberFromUser < 0)
            std::cout << "liczba jest ujemna";
        else
            std::cout << "zero ";
}

//3. Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym

void task3if()
{
    int numberFromUser;

    std::cout << "podajesz liczbe: \n";
    std::cin >> numberFromUser;

    if (numberFromUser % 4 == 0 && numberFromUser % 100 != 0)
        std::cout << "rok jest przest�pnym uidsgjkdjgugjkdfjkhiuoitgj";
    else
        std::cout << "rok jest normalny ";
}




int main()
{
    //task1();
    //task2();
    //task1if();
    //task2if();
    //task3if();

}


