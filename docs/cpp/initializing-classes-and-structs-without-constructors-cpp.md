---
title: "Initializing classes and structs without constructors (C++)"
ms.date: "10/17/2018"
ms.assetid: 3e55c3d6-1c6b-4084-b9e5-221b151402f4
---
# Initializing classes and structs without constructors (C++)

It is not always necessary to define a constructor for a class, especially ones that are relatively simple. Users can initialize objects of a class or struct by using uniform initialization, as shown in the following example:

```cpp
// no_constructor.cpp
// Compile with: cl /EHsc no_constructor.cpp
#include <time.h>

// No constructor
struct TempData
{
    int StationId;
    time_t timeSet;
    double current;
    double maxTemp;
    double minTemp;
};

// Has a constructor
struct TempData2
{
    TempData2(double minimum, double maximum, double cur, int id, time_t t) :
       stationId{id}, timeSet{t}, current{cur}, maxTemp{maximum}, minTemp{minimum} {}
    int stationId;
    time_t timeSet;
    double current;
    double maxTemp;
    double minTemp;
};

int main()
{
    time_t time_to_set;

    // Member initialization (in order of declaration):
    TempData td{ 45978, time(&time_to_set), 28.9, 37.0, 16.7 };

    // Default initialization = {0,0,0,0,0}
    TempData td_default{};

    // Uninitialized = if used, emits warning C4700 uninitialized local variable
    TempData td_noInit;

    // Member declaration (in order of ctor parameters)
    TempData2 td2{ 16.7, 37.0, 28.9, 45978, time(&time_to_set) };

    return 0;
}
```

Note that when a class or struct has no constructor, you provide the list elements in the order that the members are declared in the class. If the class has a constructor, provide the elements in the order of the parameters.

## See also

[Classes and Structs](../cpp/classes-and-structs-cpp.md)<br/>
[Constructors](../cpp/constructors-cpp.md)
