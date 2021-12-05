//
// Created by Mateusz on 05.12.2021.
//

#ifndef NOTATNIK_NOTEDIRECTOR_H
#define NOTATNIK_NOTEDIRECTOR_H
#include "../include/note.h"
#include <vector>
#include <string>
using namespace std;


class NoteDirector{
private:
    vector<Note*>notesList;
public:
    void addNote();
    void deleteNote();
    void editNote();
    void showNote();
    void clearNotesList();
};
#endif //NOTATNIK_NOTEDIRECTOR_H
