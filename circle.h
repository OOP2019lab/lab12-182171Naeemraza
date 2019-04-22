#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class circle:public shape
{
	float radius;
public:
	float area();
	circle(int,string);
	~circle() { cout << "~ circle () called."<<endl;  	}
};