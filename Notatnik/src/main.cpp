//
// Created by Mateusz on 29.11.2021.
//
#include <iostream>
#include "../include/note.h"
#include "../include/notedirector.h"

using namespace std;

int main()
{
    NoteDirector* pNoteDirector = new NoteDirector;
    pNoteDirector->addNote();
    pNoteDirector->showNote();
    pNoteDirector->addNote();
    pNoteDirector->showNote();
    pNoteDirector->editNote();
    pNoteDirector->showNote();
    pNoteDirector->deleteNote();
    pNoteDirector->showNote();
    pNoteDirector->clearNotesList();
    pNoteDirector->showNote();
    return 0;
}
