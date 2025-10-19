#include<iostream>
int main()
{
	long long n, m, k;
	std::cin >> n >> m;
	std::cin >> k;

	if (k <= n * m && (k % n == 0 || k % m == 0))
	{	
	std::cout << "TAK";	
	}
	else {
		std::cout << "NIE";
	}
}