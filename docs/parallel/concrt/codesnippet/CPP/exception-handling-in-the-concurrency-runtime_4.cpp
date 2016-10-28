// eh-task-group.cpp
// compile with: /EHsc
#include <ppl.h>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

// Defines a basic point with X and Y coordinates.
struct point
{
   int X;
   int Y;
};

// Prints the provided point object to the console.
void print_point(point* pt)
{
   // Throw an exception if the value is NULL.
   if (pt == NULL)
   {
      throw exception("point is NULL.");
   }

   // Otherwise, print the values of the point.
   wstringstream ss;
   ss << L"X = " << pt->X << L", Y = " << pt->Y << endl;
   wcout << ss.str();
}

int wmain()
{
   // Create a few point objects.
   point pt = {15, 30};
   point* pt1 = &pt;
   point* pt2 = NULL;

   // Use a task group to print the values of the points.
   task_group tasks;

   tasks.run([&] {
      print_point(pt1);
   });

   tasks.run([&] {
      print_point(pt2);
   });

   // Wait for the tasks to finish. If any task throws an exception,
   // the runtime marshals it to the call to wait.
   try
   {
      tasks.wait();
   }
   catch (const exception& e)
   {
      wcerr << L"Caught exception: " << e.what() << endl;
   }
}