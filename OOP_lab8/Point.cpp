//
//  Point.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 29/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>
#include "Point.h"

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

double* Point::GetPoint(double* example)
{
    
    *(example) = this->x;
    *(example+1) = this->y;
    return example;
}

void Point::SetPoint(double x , double y)
{
    this->x = x;
    this->y = y;
}

