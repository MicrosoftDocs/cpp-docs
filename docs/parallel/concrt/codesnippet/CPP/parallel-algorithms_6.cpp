// basic-parallel-reduce.cpp
// compile with: /EHsc
#include <ppl.h>
#include <iostream>
#include <string> 
#include <vector>

using namespace concurrency;
using namespace std;

int wmain()
{
    // Create a vector of strings.
    vector<wstring> words;
    words.push_back(L"Lorem ");
    words.push_back(L"ipsum ");
    words.push_back(L"dolor ");
    words.push_back(L"sit ");
    words.push_back(L"amet, ");
    words.push_back(L"consectetur ");
    words.push_back(L"adipiscing ");
    words.push_back(L"elit.");

    // Reduce the vector to one string in parallel.
    wcout << parallel_reduce(begin(words), end(words), wstring()) << endl;
}

/* Output:
   Lorem ipsum dolor sit amet, consectetur adipiscing elit.
*/