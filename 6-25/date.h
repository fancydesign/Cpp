//
//  date.h
//  6-25
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//

#ifndef __25_date_h
#define __25_date_h

class Date {
private:
    int year;
    int month;
    int day;
    int totalDays;
public:
    Date(int year, int month, int day);
    int getYear() const {return year;}
    int getMonth() const {return month;}
    int getDay() const {return day;}
    int getMaxDay() const;
    bool isLeapYear() const {
        return (year%4==0 && year%100!=0) || year%400==0;
    }
    void show() const;
    int distance(const Date& date) const {
        return totalDays-date.totalDays;
    }
};

#endif
