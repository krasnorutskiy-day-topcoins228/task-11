#include <iostream>
#include <string>

int main()
{
	const int pin = 1234;
	int pin_code;
	std::cout << "Введите пин-код:" << std::endl;
	std::cin >> pin_code;
	if (pin_code != pin)
	{
		std::cout << "Неверный пин-код" << std::endl;
		return 0;
	}
	int age;
	std::cout << "Введите возраст: " << std::endl;
	std::cin >> age;
	const int child_price = 100; 
	const int school_price = 150; 
	const int adult_price = 250; 
	const int pension_price = 120; 
	int price_per_ticket = 0; 
	std::string category_name;
	if (age < 12) 
	{ 
		price_per_ticket = child_price; 
		category_name = "детский"; 
	}
	else if (age >= 12 && age <= 17) 
	{ 
		price_per_ticket = school_price; 
		category_name = "школьный"; 
	}
	else if (age >= 18 && age <= 64) 
	{ price_per_ticket = adult_price;
	category_name = "взрослый"; 
	}
	else if (age >= 65)
	{  
		price_per_ticket = pension_price; 
		category_name = "пенсионный"; 
	}
	int tickets;
	std::cout << "Введите количество билетов:";
	std::cin >> tickets;

	if (tickets < 1) {
		std::cout << "Количество должно быть не меньше одного";
		return 0;
	}
	std::cout << "Категория: " << category_name << " (" << price_per_ticket << " руб)" << std::endl; 
	std::cout << "К оплате: " << price_per_ticket * tickets << " руб"; 
		return 0;
}

