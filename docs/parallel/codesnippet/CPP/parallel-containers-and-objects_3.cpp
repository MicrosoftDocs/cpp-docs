// unordered-multimap-structure.cpp
// compile with: /EHsc
#include <ppl.h>
#include <concurrent_unordered_map.h>
#include <iostream>

using namespace concurrency;
using namespace std;

int wmain() 
{
    //
    // Insert a number of items into the map in parallel.

    concurrent_unordered_multimap<char, int> map; 

    parallel_for(0, 10, [&map](int i) {
        char key = 'a' + (i%9); // Geneate a key in the range [a,i].
        int value = i;          // Set the value to i.
        map.insert(make_pair(key, value));
    });

    // Print the elements in the map.
    for_each(begin(map), end(map), [](const pair<char, int>& pr) {
        wcout << L"[" << pr.first << L", " << pr.second << L"] ";
    });
}
/* Sample output:
    [e, 4] [i, 8] [a, 9] [a, 0] [c, 2] [g, 6] [f, 5] [b, 1] [d, 3] [h, 7]
*/