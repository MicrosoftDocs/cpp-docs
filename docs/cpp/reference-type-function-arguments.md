---
description: "Learn more about: Reference-Type Function Arguments"
title: "Reference-Type Function Arguments"
ms.date: "08/27/2018"
helpviewer_keywords: ["arguments [C++], function", "functions [C++], parameters", "function parameters [C++], reference-type", "function arguments [C++], reference-type", "passing parameters [C++], reference-type arguments"]
ms.assetid: 0a70e831-9e76-46c0-821d-aeba13d73cc0
---
# Reference-Type Function Arguments

It is often more efficient to pass references, rather than large objects, to functions. This allows the compiler to pass the address of the object while maintaining the syntax that would have been used to access the object. Consider the following example that uses the `Date` structure:

```cpp
// reference_type_function_arguments.cpp
#include <iostream>

struct Date
{
    short Month;
    short Day;
    short Year;
};

// Create a date of the form DDDYYYY (day of year, year)
// from a Date.
long DateOfYear( Date& date )
{
    static int cDaysInMonth[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    long dateOfYear = 0;

    // Add in days for months already elapsed.
    for ( int i = 0; i < date.Month - 1; ++i )
        dateOfYear += cDaysInMonth[i];

    // Add in days for this month.
    dateOfYear += date.Day;

    // Check for leap year.
    if ( date.Month > 2 &&
        (( date.Year % 100 != 0 || date.Year % 400 == 0 ) &&
        date.Year % 4 == 0 ))
        dateOfYear++;

    // Add in year.
    dateOfYear *= 10000;
    dateOfYear += date.Year;

    return dateOfYear;
}

int main()
{
    Date date{ 8, 27, 2018 };
    long dateOfYear = DateOfYear(date);
    std::cout << dateOfYear << std::endl;
}
```

The preceding code shows that members of a structure passed by reference are accessed using the member-selection operator (**.**) instead of the pointer member-selection operator (**->**).

Although arguments passed as reference types observe the syntax of non-pointer types, they retain one important characteristic of pointer types: they are modifiable unless declared as **`const`**. Because the intent of the preceding code is not to modify the object `date`, a more appropriate function prototype is:

```cpp
long DateOfYear( const Date& date );
```

This prototype guarantees that the function `DateOfYear` will not change its argument.

Any function prototyped as taking a reference type can accept an object of the same type in its place because there is a standard conversion from *typename* to *typename*<strong>&</strong>.

## See also

[References](../cpp/references-cpp.md)<br/>
