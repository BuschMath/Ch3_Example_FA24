#include <iostream>

int main()
{
	int x = 2147483647;
	std::cout << (char)('G' + 4) << std::endl;
	std::cout << x << std::endl;
	std::cout << x + 1 << std::endl;

	std::cout << 'G' / 'A' << std::endl; // 'G' = 71, 'A' = 65, 71 / 65 = 1
	std::cout << 'G' % 'A' << std::endl; // 71 % 65 = 6

	std::cout << (81 + 32) / 2 << std::endl;
	std::cout << char(81 + 32) / 2 << std::endl;

	return 0;
}