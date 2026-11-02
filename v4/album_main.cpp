#include <iostream>
#include "album.h"

Album::Album(std::string t, int y, Song first)
    : title(t), year(y) {
    songs.push_back(first);
}

bool Album::add(Song s) {
    for (const Song& song : songs) {
        if (song.title == s.title)
            return false;
    }

    songs.push_back(s);
    return true;
}

int Album::duration() const {
    int total = 0;

    for (const Song& song : songs) {
        total += song.seconds;
    }

    return total;
}

void Album::print() const {
    std::cout << title << " (" << year << ")\n";

    for (const Song& song : songs) {
        std::cout << song.title << " - "
                  << song.artist << " ("
                  << song.seconds << " s)\n";
    }

    std::cout << "Total duration: "
              << duration() << " s\n";
}