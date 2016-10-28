    vector<shared_ptr<Song>> v;

    v.push_back(make_shared<Song>(L"Bob Dylan", L"The Times They Are A Changing"));
    v.push_back(make_shared<Song>(L"Aretha Franklin", L"Bridge Over Troubled Water"));
    v.push_back(make_shared<Song>(L"Thal�a", L"Entre El Mar y Una Estrella"));

    vector<shared_ptr<Song>> v2;
    remove_copy_if(v.begin(), v.end(), back_inserter(v2), [] (shared_ptr<Song> s) 
    {
        return s->artist.compare(L"Bob Dylan") == 0;		
    });

    for (const auto& s : v2)
    {
        wcout << s->artist << L":" << s->title << endl;
    }