---
description: "Learn more about: Overloading the &lt;&lt; Operator for Your Own Classes"
title: "Overloading the &lt;&lt; Operator for Your Own Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["operator<<, overloading for your own classes", "operator <<, overloading for your own classes"]
ms.assetid: ad1d2c49-d84e-48a8-9c09-121f28b10bf0
---
# Overloading the &lt;&lt; Operator for Your Own Classes

Output streams use the insertion (`<<`) operator for standard types. You can also overload the `<<` operator for your own classes.

## Example

The `write` function example showed the use of a `Date` structure. A date is an ideal candidate for a C++ class in which the data members (month, day, and year) are hidden from view. An output stream is the logical destination for displaying such a structure. This code displays a date using the `cout` object:

```cpp
Date dt(1, 2, 92);

cout <<dt;
```

To get `cout` to accept a `Date` object after the insertion operator, overload the insertion operator to recognize an `ostream` object on the left and a `Date` on the right. The overloaded `<<` operator function must then be declared as a friend of class `Date` so it can access the private data within a `Date` object.

```cpp
// overload_date.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

class Date
{
    int mo, da, yr;
public:
    Date(int m, int d, int y)
    {
        mo = m; da = d; yr = y;
    }
    friend ostream& operator<<(ostream& os, const Date& dt);
};

ostream& operator<<(ostream& os, const Date& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}

int main()
{
    Date dt(5, 6, 92);
    cout << dt;
}
```

```Output
5/6/92
```

## Remarks

The overloaded operator returns a reference to the original `ostream` object, which means you can combine insertions:

```cpp
cout <<"The date is" <<dt <<flush;
```

## See also

[Output Streams](../standard-library/output-streams.md)
