//
// Created by Mateusz on 13.10.2021.
//
#include <iostream>

using namespace std;

int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int volume(int a,int b)
{
    return a*b;
}
void help()
{
    cout << "Simple calculator" << endl;
    cout << "simpleCalc - prosty kalkulator wykonujacy operacje dodawania, odejmowania liczb calkowitych oraz obliczania objetosci graniastoslupa prostego o podstawie trapezu" << endl;
    cout << "Dzialania:" << endl;
    cout << "add [a] [b]" << endl;
    cout << "     Dodawanie dwoch liczb calkowitych" << endl;
    cout << "subtract [a] [b]" << endl;
    cout << "     Odejmowanie dwoch liczb calkowitych" << endl;
    cout << "volume [pole_podstawy] [wysokosc]" << endl;
    cout << "     Obliczanie objetosci graniastoslupa prostego o podstawie trapezu" << endl;
    cout << "help" << endl;
    cout << "     Wyswietla pomoc i opis dzialania programu" << endl;
}
