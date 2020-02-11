    // Create a unique_ptr to an array of 5 integers.
    auto p = make_unique<int[]>(5);

    // Initialize the array.
    for (int i = 0; i < 5; ++i)
    {
        p[i] = i;
        wcout << p[i] << endl;
    }