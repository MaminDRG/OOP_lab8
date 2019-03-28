//
//  main.cpp
//  OOP_lab8
//
//  Created by MacBook Pro on 20/03/2019.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <iostream>

#include "Square.h"
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
    
    Quadrilateral* quadrilateral;
    
    std::cout << "Creating Quadrilateral:" << std::endl;
    quadrilateral = new Quadrilateral(side1, side2, side3,angle12,angle23);
    
    quadrilateral->Area();
    quadrilateral->Perimeter();
    delete quadrilateral;
    
    std::cout << "Creating Parallelogram:" << std::endl;
    quadrilateral = new Parallelogram(side1,side2, angle12);

    quadrilateral->Area();
    quadrilateral->Perimeter();
    delete quadrilateral;
    
    std::cout << "Creating Rectangle:" << std::endl;
    quadrilateral = new Rectangle(side1, side2);

    quadrilateral->Area();
    quadrilateral->Perimeter();
    delete quadrilateral;
    
    std::cout << "Creating Square:" << std::endl;
    quadrilateral = new Square(side1);

    quadrilateral->Area();
    quadrilateral->Perimeter();
    delete quadrilateral;
    
    std::cout << "Creating Rhomb:" << std::endl;
    quadrilateral = new Rhomb(side1, angle12);
    
    quadrilateral->Area();
    quadrilateral->Perimeter();
    delete quadrilateral;
    
    return 0;
}
