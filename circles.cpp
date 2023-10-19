#include <iostream>

int main() {
	double x;
	double y;
	double r;
	double bigR;
	double vectLength;
	std::cout << "Enter the x coordinate of the point: ";
	std::cin >> x;
	std::cout << "Enter the y coordinate of the point: ";
        std::cin >> y;
	std::cout << "Enter the radius of the smaller circle: ";
        std::cin >> r;
	std::cout << "Enter the radius of the bigger circle: ";
        std::cin >> bigR;
	vectLength = x*x + y*y;
	if (r <= bigR) {
		if ((r*r < vectLength) && (vectLength < bigR*bigR)) {
			std::cout << "The point lies within the ring" << '\n';
		} else {
			std::cout << "The point lies out of the ring" << '\n';
		}
	} else {
		std::cout << "Check failed. Outer circle appears to be smaller than the inner one" << '\n';
	}
	return(0);
}
