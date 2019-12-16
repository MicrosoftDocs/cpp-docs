---
title: "extern (C++)"
ms.date: "04/12/2018"
f1_keywords: ["extern", "extern_CPP"]
helpviewer_keywords: ["extern keyword [C++], linkage to non-C++ functions", "declarations, external", "external linkage, extern modifier"]
ms.assetid: 1e2f0ae3-ae98-4410-85b5-222d6abc865a
---
# extern (C++)

The **extern** keyword is applied to a global variable, function or template declaration to specify that the name of that thing has *external linkage*. For background information on linkage and why the use of global variables is discouraged, see [Translation units and linkage](program-and-linkage-cpp.md).

The **extern** keyword has four meanings depending on the context:

1. in a non-const global variable declaration, **extern** specifies that the variable or function is defined in another translation unit. The **extern** must be applied in all files except the one where the variable is defined.
1. in a const variable declaration, it specifies that the variable has external linkage. The **extern** must be applied to all declarations in all files. (Global const variables have internal linkage by default.)
1. **extern "C"** specifies that the function is defined elsewhere and uses the C-language calling convention. The extern "C" modifier may also be applied to multiple function declarations in a block.
1. in a template declaration, it specifies that the template has already been instantiated elsewhere. This is an optimization that tells the compiler that it can re-use the other instantiation rather than creating a new one at the current location. For more information about this use of **extern**, see [Templates](templates-cpp.md).

## extern linkage for non-const globals

When the linker sees **extern** before a global variable declaration, it looks for the definition in another translation unit. Declarations of non-const variables at global scope are external by default; only apply **extern** to the declarations that don't provide the definition.

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

## extern linkage for const globals

A **const** global variable has internal linkage by default. If you want the variable to have external linkage, apply the **extern** keyword to definition as well as to all other declarations in other files:

```cpp
//fileA.cpp
extern const int i = 42; // extern const definition

//fileB.cpp
extern const int i;  // declaration only. same as i in FileA
```

## extern constexpr linkage

In Visual Studio 2017 version 15.3 and earlier, the compiler always gave a constexpr variable internal linkage even when the variable was marked extern. In Visual Studio 2017 version 15.5, a new compiler switch ([/Zc:externConstexpr](../build/reference/zc-externconstexpr.md)) enables correct standards-conforming behavior. Eventually this will become the default. The /permissive- option does not enable /Zc:externConstexpr.

```cpp
extern constexpr int x = 10; //error LNK2005: "int const x" already defined
```

If a header file contains a variable declared extern constexpr, it needs to be marked **__declspec(selectany)** in order to correctly have its duplicate declarations combined:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

## extern "C" and extern "C++" function declarations

In C++, when used with a string, **extern** specifies that the linkage conventions of another language are being used for the declarator(s). C functions and data can be accessed only if they are previously declared as having C linkage. However, they must be defined in a separately compiled translation unit.

Microsoft C++ supports the strings **"C"** and **"C++"** in the *string-literal* field. All of the standard include files use the **extern** "C" syntax to allow the run-time library functions to be used in C++ programs.

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

If a function has more than one linkage specification, they must agree; it is an error to declare functions as having both C and C++ linkage. Furthermore, if two declarations for a function occur in a program — one with a linkage specification and one without — the declaration with the linkage specification must be first. Any redundant declarations of functions that already have linkage specification are given the linkage specified in the first declaration. For example:

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

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Translation units and linkage](program-and-linkage-cpp.md)<br/>
[extern Storage-Class Specifier in C](../c-language/extern-storage-class-specifier.md)<br/>
[Behavior of Identifiers in C](../c-language/behavior-of-identifiers.md)<br/>
[Linkage in C](../c-language/linkage.md)