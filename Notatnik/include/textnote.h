//
// Created by Mateusz on 29.11.2021.
//

#ifndef NOTATNIK_TEXTNOTE_H
#define NOTATNIK_TEXTNOTE_H
#include "../include/note.h"

class TextNote:public Note{
private:
    string content;
public:
    string getContent() const;
    void setContent(string);
};

#endif //NOTATNIK_TEXTNOTE_H
