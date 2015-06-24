//
//  main.cpp
//  6-12
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//


#include<iostream>
using namespace std;
class Point{
public:
    Point(int x=0, int y=0) :x(x), y(y) {}
    int getX() const {return x;}
    int getY() const {return y;}
private:
    int x, y;
};
int main(int argc, const char * argv[]) {
    Point a(4, 5);
    Point * p1=&a;
    cout<<p1->getX()<<endl;
    cout<<a.getX()<<endl;
    return 0;
}
