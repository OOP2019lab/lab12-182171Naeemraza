#include"shape.h"
#include"rectangle.h"
rectangle::rectangle(int a,int b ,string c):shape(c)
{
	height=a;
	width=b;
}
float rectangle::area()
{
	cout<<"area of rectangle invoke:"<<endl;
	return height*width;
}