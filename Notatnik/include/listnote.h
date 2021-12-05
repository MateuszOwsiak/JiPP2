//
// Created by Mateusz on 29.11.2021.
//

#ifndef NOTATNIK_LISTNOTE_H
#define NOTATNIK_LISTNOTE_H
#include "../include/note.h"

class ListNote:public Note{
private:
    vector<string>content;
public:
    string getContent() const;
    void setContent(string);
};


#endif //NOTATNIK_LISTNOTE_H
