//
//  Playlist.cpp
//  MainLab8
//
//  Created by Quin Daly on 11/26/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#include "Playlist.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

Playlist::Playlist(string enteredName) {
    playlistName = enteredName;
}
string Playlist::PrintPlaylist() {
    return playlistName;
}
void Playlist::AddSong(Song* userSong) {
    playListVector.push_back(userSong);
}
void Playlist::RemoveSong(int songIndex) {
    playListVector.erase(playListVector.begin() + songIndex);
}
void Playlist::PlayPlaylist() {
    for (int i = 0; i < playListVector.size(); ++i) {
        playListVector.at(i)->IncrementTimesPlayed();
        cout << playListVector.at(i)->GetFirstLine() << endl;
    }
}
void Playlist::ShowSongs() {
    for (int i = 0; i < playListVector.size(); ++i) {
        cout << i << ": " << playListVector.at(i)->GetTitle() << endl;
    }
}

/*int Playlist::FindSong(string userSong) {
    string currSong;
    int deleteSongIndex;
    for (int i = 0; i < playListVector.size(); ++i) {
        currSong = playListVector.at(i)->GetTitle();
        if (currSong == userSong) {
            deleteSongIndex = i;
        }
    }
    return deleteSongIndex;
}*/
