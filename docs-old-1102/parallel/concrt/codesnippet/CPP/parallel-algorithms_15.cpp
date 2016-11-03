// choosing-parallel-sort.cpp
// compile with: /EHsc
#include <ppl.h>
#include <random>
#include <iostream>
#include <windows.h>

using namespace concurrency;
using namespace std;

// Calls the provided work function and returns the number of milliseconds 
// that it takes to call that function.
template <class Function>
__int64 time_call(Function&& f)
{
   __int64 begin = GetTickCount();
   f();
   return GetTickCount() - begin;
}

const size_t DATASET_SIZE = 10000000;

// Create
// Creates the dataset for this example. Each call
// produces the same predefined sequence of random data.
vector<size_t> GetData()
{
    vector<size_t> data(DATASET_SIZE);
    generate(begin(data), end(data), mt19937(42));
    return data;
}

int wmain()
{
    // Use std::sort to sort the data.
    auto data = GetData();
    wcout << L"Testing std::sort...";
    auto elapsed = time_call([&data] { sort(begin(data), end(data)); });
    wcout << L" took " << elapsed << L" ms." <<endl;

    // Use concurrency::parallel_sort to sort the data.
    data = GetData();
    wcout << L"Testing concurrency::parallel_sort...";
    elapsed = time_call([&data] { parallel_sort(begin(data), end(data)); });
    wcout << L" took " << elapsed << L" ms." <<endl;

    // Use concurrency::parallel_buffered_sort to sort the data.
    data = GetData();
    wcout << L"Testing concurrency::parallel_buffered_sort...";
    elapsed = time_call([&data] { parallel_buffered_sort(begin(data), end(data)); });
    wcout << L" took " << elapsed << L" ms." <<endl;

    // Use concurrency::parallel_radixsort to sort the data.
    data = GetData();
    wcout << L"Testing concurrency::parallel_radixsort...";
    elapsed = time_call([&data] { parallel_radixsort(begin(data), end(data)); });
    wcout << L" took " << elapsed << L" ms." <<endl;
} 
/* Sample output (on a computer that has four cores):
    Testing std::sort... took 2906 ms.
    Testing concurrency::parallel_sort... took 2234 ms.
    Testing concurrency::parallel_buffered_sort... took 1782 ms.
    Testing concurrency::parallel_radixsort... took 907 ms.
*/