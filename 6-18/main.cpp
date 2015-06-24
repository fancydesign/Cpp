//
//  main.cpp
//  6-18
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//


#include<iostream>
#include<cassert>
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
class ArrayOfPoints{
public:
    ArrayOfPoints(int size):size(size){
        points=new Point[size];
    }
    ~ArrayOfPoints(){
        cout<<"Deleting…"<<endl;
        delete[] points;
    }
    Point &element(int index){
        assert(index>=0&&index<size);
        return points[index];
    }
private:
    Point*points;
    int size;
};
int main(int argc, const char * argv[]) {
    int count;
    cout<<"Please enter the count of points:";
    cin>>count;
    ArrayOfPoints points(count);
    points.element(0).move(5,0);
    points.element(1).move(15,20);
    return 0;
}