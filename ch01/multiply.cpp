#include <iostream>

int main()
{
	std::cout << "Enter two numbers to mulitply" << std::endl;
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << "The two numbers " << num1 << " and " << num2
		<< " multiplied together are " << num1 * num2 << std::endl;

	return 0;
}
