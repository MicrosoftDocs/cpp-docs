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
  vector<wstring> words{
      L"Lorem ",
      L"ipsum ",
      L"dolor ",
      L"sit ",
      L"amet, ",
      L"consectetur ",
      L"adipiscing ",
      L"elit."};
      
  // Reduce the vector to one string in parallel.
  wcout << parallel_reduce(begin(words), end(words), wstring()) << endl;
}

/* Output:
   Lorem ipsum dolor sit amet, consectetur adipiscing elit.
*/