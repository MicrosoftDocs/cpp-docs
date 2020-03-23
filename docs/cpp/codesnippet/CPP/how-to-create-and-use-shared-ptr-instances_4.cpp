    vector<shared_ptr<MediaAsset>> assets {
      make_shared<Song>(L"Himesh Reshammiya", L"Tera Surroor"),
      make_shared<Song>(L"Penaz Masani", L"Tu Dil De De"),
      make_shared<Photo>(L"2011-04-06", L"Redmond, WA", L"Soccer field at Microsoft.")
    };

    vector<shared_ptr<MediaAsset>> photos;

    copy_if(assets.begin(), assets.end(), back_inserter(photos), [] (shared_ptr<MediaAsset> p) -> bool
    {
        // Use dynamic_pointer_cast to test whether
        // element is a shared_ptr<Photo>.
        shared_ptr<Photo> temp = dynamic_pointer_cast<Photo>(p);
        return temp.get() != nullptr;
    });

    for (const auto&  p : photos)
    {
        // We know that the photos vector contains only 
        // shared_ptr<Photo> objects, so use static_cast.
        wcout << "Photo location: " << (static_pointer_cast<Photo>(p))->location << endl;
    }