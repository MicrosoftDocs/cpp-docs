---
title: "extern (C++)"
description: "Guide to the C++ language extern keyword."
ms.date: 12/02/2021
f1_keywords: ["extern", "extern_CPP"]
helpviewer_keywords: ["extern keyword [C++], linkage to non-C++ functions", "declarations, external", "external linkage, extern modifier"]
ms.assetid: 1e2f0ae3-ae98-4410-85b5-222d6abc865a
no-loc: [extern, const, constexpr, permissive]
---
# `extern` (C++)

The **`extern`** keyword may be applied to a global variable, function, or template declaration. It specifies that the symbol has *external linkage*. For background information on linkage and why the use of global variables is discouraged, see [Translation units and linkage](program-and-linkage-cpp.md).

The **`extern`** keyword has four meanings depending on the context:

- In a non-**`const`** global variable declaration, **`extern`** specifies that the variable or function is defined in another translation unit. The **`extern`** must be applied in all files except the one where the variable is defined.

- In a **`const`** variable declaration, it specifies that the variable has external linkage. The **`extern`** must be applied to all declarations in all files. (Global **`const`** variables have internal linkage by default.)

- **`extern "C"`** specifies that the function is defined elsewhere and uses the C-language calling convention. The `extern "C"` modifier may also be applied to multiple function declarations in a block.

- In a template declaration, **`extern`** specifies that the template has already been instantiated elsewhere. **`extern`** tells the compiler it can reuse the other instantiation, rather than create a new one at the current location. For more information about this use of **`extern`**, see [Explicit instantiation](explicit-instantiation.md).

## `extern` linkage for non-`const` globals

When the linker sees **`extern`** before a global variable declaration, it looks for the definition in another translation unit. Declarations of non-**`const`** variables at global scope are external by default. Only apply **`extern`** to the declarations that don't provide the definition.

```cpp
//fileA.cpp
int i = 42; // declaration and definition

//fileB.cpp
extern int i;  // declaration only. same as i in FileA

//fileC.cpp
extern int i;  // declaration only. same as i in FileA

//fileD.cpp
int i = 43; // LNK2005! 'i' already has a definition.
extern int i = 43; // same error (extern is ignored on definitions)
```

## `extern` linkage for `const` globals

A **`const`** global variable has internal linkage by default. If you want the variable to have external linkage, apply the **`extern`** keyword to the definition, and to all other declarations in other files:

```cpp
//fileA.cpp
extern const int i = 42; // extern const definition

//fileB.cpp
extern const int i;  // declaration only. same as i in FileA
```

## `extern constexpr` linkage

In Visual Studio 2017 version 15.3 and earlier, the compiler always gave a **`constexpr`** variable internal linkage, even when the variable was marked **`extern`**. In Visual Studio 2017 version 15.5 and later, the [`/Zc:externConstexpr`](../build/reference/zc-externconstexpr.md) compiler switch enables correct standards-conforming behavior. Eventually the option will become the default. The [`/permissive-`](../build/reference/permissive-standards-conformance.md) option doesn't enable **`/Zc:externConstexpr`**.

```cpp
extern constexpr int x = 10; //error LNK2005: "int const x" already defined
```

If a header file contains a variable declared **`extern`** **`constexpr`**, it must be marked `__declspec(selectany)` to correctly have its duplicate declarations combined:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

## `extern "C"` and `extern "C++"` function declarations

In C++, when used with a string, **`extern`** specifies that the linkage conventions of another language are being used for the declarator(s). C functions and data can be accessed only if they're previously declared as having C linkage. However, they must be defined in a separately compiled translation unit.

Microsoft C++ supports the strings **`"C"`** and **`"C++"`** in the *string-literal* field. All of the standard include files use the **`extern "C"`** syntax to allow the run-time library functions to be used in C++ programs.

## Example

The following example shows how to declare names that have C linkage:

```cpp
// Declare printf with C linkage.
extern "C" int printf(const char *fmt, ...);

//  Cause everything in the specified
//  header files to have C linkage.
extern "C" {
    // add your #include statements here
#include <stdio.h>
}

//  Declare the two functions ShowChar
//  and GetChar with C linkage.
extern "C" {
    char ShowChar(char ch);
    char GetChar(void);
}

//  Define the two functions
//  ShowChar and GetChar with C linkage.
extern "C" char ShowChar(char ch) {
    putchar(ch);
    return ch;
}

extern "C" char GetChar(void) {
    char ch;
    ch = getchar();
    return ch;
}

// Declare a global variable, errno, with C linkage.
extern "C" int errno;
```

If a function has more than one linkage specification, they must agree. It's an error to declare functions as having both C and C++ linkage. Furthermore, if two declarations for a function occur in a program, one with a linkage specification and one without, the declaration with the linkage specification must be first. Any redundant declarations of functions that already have linkage specification are given the linkage specified in the first declaration. For example:

```cpp
extern "C" int CFunc1();
...
int CFunc1();            // Redeclaration is benign; C linkage is
                         //  retained.

int CFunc2();
...
extern "C" int CFunc2(); // Error: not the first declaration of
                         //  CFunc2;  cannot contain linkage
                         //  specifier.
```

Starting in Visual Studio 2019, when **`/permissive-`** is specified, the compiler checks that the declarations of `extern "C"` function parameters also match. You can't overload a function declared as `extern "C"`. Starting in Visual Studio 2019 version 16.3, you can override this check by using the [`/Zc:externC-`](../build/reference/zc-externc.md) compiler option after the **`/permissive-`** option.

## See also

[Keywords](../cpp/keywords-cpp.md)\
[Translation units and linkage](program-and-linkage-cpp.md)\
[extern Storage-Class Specifier in C](../c-language/extern-storage-class-specifier.md)\
[Behavior of Identifiers in C](../c-language/behavior-of-identifiers.md)\
[Linkage in C](../c-language/linkage.md)
