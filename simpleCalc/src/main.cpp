//
// Created by Mateusz on 11.10.2021.
//
#include <iostream>
#include <string>
#include "../include/calc.h"
using namespace std;

int main(int argc, char* argv[])
{
    int a=0,b=0;
    if(argv[2]!=NULL && argv[3]!=NULL) {
            a = stoi(argv[2]);
            b = stoi(argv[3]);
    }
    if (string(argv[1])=="add" && argv[2]!=NULL & argv[3]!=NULL)
    {
        cout<<add(a,b)<<endl;
    }
    else if (string(argv[1]) == "subtract" && argv[2]!=NULL & argv[3]!=NULL)
    {
        cout<<subtract(a,b)<<endl;
    }
    else if (string(argv[1]) == "volume" && argv[2]!=NULL & argv[3]!=NULL)
    {
        cout<<volume(a,b)<<endl;
    }
    else{
        help();
    }
    return 0;
}