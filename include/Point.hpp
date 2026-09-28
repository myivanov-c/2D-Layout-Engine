#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>


class Point {
		double x;
		double	y;
	public:
		Point();
		Point(double Xcrd, double Ycrd);
		Point(const Point &obj);
		Point& operator=(const Point &obj);
		bool	operator==(const Point &obj) const;
		~Point();

		double		getX() const;
		double		getY() const;

		void	setX(double newX);
		void	setY(double newY);
};


#endif