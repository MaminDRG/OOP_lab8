//
//  Square.h
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Square_h
#define Square_h

#include "Rectangle.h"
#include "Rhomb.h"

class Square: public Rectangle, public Rhomb
{
protected:

public:
    Square(double);
    ~Square();
};

#endif /* Square_h */
