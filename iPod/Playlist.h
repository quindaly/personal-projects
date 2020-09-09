//
//  Playlist.hpp
//  MainLab8
//
//  Created by Quin Daly on 11/26/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#ifndef Playlist_h
#define Playlist_h

#include "Song.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Playlist {
public:
    Playlist(string enteredName);
    string PrintPlaylist();
    void AddSong(Song* userSong);
    void PlayPlaylist();
    void RemoveSong(int songIndex);
    void ShowSongs();
    //int FindSong(string userSong);
private:
    string playlistName;
    vector<Song*> playListVector;
};

#endif /* Playlist_hpp */
