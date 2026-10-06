#include <iostream>

// Lab 6 - Andy Munoz 
// CIS 5 Week 6 - Even and odd

int main() {
	std::cout << "Even numbers:\n";

	for (int i = 0; i <= 100; i = i + 2) {

		std::cout << i << " ";
	}

	std::cout << "\nOdd numbers:\n";

	int j = 1;
	while (j <= 100) {

			std::cout << j << " ";
			j += 2;
		}

		return 0;
}
