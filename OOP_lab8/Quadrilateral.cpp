//
//  Quadrilateral.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 27/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>
#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(double side1, double side2, double side3, double angle12, double angle23)
{
    param[0] = side1;
    param[1] = side2;
    param[2] = side3;
    param[3] = angle12;
    param[4] = angle23;
}

double Quadrilateral::side4Find(double side1, double side2, double side3, double angle12, double angle23)
{
    ///////
    double side4;
    Point pointA, pointB, pointC, pointD;
    ///////
    double* infoPointA = new double[2];
    ///////
    
    pointA.GetPoint(infoPointA);
    pointB.SetPoint(*(infoPointA) - param[0], *(infoPointA+1));
    
    
    double Ax = (*(infoPointA));
    double Ay = (*(infoPointA+1));
    double Bx = (*(infoPointA) - param[0]);
    double By = (*(infoPointA+1));
    double AB = param[0];
    double BC = param[1];
    //angle abc in degrees. it needs to be because of not understanding how to check if cos == 0 or not
    //for example: if (angle == 90 degrees) cos = -1.03634e-13 not 0.0
    double ABC = param[3];
    //angle abc in radians
    double ABCrad = param[3] * 3.14159265359 / 180;
    double alpha = Bx - Ax;
    double betta = By - Ay;
    double gamma = AB*BC*cos(ABCrad);
    double omega = BC*BC;
    double y2 = 0;
    
        if (ABC == 90) gamma = 0;
    
        if (gamma == 0)
        {
            y2 = sqrtl((omega*alpha*alpha)/(1+alpha*alpha));
        }
    
        else
        {
            double determ = ((2*gamma*betta)*(2*gamma*betta) - 4*(1+alpha*alpha)*(gamma*gamma-omega*alpha*alpha));
            //double x1 = ((2*gamma*betta) + sqrt(determ))/(2*(gamma*gamma-omega*alpha*alpha));
            y2 = ((2*gamma*betta) - sqrtl(determ))/(2*(gamma*gamma-omega*alpha*alpha));
        }
    
    double Cy = y2+By;
    double Cx = Bx+(gamma-betta*(Cy-By))/alpha;
    pointC.SetPoint(Cx,Cy);
    
        // We know :
        //  B(Bx,By),
        //  C(Cx,Cy),
        //  angle BCD = angle23 = param[4],
        //  BC = side2 = param[1] and CD = side3 = param[2]
    
    double CD = param[2];
    double BCD = param[4];
    double BCDrad = param[4] * 3.14159265359 / 180;
    alpha = Cx - Bx;
    betta = Cy - By;
    gamma = BC*CD*cos(BCDrad);
    omega = CD*CD;
    y2 = 0;
    
    if (BCD == 90) gamma = 0;
    
    if (gamma == 0)
    {
        y2 = sqrtl((omega*alpha*alpha)/(1+alpha*alpha));
    }
    
    else
    {
        double determ = ((2*gamma*betta)*(2*gamma*betta) - 4*(1+alpha*alpha)*(gamma*gamma-omega*alpha*alpha));
        //double x1 = ((2*gamma*betta) + sqrt(determ))/(2*(gamma*gamma-omega*alpha*alpha));
        y2 = ((2*gamma*betta) - sqrtl(determ))/(2*(gamma*gamma-omega*alpha*alpha));
    }
    
    double Dy = y2+Cy;
    double Dx = 0;
    
        if (alpha == 0) Dx = 0;
    
        else Dx = Cx+(gamma-betta*(Dy-Cy))/alpha;
    
    pointD.SetPoint(Dx,Dy);
    
    double* infoPointD = new double[2];
    pointD.GetPoint(infoPointD);
    
    side4 = sqrtl( ( ( (*(infoPointD)) - (*(infoPointA)) ) * ( (*(infoPointD)) - (*(infoPointA)) ) ) +( ( (*(infoPointD+1)) - (*(infoPointA+1)) ) * ( (*(infoPointD+1)) - (*(infoPointA+1)) ) ) );
    
    delete [] infoPointA;
    delete [] infoPointD;
    
    return side4;
}

void Quadrilateral::Area()
{
    double side4;
    side4 = this->side4Find(param[0], param[1], param[2], param[3], param[4]);
    std::cout << " SIDE4 = " << side4 << std::endl;
}

void Quadrilateral::Perimeter()
{
    //side4=
    //return param[0]+param[1]+param[3]+side4;
}

Quadrilateral::~Quadrilateral()
{
    std::cout  << "dstrctr quadrltrl-->" ;
    
}

