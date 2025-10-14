#include <iostream>
int main()
{
	int day, month, year;
	std::cout << "Podaj date: ";
	std::cin >> day >> month >> year;

	if (year > 2007) 
	{
		std::cout << "Jestes niepelnoletni";
	}
	else if (year == 2007) 
	{
		if (month < 10 || (month == 10 and day <= 14)) {
			std::cout << "jestes pelnoletni";
		}
		else {
			std::cout << "jestes niepelnoletni";
		}
		
	}
	else {
		std::cout << "jestes pelnoletni";
	}
}

/*int x, y;
	std::cin >> x >> y;

	if (x > y) {
		std::cout << x;
	}
	else
	{
		std::cout << y;
	}*/
	/*int x, y, z;
	std::cin >> x >> y >> z;
	if (x > y and x > z) {
		std::cout << x;
	}
	else if (y > x and y > z) {
		std::cout << y;
	}
	else {
		std::cout << z;
	}*/
