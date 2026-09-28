#ifndef CIRCLE_HPP
# define CIRCLE_HPP

# include "Point.hpp"

class Circle {
		Point center;
		double radius;
	public:
		Circle();
		Circle(const Point &c, double r);
		Circle(const Circle &obj);
		Circle& operator=(const Circle &obj);
		~Circle();

		void			setCenter(const Point &c);
		void			setRadius(const double r);

		const Point&	getCenter() const;
		double			getRadius() const;

		double			area() const;
		bool			intersects(const Circle &obj) const;
};

#endif