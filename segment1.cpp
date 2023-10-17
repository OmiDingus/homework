# include <iostream>

int main() {
	int a;
	int b;
	int c;
	int d;
	int x;
	double y;
	double ratio = 0;
	std::cout << "Enter the coordinate of point a of the first segment: ";
	std::cin >> a;
	std::cout << "Enter the coordinate of point b of the first segment: ";
	std::cin >> b;
	std::cout << "Enter the coordinate of point x of the first segment: ";
        std::cin >> x;
	std::cout << "Enter the coordinate of point c of the second segment: ";
        std::cin >> c;
	std::cout << "Enter the coordinate of point d of the second segment: ";
        std::cin >> d;
	if ((std::min(a, b) <= x) && (x <= std::max(a, b))) {
		ratio = (double)((abs(c - d) * 1.0) / (abs(a - b) * 1.0));
	}
	y = std::min(c, d) + (x - std::min(a, b)) * ratio;
	if (ratio != 0) {
		std::cout << "The coordinate of y point of the second segment is: " << y << '\n';
	} else {
		std::cout << "Finding ratio failed. Perhaps, the x point lies out of first segment" << '\n';
	}
	return(0);
}
