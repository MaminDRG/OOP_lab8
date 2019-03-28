//
//  Square.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>
#include "Square.h"

Square::Square(double side1) : Rectangle(side1,side1), Rhomb(side1,M_PI/2), Parallelogram(side1,side1,M_PI/2){};
