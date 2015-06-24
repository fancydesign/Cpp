//
//  main.cpp
//  6-3
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//




#include"Point.h"
#include<iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Entering main..."<<endl;
    Point a[2];
    for(int i=0;i<2;i++)
        a[i].move(i+10,i+20);
    cout<<"Exiting main..."<<endl;
    return 0;
}