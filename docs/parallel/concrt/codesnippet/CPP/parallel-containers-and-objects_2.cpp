// unordered-map-structure.cpp
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

    concurrent_unordered_map<char, int> map; 

    parallel_for(0, 1000, [&map](int i) {
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
    [e, 751] [i, 755] [a, 756] [c, 758] [g, 753] [f, 752] [b, 757] [d, 750] [h, 754]
*/