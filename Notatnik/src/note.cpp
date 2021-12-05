//
// Created by Mateusz on 29.11.2021.
//
#include <iostream>
#include "../include/note.h"

using namespace std;

string Note::getTitle() const {
    return title;
}

void Note::setTitle(string t) {
    title = t;
}

