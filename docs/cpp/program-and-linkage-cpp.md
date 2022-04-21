---
description: "Learn more about: Translation units and linkage"
title: "Translation units and linkage (C++)"
ms.date: 08/12/2021
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
---
# Translation units and linkage

In a C++ program, a *symbol*, for example a variable or function name, can be declared any number of times within its scope. However, it can only be defined once. This rule is the "One Definition Rule" (ODR). A *declaration* introduces (or reintroduces) a name into the program, along with enough information to later associate the name with a definition. A *definition* introduces a name and provides all the information needed to create it. If the name represents a variable, a definition explicitly creates storage and initializes it. A *function definition* consists of the signature plus the function body. A class definition consists of the class name followed by a block that lists all the class members. (The bodies of member functions may optionally be defined separately in another file.)

The following example shows some declarations:

```cpp
int i;
int f(int x);
class C;
```

The following example shows some definitions:

```cpp
int i{42};
int f(int x){ return x * i; }
class C {
public:
   void DoSomething();
};
```

A program consists of one or more *translation units*. A translation unit consists of an implementation file and all the headers that it includes directly or indirectly. Implementation files typically have a file extension of *`.cpp`* or *`.cxx`*. Header files typically have an extension of *`.h`* or *`.hpp`*. Each translation unit is compiled independently by the compiler. After the compilation is complete, the linker merges the compiled translation units into a single *program*. Violations of the ODR rule typically show up as linker errors. Linker errors occur when the same name is defined in more than one translation unit.

In general, the best way to make a variable visible across multiple files is to declare it in a header file. Then add an `#include` directive in every *`.cpp`* file that requires the declaration. By adding *include guards* around the header contents, you ensure that the names a header declares are only declared once for each translation unit. Define the name in only one implementation file.

In C++20, [modules](modules-cpp.md) are introduced as an improved alternative to header files.

In some cases, it may be necessary to declare a global variable or class in a *`.cpp`* file. In those cases, you need a way to tell the compiler and linker what kind of *linkage* the name has. The type of linkage specifies whether the name of the object is visible only in one file, or in all files. The concept of linkage applies only to global names. The concept of linkage doesn't apply to names that are declared within a scope. A scope is specified by a set of enclosing braces such as in function or class definitions.

## External vs. internal linkage

A *free function* is a function that is defined at global or namespace scope. Non-const global variables and free functions by default have *external linkage*; they're visible from any translation unit in the program. No other global object can have that name. A symbol with *internal linkage* or *no linkage* is visible only within the translation unit in which it's declared. When a name has internal linkage, the same name may exist in another translation unit. Variables declared within class definitions or function bodies have no linkage.

You can force a global name to have internal linkage by explicitly declaring it as **`static`**. This keyword limits its visibility to the same translation unit in which it's declared. In this context, **`static`** means something different than when applied to local variables.

The following objects have internal linkage by default:

- **`const`** objects
- **`constexpr`** objects
- **`typedef`** objects
- **`static`** objects in namespace scope

To give a **`const`** object external linkage, declare it as **`extern`** and assign it a value:

```cpp
extern const int value = 42;
```

For more information, see [`extern`](extern-cpp.md).

## See also

[Basic concepts](../cpp/basic-concepts-cpp.md)
