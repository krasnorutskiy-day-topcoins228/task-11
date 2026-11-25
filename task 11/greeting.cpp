#include <iostream>

int main()
{
    int number;
    if (number < 6)
    {
        std::cout << "Доброй ночи" << std::endl;
    }
    else if (number < 12)
    {
        std::cout << "Доброе утро" << std::endl;
    }
    else if (number < 18)
    {
        std::cout << "Добрый вечер" << std::endl;
    }
    else if (number > 23)
    {
        std::cout << "Введено не верное время" << std::endl;
    }
    else if (number < 0)
    {
        std::cout << "Введено не верное время" << std::endl;
    }
}