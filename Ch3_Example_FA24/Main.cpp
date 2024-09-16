#include <iostream>

int ops();
void print();
void argList(int x, int y, int z);

int main()
{
	int x = 2147483647;
	std::cout << (char)('G' + 4) << std::endl;
	std::cout << x << std::endl;
	std::cout << x + 1 << std::endl;

	std::cout << 'G' / 'A' << std::endl; // 'G' = 71, 'A' = 65, 71 / 65 = 1
	std::cout << 'G' % 'A' << std::endl; // 71 % 65 = 6

	std::cout << (81 + 32) / 2 << std::endl;
	std::cout << ops() << std::endl;

	print();

	int a = 1, b = 2, c = 3;
	argList(a, b, c);
	std::cout << a << " " << b << " " << c << std::endl;

	return 0;
}

int ops()
{
	return char(81 + 32) / 2;
}

void print()
{
	return;
	std::cout << "Hello, World!" << std::endl;
}

void argList(int x, int y, int z)
{
	std::cout << x << " " << y << " " << z << std::endl;
	x = x + 1;
	y = y + 2;
	z = x + y;
	std::cout << x << " " << y << " " << z << std::endl;
}
