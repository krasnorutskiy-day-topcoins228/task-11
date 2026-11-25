#include <iostream>

int main()
{
	int number;
	std::cout << "Введите число: " << std::endl;
	std::cin >> number;
	if (number > 0)
	{
		std::cout << "Число -  " << number << " положительное" << std::endl;
	}
	else if (number < 0)
	{
		std::cout << "Число -  " << number << " отрицательное" << std::endl;
	}
	else if (number = 0)
	{
		std::cout << "Число -  " << number << " ноль" << std::endl;
	}
	return 0;
}