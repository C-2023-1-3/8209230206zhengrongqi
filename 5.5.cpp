#include<iostream>
class Point
{
private:
	double x, y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void diplay()
	{
		std::cout << "(" << x << "," << y << ")" << std::endl;;
	}
};
int main()
{
	Point p1,p2,p3;
	p1.setPoint(2, 3);
	p1.diplay();
	p2.setPoint(4, 5);
	p2.diplay();
	p3.setPoint(6, 8);
	p3.diplay();

}