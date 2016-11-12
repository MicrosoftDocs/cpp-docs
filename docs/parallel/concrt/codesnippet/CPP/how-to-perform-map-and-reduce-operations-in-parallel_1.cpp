// parallel-map-reduce.cpp
// compile with: /EHsc
#include <ppl.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <windows.h>

using namespace concurrency;
using namespace std;

class MapFunc 
{ 
public:
    unordered_map<wstring, size_t> operator()(vector<wstring>& elements) const 
    { 
        unordered_map<wstring, size_t> m;
        for_each(begin(elements), end(elements), [&m](const wstring& elem)
        { 
            m[elem]++;
        });
        return m; 
    }
}; 

struct ReduceFunc : binary_function<unordered_map<wstring, size_t>, 
                    unordered_map<wstring, size_t>, unordered_map<wstring, size_t>>
{
    unordered_map<wstring, size_t> operator() (
        const unordered_map<wstring, size_t>& x, 
        const unordered_map<wstring, size_t>& y) const
    {
        unordered_map<wstring, size_t> ret(x);
        for_each(begin(y), end(y), [&ret](const pair<wstring, size_t>& pr) {
            auto key = pr.first;
            auto val = pr.second;
            ret[key] += val;
        });
        return ret; 
    }
}; 

int wmain()
{ 
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

    vector<unordered_map<wstring, size_t>> map(v.size()); 

    // The Map operation
    parallel_transform(begin(v), end(v), begin(map), MapFunc()); 

    // The Reduce operation 
    unordered_map<wstring, size_t> result = parallel_reduce(
        begin(map), end(map), unordered_map<wstring, size_t>(), ReduceFunc());

    wcout << L"\"word1\" occurs " << result.at(L"word1") << L" times. " << endl;
} 
/* Output:
   "word1" occurs 3 times.
*/