#include "../include/Rectangle.hpp"

Rectangle::Rectangle() : position(Point()), width(0.0), height(0.0) {}

Rectangle::Rectangle(const Point &pos, double w, double h) : position(pos), width(w), height(h) {}

Rectangle::Rectangle(const Rectangle &obj) : position(obj.position), width(obj.width), height(obj.height) {}

Rectangle& Rectangle::operator=(const Rectangle &obj) {
	if (this != &obj) {
		position = obj.position;
		width = obj.width;
		height = obj.height;
	}
	return *this;
}

Rectangle::~Rectangle() {}

void	Rectangle::setWidth(const double w) {
	width = w;
}

void	Rectangle::setHeight(const double h) {
	height = h;
}

const Point& Rectangle::getPosition() const {
	return position;
}

double Rectangle::getWidth() const {
	return width;
}

double	Rectangle::getHeight() const {
	return height;
}

Point	Rectangle::getBottomLeft() const {
	return position;
}

Point	Rectangle::getBottomRight() const {

	return Point(position.getX() + width, position.getY());
}

Point	Rectangle::getTopLeft() const {

	return Point(position.getX(), position.getY() + height);
}

Point Rectangle::getTopRight() const {

	return Point(position.getX() + width, position.getY() + height);
}

double	Rectangle::area() const {
	return height * width;
}


bool	Rectangle::intersects(const Rectangle &obj) const {

	double	Aright = position.getX() + width;
	double	Aleft = position.getX();
	double	Atop = position.getY() + height;
	double	Abottom = position.getY();

	double	Bright = obj.position.getX() + obj.width;
	double	Bleft = obj.position.getX();
	double	Btop = obj.position.getY() + obj.height;
	double	Bbottom = obj.position.getY();


	if (Aright <= Bleft)
		return false;

	if (Bright <= Aleft)
		return false;

	if (Atop <= Bbottom)
		return false;

	if (Btop <= Abottom)
		return false;

	return true;
}
