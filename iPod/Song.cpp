//
//  Song.cpp
//  MainLab8
//
//  Created by Quin Daly on 11/26/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//
#include <iostream>
#include "Song.h"
#include <string>
using namespace std;

Song::Song(string enteredName, string enteredLine) {
    title = enteredName;
    firstLine = enteredLine;
    timesPlayed = 0;
}
string Song::GetTitle() {
    return title;
}
string Song::GetFirstLine() {
    return firstLine;
}
int Song::IncrementTimesPlayed() {
    timesPlayed += 1;
    return timesPlayed;
}
void Song::PrintList() {
    cout << title << ": \"" << firstLine << "\", " << timesPlayed << " play(s).";
}
void Song::ShowListSongs() {
    cout << title;
}
