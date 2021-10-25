//
// Created by Mateusz on 25.10.2021.
//

#ifndef FIRSTCLASS_MYFIRSTCLASS_H
#define FIRSTCLASS_MYFIRSTCLASS_H
#include <iostream>
using namespace std;
class Punkt
{
public:
    double x;
    double y;
    Punkt(double x=0, double y=0) : x(x),y(y) {};
    static double Distance(Punkt* p1,Punkt* p2);
};
#endif //FIRSTCLASS_MYFIRSTCLASS_H
