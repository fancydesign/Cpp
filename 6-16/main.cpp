//
//  main.cpp
//  6-16
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//


#include<iostream>
using namespace std;
class Point{
public:
    Point():x(0),y(0){
        cout<<"Default Constructor called."<<endl;
				}
    Point(int x,int y):x(x),y(y){
        cout<<"Constructor called."<<endl;
    }
    ~Point(){cout<<"Destructor called."<<endl;}
    int getX() const {return x;}
    int getY() const {return y;}
    void move(int newX,int newY){
        x=newX;
        y=newY;
    }
private:
    int x,y;
};
int main(int argc, const char * argv[]) {
    cout<<"Step one:"<<endl;
    Point*ptr1=new Point;
    delete ptr1;
    cout<<"Step two:"<<endl;
    ptr1=new Point(1,2);
    delete ptr1;
    return 0;
}