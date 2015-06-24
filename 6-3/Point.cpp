//
//  Point.cpp
//  6-3
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//

#include "Point.h"
#include <iostream>
using namespace std;
Point::Point() {
    x=y=0;
    cout<<"Default Constructor called."<<endl;
}
Point::Point(int x,int y):x(x),y(y) {
    cout<<"Constructor called."<<endl;
}
Point::~Point(){
    cout<<"Destructor called."<<endl;
}
void Point::move(int newX,int newY) {
    cout<<"Moving the Point to("<<newX<<","<<newY<<")"<<endl;
    x=newX;
    y=newY;
}