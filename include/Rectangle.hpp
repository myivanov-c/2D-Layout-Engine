#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include "Point.hpp"


class Rectangle {
		Point	position;
		double	width;
		double	height;
	public:
		Rectangle();
		Rectangle(const Point &pos, double w, double h);
		Rectangle(const Rectangle &obj);
		Rectangle& operator=(const Rectangle &obj);
		~Rectangle();
		
		void			setWidth(const double w);
		void			setHeight(const double h);

		const Point&	getPosition() const;
		double			getWidth() const;
		double			getHeight() const;

		Point			getBottomLeft() const;
		Point			getBottomRight() const;
		Point			getTopLeft() const;
		Point			getTopRight() const;

		double			area() const;
		bool			intersects(const Rectangle &obj) const;
};


#endif