//
//  Rhomb.h
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Rhomb_h
#define Rhomb_h

#include "Parallelogram.h"
class Rhomb: public Parallelogram
{
protected:
    
public:
    Rhomb() : Parallelogram(){}
    double Area(double,double);
    double Perimeter(double);
};


#endif /* Rhomb_h */
