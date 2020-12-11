---
description: "Learn more about: Debug Iterator Support"
title: "Debug Iterator Support"
ms.date: "09/13/2018"
helpviewer_keywords: ["Safe Libraries", "Safe Libraries, C++ Standard Library", "Safe C++ Standard Library", "C++ Standard Library, debug iterator support", "iterators, debug iterator support", "iterators, incompatible", "incompatible iterators", "debug iterator support"]
ms.assetid: f3f5bd15-4be8-4d64-a4d0-8bc0761c68b6
---
# Debug Iterator Support

The Visual C++ run-time library detects incorrect iterator use, and asserts and displays a dialog box at run time. To enable debug iterator support, you must use debug versions of the C++ Standard Library and C Runtime Library to compile your program. For more information, see [CRT Library Features](../c-runtime-library/crt-library-features.md). For information about how to use checked iterators, see [Checked Iterators](../standard-library/checked-iterators.md).

The C++ standard describes how member functions might cause iterators to a container to become invalid. Two examples are:

- Erasing an element from a container causes iterators to the element to become invalid.

- Increasing the size of a [vector](../standard-library/vector.md) by using push or insert causes iterators into the `vector` to become invalid.

## Invalid iterators

If you compile this sample program in debug mode, at run time it asserts and terminates.

```cpp
// iterator_debugging_0.cpp
// compile by using /EHsc /MDd
#include <vector>
#include <iostream>

int main() {
   std::vector<int> v {10, 15, 20};
   std::vector<int>::iterator i = v.begin();
   ++i;

   std::vector<int>::iterator j = v.end();
   --j;

   std::cout << *j << '\n';

   v.insert(i,25);

   std::cout << *j << '\n'; // Using an old iterator after an insert
}
```

## Using _ITERATOR_DEBUG_LEVEL

You can use the preprocessor macro [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) to turn off the iterator debugging feature in a debug build. This program does not assert, but still triggers undefined behavior.

```cpp
// iterator_debugging_1.cpp
// compile by using: /EHsc /MDd
#define _ITERATOR_DEBUG_LEVEL 0
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v {10, 15, 20};

   std::vector<int>::iterator i = v.begin();
   ++i;

   std::vector<int>::iterator j = v.end();
   --j;

   std::cout << *j << '\n';

   v.insert(i,25);

   std::cout << *j << '\n'; // Using an old iterator after an insert
}
```

```Output
20
-572662307
```

## Unitialized iterators

An assert also occurs if you attempt to use an iterator before it is initialized, as shown here:

```cpp
// iterator_debugging_2.cpp
// compile by using: /EHsc /MDd
#include <string>
using namespace std;

int main() {
   string::iterator i1, i2;
   if (i1 == i2)
      ;
}
```

## Incompatible iterators

The following code example causes an assertion because the two iterators to the [for_each](../standard-library/algorithm-functions.md#for_each) algorithm are incompatible. Algorithms check to determine whether the iterators that are supplied to them reference the same container.

```cpp
// iterator_debugging_3.cpp
// compile by using /EHsc /MDd
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 {10, 20};
    vector<int> v2 {10, 20};

    // The next line asserts because v1 and v2 are
    // incompatible.
    for_each(v1.begin(), v2.end(), [] (int& elem) { elem *= 2; } );
}
```

Notice that this example uses the lambda expression `[] (int& elem) { elem *= 2; }` instead of a functor. Although this choice has no bearing on the assert failure—a similar functor would cause the same failure—lambdas are a very useful way to accomplish compact function object tasks. For more information about lambda expressions, see [Lambda Expressions](../cpp/lambda-expressions-in-cpp.md).

## Iterators going out of scope

Debug iterator checks also cause an iterator variable that's declared in a **`for`** loop to be out of scope when the **`for`** loop scope ends.

```cpp
// iterator_debugging_4.cpp
// compile by using: /EHsc /MDd
#include <vector>
#include <iostream>
int main() {
   std::vector<int> v {10, 15, 20};

   for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
      ;   // do nothing
   --i;   // C2065
}
```

## Destructors for debug iterators

Debug iterators have non-trivial destructors. If a destructor does not run but the object's memory is freed, access violations and data corruption might occur. Consider this example:

```cpp
// iterator_debugging_5.cpp
// compile by using: /EHsc /MDd
#include <vector>
struct base {
   // TO FIX: uncomment the next line
   // virtual ~base() {}
};

struct derived : base {
   std::vector<int>::iterator m_iter;
   derived( std::vector<int>::iterator iter ) : m_iter( iter ) {}
   ~derived() {}
};

int main() {
   std::vector<int> vect( 10 );
   base * pb = new derived( vect.begin() );
   delete pb;  // doesn't call ~derived()
   // access violation
}
```

## See also

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)
