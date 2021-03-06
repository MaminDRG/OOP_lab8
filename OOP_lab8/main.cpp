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
    
    std::cout << "side1 is : ";
    std::cin >> side1;
    std::cout << std::endl;
    std::cout << "side2 is : ";
    std::cin >> side2;
    std::cout << std::endl;
    std::cout << "side3 is : ";
    std::cin >> side3;
    std::cout << std::endl;
    std::cout << "angle12 is : ";
    std::cin >> angle12;
    std::cout << std::endl;
    std::cout << "angle23 is : ";
    std::cin >> angle23;
    std::cout << std::endl;

    
    if(side1 < 0 || side2 < 0 || side3 < 0)
    {
        std::cout << "Wrong Arguments";
        return 0;
    }
    
    Quadrilateral* quadrilateral1;
    Quadrilateral* quadrilateral2;
    Quadrilateral* quadrilateral3;
    Quadrilateral* quadrilateral4;
    Quadrilateral* quadrilateral5;
    
    std::cout << "Creating Quadrilateral:" << std::endl;
    quadrilateral1 = new Quadrilateral(side1, side2, side3,angle12,angle23);
    std::cout << "The Area is: " << quadrilateral1->Area() << std::endl;
    std::cout << "The perimeter is: " << quadrilateral1->Perimeter() << std::endl;
    
    std::cout << "Creating Parallelogram:" << std::endl;
    quadrilateral2 = new Parallelogram(side1,side2, angle12);
    std::cout << "The Area is: " << quadrilateral2->Area() << std::endl;
    std::cout << "The perimeter is: " << quadrilateral2->Perimeter() << std::endl;
    
    std::cout << "Creating Rhomb:" << std::endl;
    quadrilateral3 = new Rhomb(side1, angle12);
    std::cout << "The Area is: " << quadrilateral3->Area() << std::endl;
    std::cout << "The perimeter is: " <<  quadrilateral3->Perimeter() << std::endl;
    
    std::cout << "Creating Rectangle:" << std::endl;
    quadrilateral4 = new Rectangle(side1, side2);
    std::cout << "The Area is: " << quadrilateral4->Area() << std::endl;
    std::cout << "The perimeter is: " << quadrilateral4->Perimeter() << std::endl;
    
    std::cout << "Creating Square:" << std::endl;
    quadrilateral5 = new Square(side1);
    std::cout << "The Area is: " << quadrilateral5->Area() << std::endl;
    std::cout << "The perimeter is: " << quadrilateral5->Perimeter() << std::endl;

    std::cout << "Deleting..." << std::endl << std::endl;
    delete quadrilateral1;
    std::cout << "The end" << std::endl << std::endl;
    delete quadrilateral2;
    std::cout << "The end" << std::endl << std::endl;
    delete quadrilateral3;
    std::cout << "The end" << std::endl << std::endl;
    delete quadrilateral4;
    std::cout << "The end" << std::endl << std::endl;
    delete quadrilateral5;
    std::cout << "The end" << std::endl << std::endl;

    return 0;
}
