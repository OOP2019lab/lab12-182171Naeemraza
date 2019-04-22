#include<iostream>
#include"shape.h"
#include"triangle.h"
#include"rectangle.h"
#include"circle.h"
#include<string>
#include<fstream>
using namespace std;
int sumarea(shape shape1,rectangle shape2)
{
	return shape1.area()+shape2.area();
}
int sumarea(shape shape1,triangle shape2)
{
	return shape1.area()+shape2.area();
}
int sumarea(triangle shape1,circle shape2)
{
	return shape1.area()+shape2.area();
}
int main()
{
	triangle t1(1.0,9.0,"red");
	circle c1(2, "blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;
	cout<<"Exercise 3a"<<endl;
	triangle t2(1.0,9.0, "Red");
	circle c2(2, "Blue");
	rectangle r2(6,2, "Orange");
	shape s1("Purple");
	cout<<sumarea(t2,c2)<<endl;
	cout<<sumarea(s1,r2)<<endl;
	cout<<sumarea(s1,t2)<<endl;

	int count= 5,x,y;
	string c;
	shape**shapearray=new shape*[count];
	for(int i=0; i<count;)
	{
		int a;
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		cin>>a;
		switch (a)
		{
		case 1:
			//get base from user as input
			cout<<"Enter base value:";cin>>x;
			//get height from user as input
			cout<<"Enter height value:";cin>>y;
			//get color from user as input
			cout<<"Enter color:";cin>>c;
			// create new triangle object and add to shapesArray[i]
			shapearray[i] = new triangle(x,y,c);
			i++;
			break;
		case 2:
			//get length from user as input
			cout<<"Enter length value:";cin>>x;
			//get width from user as input
			cout<<"Enter width value:";cin>>y;
			//get color from user as input
			cout<<"Enter color:";cin>>c;
			// create new rectangle object and add to shapesArray[i]
			shapearray[i] = new rectangle(x,y,c);
			i++;
			break;

		case 3:

			//get radius from user as input
			cout<<"Enter Radius value:";cin>>x;
			cout<<"Enter color:";cin>>c;
			// create new circle object and add to shapesArray[i]
			shapearray[i] = new circle(x,c);
			i++;
			break;

		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;
			break;
		}
	}

	for(int i=0;i<count;i++)
	{
		delete(shapearray[i]);
	}
	//shape *s1= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
	//delete s1; //identify which destructor in invoked

	system("pause");

}




