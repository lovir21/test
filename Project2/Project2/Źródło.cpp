#include <iostream>
int main()
{
	int x, y, z;
	std::cin >> x >> y >> z;
	if (x > y and x > z) {
		std::cout << x;
	}
	else if (y > x and y > z) {
		std::cout << y;
	}
	else {
		std::cout << z;
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