// parallel-sort-points.cpp
// compile with: /EHsc
#include <ppl.h>
#include <random>
#include <iostream>

using namespace concurrency;
using namespace std;

// Defines a 3-D point.
struct Point
{
    int X;
    int Y;
    int Z;
};

// Computes the Euclidean distance between two points.
size_t euclidean_distance(const Point& p1, const Point& p2)
{
    int dx = p1.X - p2.X;
    int dy = p1.Y - p2.Y;
    int dz = p1.Z - p2.Z;
    return static_cast<size_t>(sqrt((dx*dx) + (dy*dy) + (dz*dz)));
}

int wmain()
{
    // The central point of reference.
    const Point center = { 3, 2, 7 };

    // Create a few random Point values.
    vector<Point> values(7);
    mt19937 random(42);
    generate(begin(values), end(values), [&random] {
        Point p = { random()%10, random()%10, random()%10 };
        return p;
    });

    // Print the values before sorting them.
    wcout << "Before sorting:" << endl;
    for_each(begin(values), end(values), [center](const Point& p) {
        wcout << L'(' << p.X << L"," << p.Y << L"," << p.Z 
              << L") D = " << euclidean_distance(p, center) << endl;
    });
    wcout << endl;

    // Sort the values based on their distances from the reference point.
    parallel_radixsort(begin(values), end(values), 
        [center](const Point& p) -> size_t {
            return euclidean_distance(p, center);
        });

    // Print the values after sorting them.
    wcout << "After sorting:" << endl;
    for_each(begin(values), end(values), [center](const Point& p) {
        wcout << L'(' << p.X << L"," << p.Y << L"," << p.Z 
              << L") D = " << euclidean_distance(p, center) << endl;
    });
    wcout << endl;
} 
/* Output:
    Before sorting:
    (2,7,6) D = 5
    (4,6,5) D = 4
    (0,4,0) D = 7
    (3,8,4) D = 6
    (0,4,1) D = 7
    (2,5,5) D = 3
    (7,6,9) D = 6

    After sorting:
    (2,5,5) D = 3
    (4,6,5) D = 4
    (2,7,6) D = 5
    (3,8,4) D = 6
    (7,6,9) D = 6
    (0,4,0) D = 7
    (0,4,1) D = 7
*/