#include <iostream>
#include <array>
using  namespace std;

// Задание 1

void multiplie(int &a, double &b){
    a = a * 7;
    b = b * 7;
    cout << endl <<"First  value: " << a << endl << "Second value:" << b;
}

int main() {

    int a = 3;
    double b = 6.0;

    // Адреса переменных
    int* p = &a;
    double* n = &b;

    cout << "First  value: " << endl <<  a << endl << p << endl << "Second value:" << endl << b << endl << n;

    // Функция, которая получает переменные по ссылке, умножает их на 7 и выводит их на экран
    multiplie(a, b);
    return 0;
}
