//
// Created by Mateusz on 05.12.2021.
//
#include "../include/notedirector.h"
#include "../include/textnote.h"
#include "../include/listnote.h"

void NoteDirector::addNote() {
        int choice;
        cout<<"Jaka notatke chcesz dodac: "<<endl;
        cout<<"1.Notatke tekstowa"<<endl;
        cout<<"2.Notatke listowa"<<endl;
        cout<<"Wybor: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cin.ignore();
                Note* pNote = new TextNote;
                string note,title;
                cout<<"Podaj tytul notatki: "<<endl;
                getline(cin,title);
                pNote->setTitle(title);
                cout<<"Podaj notatke: "<<endl;
                getline(cin,note);
                pNote->setContent(note);
                notesList.push_back(pNote);
            }break;
            case 2:
            {
                cin.ignore();
                Note* pListNote = new ListNote;
                string note,title;
                cout<<"Podaj tytul notatki: "<<endl;
                getline(cin,title);
                pListNote->setTitle(title);
                cout<<"Ile linii ma notatka: "<<endl;
                int l;
                cin>>l;
                cin.ignore();
                while(l--)
                {
                    getline(cin,note);
                    pListNote->setContent(note);
                }
                notesList.push_back(pListNote);
            }break;
            default:
            {
                cout<<"Zla opcja"<<endl;
            }break;
        }
}
void NoteDirector::clearNotesList() {
    notesList.clear();
    cout<<"Usunieto wszystkie notatki"<<endl;
}
void NoteDirector::showNote() {
    if(notesList.size()>0) {
        cout << "Ktora notatke chcesz wyswietlic: " << endl;
        for (int i = 0; i < notesList.size(); i++) {
            cout << i + 1 << ". " << notesList[i]->getTitle() << endl;
        }
        int wybor;
        cin >> wybor;
        if (wybor <= 0 || wybor > notesList.size()) {
            cout << "Bledny numer" << endl;
            exit(0);
        } else {
            //while((notesList[wybor-1]->getContent()) != "end") {
                cout << notesList[wybor - 1]->getContent() << endl;
            //}
        }
    }
    else
        cout<<"Brak notatek"<<endl;
}
void NoteDirector::editNote() {
    if(notesList.size()>0) {
        cout << "Ktora notatke chcesz edytowac: " << endl;
        for (int i = 0; i < notesList.size(); i++) {
            cout << i + 1 << ". " << notesList[i]->getTitle() << endl;
        }
        int wybor;
        cin >> wybor;
        cin.ignore();
        if (wybor <= 0 || wybor > notesList.size()) {
            cout << "Bledny numer" << endl;
            exit(0);
        } else {
            string title, note;
            cout << "Podaj tytul notatki: " << endl;
            getline(cin, title);
            notesList[wybor - 1]->setTitle(title);
            cout<<"Ile linii ma notatka: ";
            int l;
            cin>>l;
            cin.ignore();
            cout<<"Podaj notatke:"<<endl;
            while(l--)
            {
                string note;
                getline(cin,note);
                notesList[wybor-1]->setContent(note);
            }
        }
    }
    else
        cout<<"Brak notatek do edytowania"<<endl;
}
void NoteDirector::deleteNote() {
    if(notesList.size()>0) {
        cout << "Ktora notatke chcesz usunac: " << endl;
        for (int i = 0; i < notesList.size(); i++) {
            cout << i + 1 << ". " << notesList[i]->getTitle() << endl;
        }
        int wybor;
        cin >> wybor;
        if (wybor <= 0 || wybor > notesList.size()) {
            cout << "Bledny numer" << endl;
            exit(0);
        } else {
            notesList.erase(notesList.begin() + wybor - 1);
            cout << "Notatka zostala usunieta" << endl;
        }
    }
    else
        cout<<"Brak notatek do usuniecia"<<endl;
}
