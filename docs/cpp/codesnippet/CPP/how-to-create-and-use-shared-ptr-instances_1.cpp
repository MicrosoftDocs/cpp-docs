    #include <memory>    

    // Use make_shared function when possible.
    auto sp1 = std::make_shared<Song>(L"The Beatles", L"Im Happy Just to Dance With You");

    // Ok, but slightly less efficient. 
    // Note: Using new expression as constructor argument
    // creates no named variable for other code to access.
    std::shared_ptr<Song> sp2(new Song(L"Lady Gaga", L"Just Dance"));

    // When initialization must be separate from declaration, e.g. class members, 
    // initialize with nullptr to make your programming intent explicit.
    std::shared_ptr<Song> sp5(nullptr);
    //Equivalent to: shared_ptr<Song> sp5;
    //...
    sp5 = std::make_shared<Song>(L"Elton John", L"I'm Still Standing");
