	//
//  Header.h
//  6-3
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//

#ifndef __3_Point_h
#define __3_Point_h
class Point {
public:
    Point();
    Point(int x,int y);
    ~Point();
    void move(int newX, int newY);
    int getX() const {return x;}
    int getY() const {return y;}
    static void showCount();
private:
    int x,y;
};

#endif
