#include <algorithm>
#include <memory>
#include <vector>

    std::vector<std::shared_ptr<Song>> v {
      std::make_shared<Song>(L"Bob Dylan", L"The Times They Are A Changing"),
      std::make_shared<Song>(L"Aretha Franklin", L"Bridge Over Troubled Water"),
      std::make_shared<Song>(L"Thal�a", L"Entre El Mar y Una Estrella")
    };

    std::vector<shared_ptr<Song>> v2;
    std::remove_copy_if(v.begin(), v.end(), std::back_inserter(v2), [] (std::shared_ptr<Song> s) 
    {
        return s->artist.compare(L"Bob Dylan") == 0;		
    });

    for (const auto& s : v2)
    {
        std::wcout << s->artist << L":" << s->title << endl;
    }
