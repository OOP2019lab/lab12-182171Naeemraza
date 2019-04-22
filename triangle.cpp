#include"triangle.h"
#include"shape.h"
triangle::triangle(float a,float b,string c):shape(c)
{
	base=a;
	height=b;
}
float triangle::area()
{
	cout<<"area of triangle invoke:"<<endl;
	int a= (base*height)/2;
	return a;
}