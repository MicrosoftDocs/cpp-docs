    // File 1 
    vector<wstring> v1;
    v1.push_back(L"word1"); //1 
    v1.push_back(L"word1"); //2 
    v1.push_back(L"word2"); 
    v1.push_back(L"word3"); 
    v1.push_back(L"word4"); 

    // File 2 
    vector<wstring> v2; 
    v2.push_back(L"word5"); 
    v2.push_back(L"word6"); 
    v2.push_back(L"word7"); 
    v2.push_back(L"word8"); 
    v2.push_back(L"word1"); //3 

    vector<vector<wstring>> v;
    v.push_back(v1);
    v.push_back(v2);

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