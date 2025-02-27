#pragma once
class Rectangle
{
private:
	double width;
	double height;

public:
	Rectangle();
	Rectangle(double nWidth, double nHeight);
	
	double getWidth();
	double getHeight();
	void setWidth(double nWidth);
	void setHeight(double nHeight);

	double getArea();
	double getPerimeter();
};