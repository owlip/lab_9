#include "std.h"
#include <iostream>
using namespace std;

//программа является учебной

int main()
{ 
    setlocale(LC_ALL, "Rus");
 
    int number1 ;
    int number2 ;
    cout << "Введите целое число 1: ";
    cin >> number1;
    cout << "Введите целое число 2: ";
    cin >> number2;

    cout << "Сумма = " << number1 + number2 << endl;
    cout << "Разность = " << number1 - number2 << endl;

    cout << "Произведение = " << number1 * number2 << endl;

    cout << "частное = " << number1 / number2 << endl;
    getchar();
    getchar();
    
    return 0;	
}