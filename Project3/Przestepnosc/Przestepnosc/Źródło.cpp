#include<iostream>
int main() 
{
	int r;
	std::cin >> r;
	if (r >= 1 && r <= 8000 && r % 4 == 0) 
	{
		if (r % 100 == 0 && r % 400 != 0) {
			std::cout << "NIE";
		}
		else {
			std::cout << "TAK";
		}
	}
	else {
		std::cout << "NIE";
	}

}