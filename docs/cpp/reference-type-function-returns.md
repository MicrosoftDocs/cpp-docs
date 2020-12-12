---
description: "Learn more about: Reference-Type Function Returns"
title: "Reference-Type Function Returns"
ms.date: "11/04/2016"
helpviewer_keywords: ["function return types [C++], reference type", "data types [C++], function return types", "functions [C++], return types"]
ms.assetid: 5b73be1d-2dc7-41df-ab0a-adcba36f2ad1
---
# Reference-Type Function Returns

Functions can be declared to return a reference type. There are two reasons to make such a declaration:

- The information being returned is a large enough object that returning a reference is more efficient than returning a copy.

- The type of the function must be an l-value.

- The referred-to object will not go out of scope when the function returns.

Just as it can be more efficient to pass large objects *to* functions by reference, it also can be more efficient to return large objects *from* functions by reference. Reference-return protocol eliminates the necessity of copying the object to a temporary location prior to returning.

Reference-return types can also be useful when the function must evaluate to an l-value. Most overloaded operators fall into this category, particularly the assignment operator. Overloaded operators are covered in [Overloaded Operators](../cpp/operator-overloading.md).

## Example

Consider the `Point` example:

```cpp
// refType_function_returns.cpp
// compile with: /EHsc

#include <iostream>
using namespace std;

class Point
{
public:
// Define "accessor" functions as
//  reference types.
unsigned& x();
unsigned& y();
private:
// Note that these are declared at class scope:
unsigned obj_x;
unsigned obj_y;
};

unsigned& Point :: x()
{
return obj_x;
}
unsigned& Point :: y()
{
return obj_y;
}

int main()
{
Point ThePoint;
// Use x() and y() as l-values.
ThePoint.x() = 7;
ThePoint.y() = 9;

// Use x() and y() as r-values.
cout << "x = " << ThePoint.x() << "\n"
<< "y = " << ThePoint.y() << "\n";
}
```

## Output

```Output
x = 7
y = 9
```

Notice that the functions `x` and `y` are declared as returning reference types. These functions can be used on either side of an assignment statement.

Note also that in main, ThePoint object remains in scope, and therefore its reference members are still alive and can be safely accessed.

Declarations of reference types must contain initializers except in the following cases:

- Explicit **`extern`** declaration

- Declaration of a class member

- Declaration within a class

- Declaration of an argument to a function or the return type for a function

## Caution returning address of local

If you declare an object at local scope, that object will be destroyed when the function returns. If the function returns a reference to that object, that reference will probably cause an access violation at runtime if the caller attempts to use the null reference.

```cpp
// C4172 means Don’t do this!!!
Foo& GetFoo()
{
    Foo f;
    ...
    return f;
} // f is destroyed here
```

The compiler issues a warning in this case: `warning C4172: returning address of local variable or temporary`. In simple programs it is possible that occasionally no access violation will occur if the reference is accessed by the caller before the memory location is overwritten. This is due to sheer luck. Heed the warning.

## See also

[References](../cpp/references-cpp.md)
