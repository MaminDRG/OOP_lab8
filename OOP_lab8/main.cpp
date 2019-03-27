//
//  main.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 20/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <iostream>
#include "Quadrilateral.h"

int main() {
    // insert code here...
    double side1,side2,side3,angle12,angle23;
    std::cin >> side1;
    std::cin >> side2;
    std::cin >> side3;

    std::cin >> angle12;
    std::cin >> angle23;

    
    if(side1 < 0 || side2 < 0 || side3 < 0)
    {
        std::cout << "Wrong Arguments";
        return 0;
    }
    
    Quadrilateral quadrilateral;
    
    std::cout << "Creating Quadrilateral:" << std::endl;
    quadrilateral = new Quadrilateral(minSide, maxSide, angle);
    
    std::cout << "Creating Parallelogram:" << std::endl;
    quadrilateral = new Parallelogram(minSide, maxSide, angle);
    //Console.WriteLine($"Area = {fig.Area():F3}\tPerimeter = {fig.Perimeter():F3}\n");
    
    std::cout << "Creating Rectangle:" << std::endl;
    quadrilateral = new Rectangle(minSide, maxSide);
    //Console.WriteLine($"Area = {fig.Area():F3}\tPerimeter = {fig.Perimeter():F3}\n");
    
    std::cout << "Creating Square:" << std::endl;
    quadrilateral = new Square(maxSide);
   // Console.WriteLine($"Area = {fig.Area():F3}\tPerimeter = {fig.Perimeter():F3}\n");
    
    std::cout << "Creating Rhomb:" << std::endl;
    quadrilateral = new Rhomb(maxSide, angle);
   // Console.WriteLine($"Area = {fig.Area():F3}\tPerimeter = {fig.Perimeter():F3}\n");
    
    
    
    return 0;
}
