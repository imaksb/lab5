#include <iostream>
#include "MainClass.h"
#include "NewClass.h"
int main()
{
    //MainClass m(1343);
    //MainClass::printNumber(m);

    //int number = MainClass::getNumber(m);
    //std::cout << number;
    char* someWord = new char;
    std::cin >> someWord;
    NewClass n(120, someWord);
    n.printNumber(n);
    n.ascendingSort();

    n.printNumber(n);

    std::cout << (n != 10);
    ///MainClass m(160);
    //MainClass m1(3);
    // m.input();
    //MainClass::printNumber(m);
    
    //PrimeFactors(m);
    // findLCM(m, m1);
    // СonvertToBase(m, 16);
    //!m;
   // MainClass::printNumber(m);

    // int a = MainClass::getNumber(m);
    // std::cout << a;
}
