//
//  Rectangle.h
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

#include "Parallelogram.h"

class Rectangle: public Parallelogram
{
protected:
    
public:
    Rectangle() : Parallelogram(){}
    double Area(double,double);
    double Perimeter(double,double);
};


#endif /* Rectangle_h */
