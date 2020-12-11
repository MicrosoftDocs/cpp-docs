---
description: "Learn more about: const (C++)"
title: "const (C++)"
ms.date: "11/04/2016"
f1_keywords: ["const_cpp"]
helpviewer_keywords: ["const keyword [C++]"]
ms.assetid: b21c0271-1ad0-40a0-b21c-5e812bba0318
---
# const (C++)

When modifying a data declaration, the **`const`** keyword specifies that the object or variable is not modifiable.

## Syntax

```
const declaration ;
member-function const ;
```

## const values

The **`const`** keyword specifies that a variable's value is constant and tells the compiler to prevent the programmer from modifying it.

```cpp
// constant_values1.cpp
int main() {
   const int i = 5;
   i = 10;   // C3892
   i++;   // C2105
}
```

In C++, you can use the **`const`** keyword instead of the [#define](../preprocessor/hash-define-directive-c-cpp.md) preprocessor directive to define constant values. Values defined with **`const`** are subject to type checking, and can be used in place of constant expressions. In C++, you can specify the size of an array with a **`const`** variable as follows:

```cpp
// constant_values2.cpp
// compile with: /c
const int maxarray = 255;
char store_char[maxarray];  // allowed in C++; not allowed in C
```

In C, constant values default to external linkage, so they can appear only in source files. In C++, constant values default to internal linkage, which allows them to appear in header files.

The **`const`** keyword can also be used in pointer declarations.

```cpp
// constant_values3.cpp
int main() {
   char *mybuf = 0, *yourbuf;
   char *const aptr = mybuf;
   *aptr = 'a';   // OK
   aptr = yourbuf;   // C3892
}
```

A pointer to a variable declared as **`const`** can be assigned only to a pointer that is also declared as **`const`**.

```cpp
// constant_values4.cpp
#include <stdio.h>
int main() {
   const char *mybuf = "test";
   char *yourbuf = "test2";
   printf_s("%s\n", mybuf);

   const char *bptr = mybuf;   // Pointer to constant data
   printf_s("%s\n", bptr);

   // *bptr = 'a';   // Error
}
```

You can use pointers to constant data as function parameters to prevent the function from modifying a parameter passed through a pointer.

For objects that are declared as **`const`**, you can only call constant member functions. This ensures that the constant object is never modified.

```cpp
birthday.getMonth();    // Okay
birthday.setMonth( 4 ); // Error
```

You can call either constant or nonconstant member functions for a nonconstant object. You can also overload a member function using the **`const`** keyword; this allows a different version of the function to be called for constant and nonconstant objects.

You cannot declare constructors or destructors with the **`const`** keyword.

## const member functions

Declaring a member function with the **`const`** keyword specifies that the function is a "read-only" function that does not modify the object for which it is called. A constant member function cannot modify any non-static data members or call any member functions that aren't constant.To declare a constant member function, place the **`const`** keyword after the closing parenthesis of the argument list. The **`const`** keyword is required in both the declaration and the definition.

```cpp
// constant_member_function.cpp
class Date
{
public:
   Date( int mn, int dy, int yr );
   int getMonth() const;     // A read-only function
   void setMonth( int mn );   // A write function; can't be const
private:
   int month;
};

int Date::getMonth() const
{
   return month;        // Doesn't modify anything
}
void Date::setMonth( int mn )
{
   month = mn;          // Modifies data member
}
int main()
{
   Date MyDate( 7, 4, 1998 );
   const Date BirthDate( 1, 18, 1953 );
   MyDate.setMonth( 4 );    // Okay
   BirthDate.getMonth();    // Okay
   BirthDate.setMonth( 4 ); // C2662 Error
}
```

## C and C++ const differences

When you declare a variable as **`const`** in a C source code file, you do so as:

```cpp
const int i = 2;
```

You can then use this variable in another module as follows:

```cpp
extern const int i;
```

But to get the same behavior in C++, you must declare your **`const`** variable as:

```cpp
extern const int i = 2;
```

If you wish to declare an **`extern`** variable in a C++ source code file for use in a C source code file, use:

```cpp
extern "C" const int x=10;
```

to prevent name mangling by the C++ compiler.

## Remarks

When following a member function's parameter list, the **`const`** keyword specifies that the function does not modify the object for which it is invoked.

For more information on **`const`**, see the following topics:

- [const and volatile Pointers](../cpp/const-and-volatile-pointers.md)

- [Type Qualifiers (C Language Reference)](../c-language/type-qualifiers.md)

- [volatile](../cpp/volatile-cpp.md)

- [#define](../preprocessor/hash-define-directive-c-cpp.md)

## See also

[Keywords](../cpp/keywords-cpp.md)
