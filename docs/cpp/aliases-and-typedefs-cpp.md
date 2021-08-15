---
description: "Learn more about: Aliases and typedefs (C++)"
title: "Aliases and typedefs (C++)"
ms.date: "11/04/2016"
f1_keywords: ["typedef_cpp"]
ms.assetid: af1c24d2-4bfd-408a-acfc-482e264232f5
---
# Aliases and typedefs (C++)

You can use an *alias declaration* to declare a name to use as a synonym for a previously declared type. (This mechanism is also referred to informally as a *type alias*). You can also use this mechanism to create an *alias template*, which can be particularly useful for custom allocators.

## Syntax

```
using identifier = type;
```

## Remarks

*identifier*<br/>
The name of the alias.

*type*<br/>
The type identifier you are creating an alias for.

An alias does not introduce a new type and cannot change the meaning of an existing type name.

The simplest form of an alias is equivalent to the **`typedef`** mechanism from C++03:

```cpp
// C++11
using counter = long;

// C++03 equivalent:
// typedef long counter;
```

Both of these enable the creation of variables of type "counter". Something more useful would be a type alias like this one for `std::ios_base::fmtflags`:

```cpp
// C++11
using fmtfl = std::ios_base::fmtflags;

// C++03 equivalent:
// typedef std::ios_base::fmtflags fmtfl;

fmtfl fl_orig = std::cout.flags();
fmtfl fl_hex = (fl_orig & ~std::cout.basefield) | std::cout.showbase | std::cout.hex;
// ...
std::cout.flags(fl_hex);
```

Aliases also work with function pointers, but are much more readable than the equivalent typedef:

```cpp
// C++11
using func = void(*)(int);

// C++03 equivalent:
// typedef void (*func)(int);

// func can be assigned to a function pointer value
void actual_function(int arg) { /* some code */ }
func fptr = &actual_function;
```

A limitation of the **`typedef`** mechanism is that it doesn't work with templates. However, the type alias syntax in C++11 enables the creation of alias templates:

```cpp
template<typename T> using ptr = T*;

// the name 'ptr<T>' is now an alias for pointer to T
ptr<int> ptr_int;
```

## Example

The following example demonstrates how to use an alias template with a custom allocator—in this case, an integer vector type. You can substitute any type for **`int`** to create a convenient alias to hide the complex parameter lists in your main functional code. By using the custom allocator throughout your code you can improve readability and reduce the risk of introducing bugs caused by typos.

```cpp
#include <stdlib.h>
#include <new>

template <typename T> struct MyAlloc {
    typedef T value_type;

    MyAlloc() { }
    template <typename U> MyAlloc(const MyAlloc<U>&) { }

    bool operator==(const MyAlloc&) const { return true; }
    bool operator!=(const MyAlloc&) const { return false; }

    T * allocate(const size_t n) const {
        if (n == 0) {
            return nullptr;
        }

        if (n > static_cast<size_t>(-1) / sizeof(T)) {
            throw std::bad_array_new_length();
        }

        void * const pv = malloc(n * sizeof(T));

        if (!pv) {
            throw std::bad_alloc();
        }

        return static_cast<T *>(pv);
    }

    void deallocate(T * const p, size_t) const {
        free(p);
    }
};

#include <vector>
using MyIntVector = std::vector<int, MyAlloc<int>>;

#include <iostream>

int main ()
{
    MyIntVector foov = { 1701, 1764, 1664 };

    for (auto a: foov) std::cout << a << " ";
    std::cout << "\n";

    return 0;
}
```

```Output
1701 1764 1664
```

## Typedefs

A **`typedef`** declaration introduces a name that, within its scope, becomes a synonym for the type given by the *type-declaration* portion of the declaration.

You can use typedef declarations to construct shorter or more meaningful names for types already defined by the language or for types that you have declared. Typedef names allow you to encapsulate implementation details that may change.

In contrast to the **`class`**, **`struct`**, **`union`**, and **`enum`** declarations, **`typedef`** declarations do not introduce new types — they introduce new names for existing types.

Names declared using **`typedef`** occupy the same namespace as other identifiers (except statement labels). Therefore, they cannot use the same identifier as a previously declared name, except in a class-type declaration. Consider the following example:

```cpp
// typedef_names1.cpp
// C2377 expected
typedef unsigned long UL;   // Declare a typedef name, UL.
int UL;                     // C2377: redefined.
```

The name-hiding rules that pertain to other identifiers also govern the visibility of names declared using **`typedef`**. Therefore, the following example is legal in C++:

```cpp
// typedef_names2.cpp
typedef unsigned long UL;   // Declare a typedef name, UL
int main()
{
   unsigned int UL;   // Redeclaration hides typedef name
}

// typedef UL back in scope
```

