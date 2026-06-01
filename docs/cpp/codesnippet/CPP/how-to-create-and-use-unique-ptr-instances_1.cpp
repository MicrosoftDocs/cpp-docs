// Compile with: cl /EHsc /std:c++17

#include <iostream>
#include <memory>
#include <string>

struct Song {
    std::string artist;
    std::string title;
    Song(const std::string& a, const std::string& t) : artist(a), title(t) {
        std::cout << "Created: " << title << "\n";
    }
    ~Song() { std::cout << "Destroyed: " << title << "\n"; }
};

// Returning a unique_ptr by value transfers ownership to the caller.
std::unique_ptr<Song> SongFactory(const std::string& artist, const std::string& title) {
    return std::make_unique<Song>(artist, title);
}

// Passing a unique_ptr by value transfers ownership to the function.
// The Song is automatically destroyed when the function exits.
void SingSong(std::unique_ptr<Song> song) {
    std::cout << "Singing: " << song->title << " by " << song->artist << "\n";
}

int main() {
    // Create a new unique_ptr with a new object.
    auto song = std::make_unique<Song>("Mr. Children", "Namonaki Uta");
    std::cout << "song points to: " << song->title << "\n";

    // Move ownership from one unique_ptr to another.
    std::unique_ptr<Song> song2 = std::move(song);
    std::cout << "After move, song is " << (song ? "not null" : "null") << "\n";
    std::cout << "song2 points to: " << song2->title << "\n";

    // Obtain unique_ptr from a factory function that returns by value.
    auto song3 = SongFactory("Michael Jackson", "Beat It");

    // Transfer ownership to a function.
    SingSong(std::move(song3));
    std::cout << "After SingSong, song3 is " << (song3 ? "not null" : "null") << "\n";
}