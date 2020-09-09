//
//  Song.hpp
//  MainLab8
//
//  Created by Quin Daly on 11/26/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#ifndef Song_h
#define Song_h

#include <stdio.h>
#include <string>
using namespace std;

class Song {
public:
    Song(string enteredName, string enteredLine);
    string GetTitle();
    string GetFirstLine();
    void PrintList();
    int IncrementTimesPlayed();
    void ShowListSongs();
    
private:
    string title;
    string firstLine;
    int timesPlayed;
};

#endif /* Song_hpp */
