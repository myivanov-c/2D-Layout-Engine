#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>


class Point {
		int x;
		int	y;
	public:
		Point();
		Point(int Xcrd, int Ycrd);
		Point(const Point &obj);
		Point& operator=(const Point &obj);
		~Point();

		int		getX() const;
		int		getY() const;

		void	setX(int newX);
		void	setY(int newY);
};


#endif