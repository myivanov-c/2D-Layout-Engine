#include "../include/Circle.hpp"

Circle::Circle() : center(Point()), radius(0.0) {}

Circle::Circle(const Point &c, double r) : center(c), radius(r) {}

Circle::Circle(const Circle &obj) : center(obj.center), radius(obj.radius) {}

Circle& Circle::operator=(const Circle &obj) {
	if (this != &obj){
		center = obj.center;
		radius = obj.radius;
	}
	return *this;
}

Circle::~Circle() {}

void	Circle::setCenter(const Point &c) {
	center = c;
}

void	Circle::setRadius(const double r) {
	radius = r;
}

const Point&	Circle::getCenter() const {
	return center;
}

double	Circle::getRadius() const {
	return radius;
}

double	Circle::area() const {
	double pi = 2 * acos(0.0);

	return (pi * (radius * radius));
}

bool	Circle::intersects(const Circle &obj) const
{
	double distance = center.distanceTo(obj.center);

	return (distance <= radius + obj.radius);
}