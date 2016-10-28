// unordered-set-structure.cpp
// compile with: /EHsc
#include <ppl.h>
#include <concurrent_unordered_set.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain() 
{
    //
    // Insert a number of items into the set in parallel.

    concurrent_unordered_multiset<char> set; 

    parallel_for(0, 40, [&set](int i) {
        set.insert('a' + (i%9)); // Geneate a value in the range [a,i].
    });

    // Print the elements in the set.
    for_each(begin(set), end(set), [](char c) {
        wcout << L"[" << c << L"] ";
    });
}
/* Sample output:
    [e] [e] [e] [e] [i] [i] [i] [i] [a] [a] [a] [a] [a] [c] [c] [c] [c] [c] [g] [g]
    [g] [g] [f] [f] [f] [f] [b] [b] [b] [b] [b] [d] [d] [d] [d] [d] [h] [h] [h] [h]
*/