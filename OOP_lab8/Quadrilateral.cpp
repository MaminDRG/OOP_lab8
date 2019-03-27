//
//  Quadrilateral.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>
#include "Quadrilateral.h"
#include "cmath"


Quadrilateral::Quadrilateral(double side1,double side2 ,double side3,double angle12,double angle23)
{
    param[0] = side1;
    param[1] = side2;
    param[2] = side3;
    param[3] = angle12;
    param[4] = angle23;
}

virtual double Quadrilateral::Area()
{
    return side1*side2*angle;
}

virtual double Quadrilateral::Perimeter()
{
    return 2 * Sides.Sum();
}



