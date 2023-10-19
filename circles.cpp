#include <iostream>
#include <cmath>

int main() {
	float x;
	float y;
	float r;
	float bigR;
	float vectLength;
	std::cout << "Enter the x coordinate of the point: ";
	std::cin >> x;
	std::cout << "Enter the y coordinate of the point: ";
        std::cin >> y;
	std::cout << "Enter the radius of the smaller circle: ";
        std::cin >> r;
	std::cout << "Enter the radius of the bigger circle: ";
        std::cin >> bigR;
	vectLength = sqrt(x*x + y*y);
	if ((r < vectLength) && (vectLength < bigR)) {
		std::cout << "The point lies within the ring" << '\n';
	} else {
		std::cout << "The point lies out of the ring" << '\n';
	}
	return(0);
}
