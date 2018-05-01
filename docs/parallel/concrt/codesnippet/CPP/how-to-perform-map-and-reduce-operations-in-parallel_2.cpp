    // File 1 
    vector<wstring> v1 {
      L"word1", // 1
      L"word1", // 2
      L"word2",
      L"word3",
      L"word4",
    };

    // File 2 
    vector<wstring> v2 {
      L"word5",
      L"word6",
      L"word7",
      L"word8",
      L"word1", // 3
    }; 

    vector<vector<wstring>> v { v1, v2 };

    concurrent_unordered_map<wstring, size_t> result;
    for_each(begin(v), end(v), [&result](const vector<wstring>& words) {
        parallel_for_each(begin(words), end(words), [&result](const wstring& word) {
            InterlockedIncrement(&result[word]);
        });
    });
                
    wcout << L"\"word1\" occurs " << result.at(L"word1") << L" times. " << endl;

    /* Output:
       "word1" occurs 3 times.
    */