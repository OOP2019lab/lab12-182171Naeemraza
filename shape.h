#pragma once
#include<iostream>
using namespace std;
class shape
{
protected:
	string type;
public:
	virtual float area();
	string color;
	shape(string);
	virtual ~shape(){ cout << "~shape() called."<<endl; 	}
};