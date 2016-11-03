// create-task.cpp
// compile with: /EHsc
#include <ppltasks.h>
#include <string>
#include <iostream>
#include <array>

using namespace concurrency;
using namespace std;

int wmain()
{
    task<array<array<int, 10>, 10>> create_identity_matrix([]
    {
        array<array<int, 10>, 10> matrix;
        int row = 0;
        for_each(begin(matrix), end(matrix), [&row](array<int, 10>& matrixRow) 
        {
            fill(begin(matrixRow), end(matrixRow), 0);
            matrixRow[row] = 1;
            row++;
        });
        return matrix;
    });

    auto print_matrix = create_identity_matrix.then([](array<array<int, 10>, 10> matrix)
    {
        for_each(begin(matrix), end(matrix), [](array<int, 10>& matrixRow) 
        {
            wstring comma;
            for_each(begin(matrixRow), end(matrixRow), [&comma](int n) 
            {
                wcout << comma << n;
                comma = L", ";
            });
            wcout << endl;
        });
    });

    print_matrix.wait();
}
/* Output:
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1
*/