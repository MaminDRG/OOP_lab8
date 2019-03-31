//
//  Rhomb.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>
#include "Rhomb.h"

Rhomb::Rhomb(double side1,double angle12) :
                                    Parallelogram(side1,side1,angle12){}

Rhomb::~Rhomb()
{
    std::cout<< "dstrctr Rhomb-->";
    
}
