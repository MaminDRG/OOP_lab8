//
//  Parallelogram.h
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Parallelogram_h
#define Parallelogram_h

#include "Quadrilateral.h"


class Parallelogram: public Quadrilateral
{
protected:
    
public:
    Parallelogram() : Quadrilateral(){}
    double Area(double,double,double);
    double Perimeter(double,double);
};



#endif /* Parallelogram_h */