```cpp
// typedef_specifier1.cpp
typedef char FlagType;

int main()
{
}

void myproc( int )
{
    int FlagType;
}
```

When declaring a local-scope identifier by the same name as a typedef, or when declaring a member of a structure or union in the same scope or in an inner scope, the type specifier must be specified. For example:

```cpp
typedef char FlagType;
const FlagType x;
```

To reuse the `FlagType` name for an identifier, a structure member, or a union member, the type must be provided:

```cpp
const int FlagType;  // Type specifier required
```

It is not sufficient to say

```cpp
const FlagType;      // Incomplete specification
```

because the `FlagType` is taken to be part of the type, not an identifier that is being redeclared. This declaration is taken to be an illegal declaration like

```cpp
int;  // Illegal declaration
```

You can declare any type with typedef, including pointer, function, and array types. You can declare a typedef name for a pointer to a structure or union type before you define the structure or union type, as long as the definition has the same visibility as the declaration.

### Examples

One use of **`typedef`** declarations is to make declarations more uniform and compact. For example:

```cpp
typedef char CHAR;          // Character type.
typedef CHAR * PSTR;        // Pointer to a string (char *).
PSTR strchr( PSTR source, CHAR target );
typedef unsigned long ulong;
ulong ul;     // Equivalent to "unsigned long ul;"
```

To use **`typedef`** to specify fundamental and derived types in the same declaration, you can separate declarators with commas. For example:

```cpp
typedef char CHAR, *PSTR;
```

The following example provides the type `DRAWF` for a function returning no value and taking two int arguments:

```cpp
typedef void DRAWF( int, int );
```

After the above **`typedef`** statement, the declaration

```cpp
DRAWF box;
```

would be equivalent to the declaration

```cpp
void box( int, int );
```

**`typedef`** is often combined with **`struct`** to declare and name user-defined types:

```cpp
// typedef_specifier2.cpp
#include <stdio.h>

typedef struct mystructtag
{
    int   i;
    double f;
} mystruct;

int main()
{
    mystruct ms;
    ms.i = 10;
    ms.f = 0.99;
    printf_s("%d   %f\n", ms.i, ms.f);
}
```

```Output
10   0.990000
```

### Re-declaration of typedefs

The **`typedef`** declaration can be used to redeclare the same name to refer to the same type. For example:

```cpp
// FILE1.H
typedef char CHAR;

// FILE2.H
typedef char CHAR;

// PROG.CPP
#include "file1.h"
#include "file2.h"   // OK
```

The program *PROG.CPP* includes two header files, both of which contain **`typedef`** declarations for the name `CHAR`. As long as both declarations refer to the same type, such redeclaration is acceptable.

A **`typedef`** cannot redefine a name that was previously declared as a different type. Therefore, if *FILE2.H* contains

```cpp
// FILE2.H
typedef int CHAR;     // Error
```

the compiler issues an error because of the attempt to redeclare the name `CHAR` to refer to a different type. This extends to constructs such as:

```cpp
typedef char CHAR;
typedef CHAR CHAR;      // OK: redeclared as same type

typedef union REGS      // OK: name REGS redeclared
{                       //  by typedef name with the
    struct wordregs x;  //  same meaning.
    struct byteregs h;
} REGS;
```

### typedefs in C++ vs. C

Use of the **`typedef`** specifier with class types is supported largely because of the ANSI C practice of declaring unnamed structures in **`typedef`** declarations. For example, many C programmers use the following:

```cpp
// typedef_with_class_types1.cpp
// compile with: /c
typedef struct {   // Declare an unnamed structure and give it the
                   // typedef name POINT.
   unsigned x;
   unsigned y;
} POINT;
```

The advantage of such a declaration is that it enables declarations like:

```cpp
POINT ptOrigin;
```

instead of:

```cpp
struct point_t ptOrigin;
```

In C++, the difference between **`typedef`** names and real types (declared with the **`class`**, **`struct`**, **`union`**, and **`enum`** keywords) is more distinct. Although the C practice of declaring a nameless structure in a **`typedef`** statement still works, it provides no notational benefits as it does in C.

```cpp
// typedef_with_class_types2.cpp
// compile with: /c /W1
typedef struct {
   int POINT();
   unsigned x;
   unsigned y;
} POINT;
```

The preceding example declares a class named `POINT` using the unnamed class **`typedef`** syntax. `POINT` is treated as a class name; however, the following restrictions apply to names introduced this way:

- The name (the synonym) cannot appear after a **`class`**, **`struct`**, or **`union`** prefix.

- The name cannot be used as constructor or destructor names within a class declaration.

In summary, this syntax does not provide any mechanism for inheritance, construction, or destruction.
