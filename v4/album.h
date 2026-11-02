#ifndef ALBUM_H
#define ALBUM_H

#include <string>
#include <vector>

class Song {
public:
    std::string title;
    std::string artist;
    int seconds;
};

class Album {
    std::string title;
    int year;
    std::vector<Song> songs;

public:
    Album(std::string t, int y, Song first);

    bool add(Song s);

    int duration() const;

    void print() const;
};

#endif