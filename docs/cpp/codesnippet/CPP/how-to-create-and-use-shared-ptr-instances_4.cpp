#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

    std::vector<std::shared_ptr<MediaAsset>> assets {
      std::make_shared<Song>(L"Himesh Reshammiya", L"Tera Surroor"),
      std::make_shared<Song>(L"Penaz Masani", L"Tu Dil De De")),
      std::make_shared<Photo>(L"2011-04-06", L"Redmond, WA", L"Soccer field at Microsoft.")
    };

    std::vector<std::shared_ptr<MediaAsset>> photos;

    std::copy_if(assets.begin(), assets.end(), std::back_inserter(photos), [] (std::shared_ptr<MediaAsset> p) -> bool
    {
        // Use dynamic_pointer_cast to test whether
        // element is a shared_ptr<Photo>.
        std::shared_ptr<Photo> temp = std::dynamic_pointer_cast<Photo>(p);		
        return temp.get() != nullptr;
    });

    for (const auto&  p : photos)
    {
        // We know that the photos vector contains only 
        // shared_ptr<Photo> objects, so use static_cast.
        std::wcout << "Photo location: " << (std::static_pointer_cast<Photo>(p))->location_ << endl;
    }
