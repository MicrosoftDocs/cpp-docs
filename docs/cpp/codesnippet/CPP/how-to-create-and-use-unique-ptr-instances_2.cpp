// Compile with: cl /EHsc /std:c++17

#include <iostream>
#include <memory>
#include <string>
#include <vector>

struct Song {
    std::string artist;
    std::string title;
    Song(const std::string& a, const std::string& t) : artist(a), title(t) {}
};

int main() {
    std::vector<std::unique_ptr<Song>> songs;

    // Create unique_ptr<Song> instances and add them to the vector
    // using implicit move semantics.
    songs.push_back(std::make_unique<Song>("B'z", "Juice"));
    songs.push_back(std::make_unique<Song>("Namie Amuro", "Funky Town"));
    songs.push_back(std::make_unique<Song>("Kome Kome Club", "Kimi ga Iru Dake de"));
    songs.push_back(std::make_unique<Song>("Ayumi Hamasaki", "Poker Face"));

    // Pass by const reference to avoid copying.
    // Passing by value causes a compile error because
    // the unique_ptr copy constructor is deleted.
    for (const auto& song : songs) {
        std::cout << "Artist: " << song->artist
                  << "   Title: " << song->title << "\n";
    }
    // The unique_ptr instances in the vector are automatically destroyed when the vector goes out of scope at the end of main()
}