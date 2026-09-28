#include "include/Point.hpp"
#include "include/Rectangle.hpp"
#include "include/Circle.hpp"


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

	std::cout << "================ DISTANCE TO TESTS =====================" << std::endl << std::endl;

	Point pA(0, 0);
	Point pB(3, 4);
	Point pC(0, 0);
	Point pD(10, 0);

	std::cout << "Distance from pA to pB is: " << pA.distanceTo(pB) <<std::endl;
	std::cout << "Distance from pA to pC is: " << pA.distanceTo(pC) <<std::endl;
	std::cout << "Distance from pA to pD is: " << pA.distanceTo(pD) <<std::endl;
	std::cout << "Distance from pB to pA is: " << pB.distanceTo(pA) <<std::endl << std::endl;

	std::cout << "================ CIRCLE INTERSECTS TESTS =================" << std::endl << std::endl;

	Circle cA(Point(0, 0), 50);
    Circle cB(Point(200, 0), 50);

    // 2. Exactly touching
    Circle cC(Point(0, 0), 50);
    Circle cD(Point(100, 0), 50);

    // 3. Overlapping
    Circle cE(Point(0, 0), 50);
    Circle cF(Point(70, 0), 50);

    // 4. One circle completely inside another
    Circle cG(Point(0, 0), 100);
    Circle cH(Point(20, 0), 30);

    // 5. Same center
    Circle cI(Point(0, 0), 50);
    Circle cJ(Point(0, 0), 20);

    if (cA.intersects(cB))
        std::cout << "cA and cB DO intersect" << std::endl << std::endl;
    else
        std::cout << "cA and cB do NOT intersect" << std::endl << std::endl;

    if (cC.intersects(cD))
        std::cout << "cC and cD DO intersect" << std::endl << std::endl;
    else
        std::cout << "cC and cD do NOT intersect" << std::endl << std::endl;

    if (cE.intersects(cF))
        std::cout << "cE and cF DO intersect" << std::endl << std::endl;
    else
        std::cout << "cE and cF do NOT intersect" << std::endl << std::endl;

    if (cG.intersects(cH))
        std::cout << "cG and cH DO intersect" << std::endl << std::endl;
    else
        std::cout << "cG and cH do NOT intersect" << std::endl << std::endl;

    if (cI.intersects(cJ))
        std::cout << "cI and cJ DO intersect" << std::endl << std::endl;
    else {
        std::cout << "cI and cJ do NOT intersect" << std::endl<< std::endl; }

	return 0;
}