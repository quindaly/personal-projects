//
//  main.cpp
//  MainLab8
//
//  Created by Quin Daly on 11/26/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//
#include "Song.h"
#include "Playlist.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<Song*> songLibrary;
    vector<Playlist*> playListVector;
    string userSelection;
    string enteredName;
    string enteredLine;
    string playlistName;
    string removeSongName;
    int playlistSize;
    int playlistIndex;
    int songIndex;
    
    cout << "Welcome to the Firstline Player!  Enter options to see menu options." << endl << endl;
    
    cout << "Enter your selection now: " << endl << endl;
    cin >> userSelection;
    cin.ignore();
    
    while (userSelection != "quit") {
        
        // add a song
        if (userSelection == "add") {
            cout << "Read in Song names and first lines (type \"STOP\" when done):" << endl;
            while (enteredName != "STOP") {
                cout << "Song Name: " << endl;
                getline(cin, enteredName);
                if (enteredName == "STOP") {
                    break;
                }
                cout << "Song's first line: " << endl;
                getline(cin, enteredLine);
                songLibrary.push_back(new Song(enteredName, enteredLine));
            }
        }
        
        // display song library
        else if (userSelection == "list") {
            for (int i = 0; i < songLibrary.size(); ++i) {
                songLibrary.at(i)->PrintList();
                cout << endl;
            }
        }
        
        // add playlist
        else if (userSelection == "addp") {
            cout << "Playlist name: " << endl;
            getline(cin, playlistName);
            playListVector.push_back(new Playlist(playlistName));
        }
        
        // display playlists
        else if (userSelection == "listp") {
            for (int i = 0; i < playListVector.size(); ++i) {
                cout << i << ": ";
                cout << playListVector.at(i)->PrintPlaylist();
                cout << endl;
            }
        }
        
        // add songs to playlist
        else if (userSelection == "addsp") {
            for (int i = 0; i < playListVector.size(); ++i) {
                cout << i << ": ";
                cout << playListVector.at(i)->PrintPlaylist();
                cout << endl;
            }
            cout << "Pick a playlist index number: " << endl;
            cin >> playlistIndex;
            cin.ignore();
            for (int i = 0; i < songLibrary.size(); ++i) {
                cout << i << ": ";
                songLibrary.at(i)->ShowListSongs();
                cout << endl;
            }
            cout << "Pick a song index number: " << endl;
            cin >> songIndex;
            cin.ignore();
            playListVector.at(playlistIndex)->AddSong(songLibrary.at(songIndex));
        }
        
        // play a playlist
        else if (userSelection == "play") {
            for (int i = 0; i < playListVector.size(); ++i) {
                cout << i << ": ";
                cout << playListVector.at(i)->PrintPlaylist();
                cout << endl;
            }
            cout << "Pick a playlist index number: " << endl;
            cin >> playlistIndex;
            cin.ignore();
            cout << "Playing first lines of playlist: " << playListVector.at(playlistIndex)->PrintPlaylist() << endl;
            playListVector.at(playlistIndex)->PlayPlaylist();
        }
        
        // remove a playlist
        else if (userSelection == "remp") {
            for (int i = 0; i < playListVector.size(); ++i) {
                cout << i << ": ";
                cout << playListVector.at(i)->PrintPlaylist();
                cout << endl;
            }
            cout << "Pick a playlist index number to remove: " << endl;
            cin >> playlistIndex;
            cin.ignore();
            playListVector.erase(playListVector.begin() + playlistIndex);
        }
        
        // remove a song from a playlist
        else if (userSelection == "remsp") {
            for (int i = 0; i < playListVector.size(); ++i) {
                cout << i << ": ";
                cout << playListVector.at(i)->PrintPlaylist();
                cout << endl;
            }
            cout << "Pick a playlist index number: " << endl;
            cin >> playlistIndex;
            cin.ignore();
            playListVector.at(playlistIndex)->ShowSongs();
            cout << "Pick a song index number to remove: " << endl;
            cin >> songIndex;
            cin.ignore();
            playListVector.at(playlistIndex)->RemoveSong(songIndex);
            
        }
        
        // remove a song from the main library
        else if (userSelection == "remsl") {
            for (int i = 0; i < songLibrary.size(); ++i) {
                cout << i << ": ";
                songLibrary.at(i)->ShowListSongs();
                cout << endl;
            }
            cout << "Pick a song index number to remove: " << endl;
            cin >> songIndex;
            cin.ignore();
            songLibrary.erase(songLibrary.begin() + songIndex);
        }
        
        else {
            cout << "add      Adds a list of songs to the library" << endl;
            cout << "list     Lists all the songs in the library" << endl;
            cout << "addp     Adds a new playlist" << endl;
            cout << "addsp    Adds a song to a playlist" << endl;
            cout << "listp    Lists all the playlists" << endl;
            cout << "play     Plays a playlist" << endl;
            cout << "remp     Removes a playlist" << endl;
            cout << "remsp    Removes a song from a playlist" << endl;
            cout << "remsl    Removes a song from the library (and all playlists)" << endl;
            cout << "options  Prints this options menu" << endl;
            cout << "quit     Quits the program" << endl << endl;
        }
        
        // print after task is completed
        cout << endl;
        cout << "Enter your selection now: " << endl;
        cin >> userSelection;
        cin.ignore();
    }
    
    cout << "Goodbye!";
    
    // free memory
    for(int i = 0; i < songLibrary.size(); ++i) {
        delete songLibrary.at(i);
    }
    return 0;
}
