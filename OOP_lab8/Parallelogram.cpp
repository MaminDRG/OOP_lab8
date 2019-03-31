//
//  Parallelogram.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>
#include "Parallelogram.h"

Parallelogram::Parallelogram(double side1,double side2,double angle12) :
                                    Quadrilateral(side1,side2,side1, angle12,(180-angle12)){}

Parallelogram::~Parallelogram()
{
    std::cout << std::endl << "dstrctr Paralllgrm-->";
    
}
