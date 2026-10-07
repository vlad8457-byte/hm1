#include <iostream>

namespace Functions
{
int sum(int x, int y)
	{
		return x + y;
	}
int subtraction(int x, int y)
	{
		return x - y; 
	}
int multiplication(int x, int y)
	{
		return x * y;
	}
int division(int x, int y)
	{
		return x / y;
	}
}
int main()
{
int x{ 6 };
int y{ 9 };
std::cout << "x = " << x << ", " << "y = " << y << std::endl;
std::cout << "slojenie: " << Functions::sum(x, y) << std::endl;
std::cout << "vichitanie: " << Functions::subtraction(x, y) << std::endl;
std::cout << "ymnojenie: " << Functions::multiplication(x, y) << std::endl;
std::cout << "delenie: " << Functions::division(x, y) << std::endl;
}