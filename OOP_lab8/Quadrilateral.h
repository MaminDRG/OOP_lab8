//
//  Quadrilateral.h
//  OOP_lab8
//
//  Created by MacBook Pro on 20/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Quadrilateral_h
#define Quadrilateral_h

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
    
    
    virtual double Area();
    virtual double Perimeter();
    
    
    

    
};

#endif /* Quadrilateral_h */
