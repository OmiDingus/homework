#include <iostream>
#include <cmath>

int main() {
	float a;
	float b;
	float c;
	float disc;
	float x1 = 0.0;
	float x2 = 0.0;
	std::cout << "Input the first coefficient number: ";
	std::cin >> a;
	std::cout << "Input the secomd coefficient number: ";
        std::cin >> b;
	std::cout << "Input the third coefficient number: ";
        std::cin >> c;
	disc = (b * b) - (4 * a * c);
	if (abs(a - 0.0) <= 0) {
		std::cout << "Not a square equation" << '\n';
	} else { if (disc < 0) {
			std::cout << "No real roots" << '\n';
		} else {
			x1 = (-b + sqrt(disc)) / 2;
                	x2 = (-b - sqrt(disc)) / 2;
			if (abs(x1 - x2) <= 0) {
				std::cout << "x1 = x2 = " << x1 << '\n';
			} else {
				std::cout << "x1 = " << x1 << '\n';
				std::cout << "x2 = " << x2 << '\n';
			}
		}
	}
	return(0);
}
