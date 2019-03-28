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
class Quadrilateral
{
    
protected:
    
    double param[5];
    
public:
    
        //constructor
    //Quadrilateral();
    Quadrilateral(double,double,double,double,double);
    Quadrilateral(double,double,double);
    Quadrilateral(double,double);
    Quadrilateral(double);
    Quadrilateral();
    
    double side4Find();
    double Area();
    double Perimeter();
    


    
};

#endif /* Quadrilateral_h */
