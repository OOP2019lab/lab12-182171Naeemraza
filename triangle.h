#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class triangle:public shape
{
	float base;
	float height;
public:
	float area();
	triangle(float ,float ,string );
	~triangle(){ cout << "~ triangle () called."<<endl;   }
};