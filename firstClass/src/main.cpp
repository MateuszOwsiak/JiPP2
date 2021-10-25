//
// Created by Mateusz on 25.10.2021.
//

#include <iostream>
#include "../include/MyFirstClass.h"
using namespace std;

int main()
{
    Punkt* p1 = new Punkt;
    Punkt* p2 = new Punkt;
    p1->x = 12;
    p1->y = 4;
    p2->x = 1;
    p2->y = 3;
    cout<<Punkt::Distance(p1,p2)<<endl;
    return 0;
}