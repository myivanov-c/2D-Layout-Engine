#include "include/Point.hpp"
#include "include/Rectangle.hpp"


int	main() {
	
	Rectangle A(Point(), 100, 100);
	Rectangle B(Point(200, 0), 100, 100);

	Rectangle C(Point(), 100, 100);
	Rectangle D(Point(100, 0), 100, 100);

	Rectangle E(Point(), 100, 100);
	Rectangle F(Point(50, 0), 100, 100);

	Rectangle G(Point(), 500, 500);
	Rectangle H(Point(100, 100), 50, 50);

	Rectangle I(Point(), 100, 100);
	Rectangle J(Point(150, 150), 100, 100);

	if (A.intersects(B))
		std::cout << "The rectangles A and B do intersect" << std::endl << std::endl;
	else
		std::cout << "The rectangles A and B DO NOT intesect" << std::endl << std::endl;

	if (C.intersects(D))
		std::cout << "The rectangles C and D do intersect" << std::endl << std::endl;
	else
		std::cout << "The rectangles C and D DO NOT intesect" << std::endl << std::endl;


	if (E.intersects(F))
		std::cout << "The rectangles E and F do intersect" << std::endl << std::endl;
	else
		std::cout << "The rectangles E and F DO NOT intesect" << std::endl << std::endl;


	if (G.intersects(H))
		std::cout << "The rectangles G and H do intersect" << std::endl << std::endl;
	else
		std::cout << "The rectangles G and H DO NOT intesect" << std::endl << std::endl;


	if (I.intersects(J))
		std::cout << "The rectangles I and J do intersect" << std::endl << std::endl;
	else
		std::cout << "The rectangles I and J DO NOT intesect" << std::endl << std::endl;

	return 0;
}