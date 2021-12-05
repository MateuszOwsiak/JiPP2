
//
// Created by Mateusz on 29.11.2021.
//

#ifndef DZ_NOTE_H
#define DZ_NOTE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Note{
private:
    string title;
public:
    string getTitle() const;
    void setTitle(string);
    virtual string getContent() const=0;
    virtual void setContent(string)=0;
};
#endif //DZ_NOTE_H
