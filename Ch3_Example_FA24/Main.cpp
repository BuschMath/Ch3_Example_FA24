#include <iostream>

int main()
{
	int x = 2147483647;
	std::cout << (char)('G' + 4) << std::endl;
	std::cout << x << std::endl;
	std::cout << x + 1 << std::endl;

	return 0;
}