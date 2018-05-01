void SongVector()
{
    // Create a few new unique_ptr<Song> instances
    // and add them to vector using implicit move semantics.
    vector<unique_ptr<Song>> songs {
      make_unique<Song>(L"B'z", L"Juice"),
      make_unique<Song>(L"Namie Amuro", L"Funky Town"),
      make_unique<Song>(L"Kome Kome Club", L"Kimi ga Iru Dake de"),
      make_unique<Song>(L"Ayumi Hamasaki", L"Poker Face")
    };

    // Pass by const reference when possible to avoid copying.
    for (const auto& song : songs)
    {
        wcout << L"Artist: " << song->artist << L"   Title: " << song->title << endl; 
    }    
}