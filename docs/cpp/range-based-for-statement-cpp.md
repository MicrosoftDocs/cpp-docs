---
description: "Learn more about: Range-based for Statement (C++)"
title: "Range-based for Statement (C++)"
ms.date: "11/04/2016"
ms.assetid: 5750ba1d-ba48-4236-a923-e32de8345c2d
---
# Range-based for Statement (C++)

Executes `statement` repeatedly and sequentially for each element in `expression`.

## Syntax

> **`for (`** *for-range-declaration* **`:`** *expression* **`)`**\
&emsp; *statement*

## Remarks

Use the range-based **`for`** statement to construct loops that must execute through a *range*, which is defined as anything that you can iterate through—for example, `std::vector`, or any other C++ Standard Library sequence whose range is defined by a `begin()` and `end()`. The name that is declared in the `for-range-declaration` portion is local to the **`for`** statement and cannot be re-declared in `expression` or `statement`. Note that the [`auto`](../cpp/auto-cpp.md) keyword is preferred in the `for-range-declaration` portion of the statement.

**New in Visual Studio 2017:**  Range-based **`for`** loops no longer require that `begin()` and `end()` return objects of the same type. This enables `end()` to return a sentinel object such as used by ranges as defined in the Ranges-V3 proposal. For more information, see [Generalizing the Range-Based `For` Loop](https://wg21.link/p0184r0) and the [range-v3 library on GitHub](https://github.com/ericniebler/range-v3).

This code shows how to use range-based **`for`** loops to iterate through an array and a vector:

```cpp
// range-based-for.cpp
// compile by using: cl /EHsc /nologo /W4
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Basic 10-element integer array.
    int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Range-based for loop to iterate through the array.
    for( int y : x ) { // Access by value using a copy declared as a specific type.
                       // Not preferred.
        cout << y << " ";
    }
    cout << endl;

    // The auto keyword causes type inference to be used. Preferred.

    for( auto y : x ) { // Copy of 'x', almost always undesirable
        cout << y << " ";
    }
    cout << endl;

    for( auto &y : x ) { // Type inference by reference.
        // Observes and/or modifies in-place. Preferred when modify is needed.
        cout << y << " ";
    }
    cout << endl;

    for( const auto &y : x ) { // Type inference by const reference.
        // Observes in-place. Preferred when no modify is needed.
        cout << y << " ";
    }
    cout << endl;
    cout << "end of integer array test" << endl;
    cout << endl;

    // Create a vector object that contains 10 elements.
    vector<double> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i + 0.14159);
    }

    // Range-based for loop to iterate through the vector, observing in-place.
    for( const auto &j : v ) {
        cout << j << " ";
    }
    cout << endl;
    cout << "end of vector test" << endl;
}
```

Here is the output:

```Output
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
end of integer array test

0.14159 1.14159 2.14159 3.14159 4.14159 5.14159 6.14159 7.14159 8.14159 9.14159
end of vector test
```

A range-based **`for`** loop terminates when one of these in `statement` is executed: a [`break`](../cpp/break-statement-cpp.md), [`return`](../cpp/return-statement-cpp.md), or [`goto`](../cpp/goto-statement-cpp.md) to a labeled statement outside the range-based **`for`** loop. A [`continue`](../cpp/continue-statement-cpp.md) statement in a range-based **`for`** loop terminates only the current iteration.

Keep in mind these facts about range-based **`for`**:

- Automatically recognizes arrays.

- Recognizes containers that have `.begin()` and `.end()`.

- Uses argument-dependent lookup `begin()` and `end()` for anything else.

## See also

[`auto`](../cpp/auto-cpp.md)<br/>
[Iteration Statements](../cpp/iteration-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[`while` Statement (C++)](../cpp/while-statement-cpp.md)<br/>
[`do-while` Statement (C++)](../cpp/do-while-statement-cpp.md)<br/>
[`for` Statement (C++)](../cpp/for-statement-cpp.md)
