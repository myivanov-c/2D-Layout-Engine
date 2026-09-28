#include "../include/Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(double Xcrd, double Ycrd) : x(Xcrd), y(Ycrd) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point& Point::operator=(const Point &obj) {
	if (this != &obj) {
		x = obj.x;
		y = obj.y;
	}
	return *this;
}

bool	Point::operator==(const Point &obj) const
{
	return (x == obj.x && y == obj.y);
}

Point::~Point() {}


double	Point::getX() const {
	return x;
}

double	Point::getY() const {
	return y;
}


void Point::setX(double newX) {
	x = newX;
}

void	Point::setY(double newY) {
	y = newY;
}