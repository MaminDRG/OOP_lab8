//
//  Square.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>
#include "Square.h"

double Square::Area(double side1)
{
    return side1*side1;
}

double Square::Perimeter(double side1)
{
    return 4*side1;
}
