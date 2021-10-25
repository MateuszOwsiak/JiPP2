//
// Created by Mateusz on 25.10.2021.
//

#include "../include/MyFirstClass.h"
#include <math.h>
using namespace std;
double Punkt::Distance(Punkt *p1, Punkt *p2) {
    return sqrt(pow(p2->x-p1->x,2)+(p2->y-p1->y,2));
}
