//
//  Quadrilateral.h
//  OOP_lab8
//
//  Created by MacBook Pro on 20/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Quadrilateral_h
#define Quadrilateral_h

#include "cmath"
#include <iostream>
#include "Point.h"
class Quadrilateral
{
    
protected:
    
    double param[5];
    
public:
    
        //constructor
    //Quadrilateral();
    Quadrilateral(double,double,double,double,double);
    
    double side4Find(double,double,double,double,double,double*);
    double Area();
    double Perimeter();
    
    virtual ~Quadrilateral();
    
    


    
};

#endif /* Quadrilateral_h */
