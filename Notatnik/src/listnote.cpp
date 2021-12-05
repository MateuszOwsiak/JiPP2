//
// Created by Mateusz on 29.11.2021.
//

#include "../include/listnote.h"
string ListNote::getContent() const {
        for(int i=0; i<content.size()-1; i++)
            cout<<content[i]<<endl;
        return content[content.size()-1];
}

void ListNote::setContent(string c) {
        content.push_back(c);
}

