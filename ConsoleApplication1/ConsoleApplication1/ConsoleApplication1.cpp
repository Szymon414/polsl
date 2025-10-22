#include <iostream>
#include <iomanip>
#include <math.h>

    int main()
{
    std::cout << CHAR_MAX << std::endl;
    std::cout << UCHAR_MAX << std::endl;
    std::cout << INT_MAX << std::endl;
    std::cout << LONG_MAX << std::endl;
    float float1 = 5;
    double double1 = 6;
    std::cout << std::fixed << std::setprecision(15) << float1 << std::endl << double1 << std::endl;

    std::cout << std::endl << "KALKULATOR PROSTY" << std::endl;
    double num1, num2;
    std::string str1;
    std::cout << "Podaj dzialanie: ";
    std::cin >> num1 >> str1 >> num2;
    if (str1 == "+") {
        std::cout << num1 + num2;
    }
    else if (str1 == "-") {
        std::cout << num1 - num2;
    }
    else if (str1 == "*") {
        std::cout << num1 * num2;
    }
    else if (str1 == "/") {
        if (num2 != 0) {
            std::cout << num1 / num2;
        }
        else {
            std::cout << "DZIELENIE PRZEZ ZERO";
        }
    }

    std::cout << std::endl << "TESTER TROJKATOW" << std::endl;
    float a, b, c;
    std::cout << "podaj dlugosc bokow: ";
    std::cin >> a >> b >> c;
    bool condition = false;
    if ((a <= b <= c) or (b <= a <= c)) {
        if (a + b > c) {
            condition = true;
        }
    }
    else if ((a <= c <= b) or (c <= a <= b)) {
        if (a + c > b) {
            condition = true;
        }
    }
    else {
        if (b + c > a) {
            condition = true;
        }
    }
    if (condition) {
        std::cout << "trojkat istnieje" << std::endl;
        float x = (a + b + c) / 2;
        float p = sqrt(x * (x - a) * (x - b) * (x - c));
        std::cout << "|-----|-----|-----|-----|" << std::endl;
        std::cout << "|   A |   B |   C |   P |" << std::endl;
        std::cout << "|-----|-----|-----|-----|" << std::endl;
        std::cout << std::setprecision(2);
        std::cout << "|" << a << " |" << b << " |" << c << " |" << p << " |" << std::endl;
        std::cout << "|-----|-----|-----|-----|" << std::endl;
    }
    else {
        std::cout << "trojkat nie istnieje" << std::endl;
    }
    char c1;
    std::cout << "podaj znak" << std::endl;
    std::cin >> c1;
    if (c1 == 'a' or c1 == 'e' or c1 == 'i' or c1 == 'u' or c1 == 'y')
        std::cout << "jest samogloska" << std::endl;
    else {
        std::cout << "nie jest" << std::endl;
    }
    int a1, b1;
    int sum = 0;
    std::cout << "podaj przedzial liczb" << std::endl;
    std::cin >> a1 >> b1;
    std::cout << std::endl;
    for (int i = a1; i <= b1; i++) {
        std::cout << i << std::endl;
        sum += i;
    }
    std::cout << std::endl << sum << std::endl;

    float sum1 = 0;
    float geosum = 1;
    int count = 0;
    while (true) {
        float num;
        std::cout << "podaj liczbe: " << std::endl;
        std::cin >> num;
        if (num == 0) {
            std::cout << "srednia arytmetyczna : " << sum1 / count << std::endl;
            std::cout << "srednia geometryczna: " << pow(geosum, 1.0 / count) << std::endl;
            break;
        }
        sum1 += num;
        geosum *= num;
        count++;
    }

}