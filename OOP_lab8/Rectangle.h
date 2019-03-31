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

class Rectangle: virtual public Parallelogram
{
protected:
    
public:
    Rectangle(double, double);
    ~Rectangle();
};


#endif /* Rectangle_h */
