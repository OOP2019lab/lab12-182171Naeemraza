#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class rectangle:public shape
{
	float height;
	float width;
public:
	float area();
	rectangle(int,int,string);
	~rectangle(){ cout << "~rectangle() called."<<endl;   }
};