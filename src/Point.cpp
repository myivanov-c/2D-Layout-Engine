#include "../include/Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(int Xcrd, int Ycrd) : x(Xcrd), y(Ycrd) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point& Point::operator=(const Point &obj) {
	if (this != &obj) {
		x = obj.x;
		y = obj.y;
	}
	return *this;
}

Point::~Point() {}


int	Point::getX() const {
	return x;
}

int	Point::getY() const {
	return y;
}


void Point::setX(int newX) {
	x = newX;
}

void	Point::setY(int newY) {
	y = newY;
}