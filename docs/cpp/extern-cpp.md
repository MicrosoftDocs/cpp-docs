---
title: "extern (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "04/06/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["extern"]
dev_langs: ["C++"]
helpviewer_keywords: ["extern keyword [C++], linkage to non-C++ functions", "declarations, external", "external linkage, extern modifier"]
ms.assetid: 1e2f0ae3-ae98-4410-85b5-222d6abc865a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# extern (C++)
## Syntax

```
extern string-literal { declaration-list }
extern string-literal declaration
```

## Remarks

The **extern** keyword declares a variable or function and specifies that it is defined (or assigned a value) in another translation unit. The compiler treats the extern variable and the variable defined elsewhere as the same name. Such a variable has external linkage (its name is visible from files other than the one in which it's defined). Declarations of non-const variables and functions at global scope are external by default. See [Program and linkage](program-and-linkage-cpp.md) for more information.

The **extern** keyword is ignored if the declaration is also a definition. In the following, when the compiler sees the `int foo = 9;` if fileA.cpp, it treats it as a separate name from `foo` in FileB.cpp, and a linker error will be raised because a name can only appear once in a given scope. To fix the error, change `extern int foo = 9;` to `extern int foo;` so that the linker treats this `foo` variable as the same name as the one in fileB.cpp:

```cpp
//fileA.cpp
extern int foo = 9; // Error. extern is ignored.

//fileB.cpp
int foo = 0;
```

## Example

```cpp
// specifying_linkage1.cpp
int i = 1;
void other();

int main() {
   // Reference to i, defined above:
   extern int i;
}

void other() {
   // Address of global i assigned to pointer variable:
   static int *external_i = &i;

   // i will be redefined; global i no longer visible:
   // int i = 16;
}
```

 In C++, when used with a string, **extern** specifies that the linkage conventions of another language are being used for the declarator(s). C functions and data can be accessed only if they are previously declared as having C linkage. However, they must be defined in a separately compiled translation unit.

 Microsoft C++ supports the strings **"C"** and **"C++"** in the *string-literal* field. All of the standard include files use the **extern** "C" syntax to allow the run-time library functions to be used in C++ programs.

## Example

The following example shows alternative ways to declare names that have C linkage:

```cpp
// specifying_linkage2.cpp
// compile with: /c
// Declare printf with C linkage.
extern "C" int printf( const char *fmt, ... );

//  Cause everything in the specified header files
//   to have C linkage.
extern "C" {
   // add your #include statements here
   #include <stdio.h>
}

//  Declare the two functions ShowChar and GetChar
//   with C linkage.
extern "C" {
   char ShowChar( char ch );
   char GetChar( void );
}

//  Define the two functions ShowChar and GetChar
//   with C linkage.
extern "C" char ShowChar( char ch ) {
   putchar( ch );
   return ch;
}

extern "C" char GetChar( void ) {
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

## See Also

 [Keywords](../cpp/keywords-cpp.md) 
 [extern Storage-Class Specifier in C](../c-language/extern-storage-class-specifier.md) 
 [Behavior of Identifiers in C](../c-language/behavior-of-identifiers.md) 
 [Linkage in C](../c-language/linkage.md)