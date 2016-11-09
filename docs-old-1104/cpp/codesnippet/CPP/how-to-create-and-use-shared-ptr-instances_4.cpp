    vector<shared_ptr<MediaAsset>> assets;

    assets.push_back(shared_ptr<Song>(new Song(L"Himesh Reshammiya", L"Tera Surroor")));
    assets.push_back(shared_ptr<Song>(new Song(L"Penaz Masani", L"Tu Dil De De")));
    assets.push_back(shared_ptr<Photo>(new Photo(L"2011-04-06", L"Redmond, WA", L"Soccer field at Microsoft.")));

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
        wcout << "Photo location: " << (static_pointer_cast<Photo>(p))->location_ << endl;
    }