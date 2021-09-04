/* Вариант 3.
Написать программу, которая, используя минимальное количество оперативной памяти рассчитает,
периметр прямоугольника со сторонами A и B (0 < A,B < 20). A и B считать с клавиатуры.

 Сеин Максим Витальевич
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    unsigned char A;
    unsigned char B;
    std::cin >> A >> B;

    if (A <= 0) // По условию A должно быть больше 0
        std::cout << "А не может быть равным 0" << std::endl;
    else if (B < 0 || B >= 20) // По условию B должно быть меньше 20 и соответсвенно сторона прямоугольника не может быть меньше 020
        std::cout << "B не входит в промежуток (0;20)" << std::endl;
    else
        std::cout << (A + B)*2 << std::endl;





}
