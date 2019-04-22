#include"circle.h"
#include"shape.h"
circle::circle(int a,string b):shape(b)
{
	radius=a;
}
float circle::area()
{
	cout<<"area of circle invoke:"<<endl;
	float a=3.1416*radius*radius;
	return a;
}