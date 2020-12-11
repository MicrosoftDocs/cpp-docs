---
description: "Learn more about: Translation units and linkage"
title: "Translation units and linkage (C++)"
ms.date: "12/11/2019"
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
---
# Translation units and linkage

In a C++ program, a *symbol*, for example a variable or function name, can be declared any number of times within its scope, but it can only be defined once. This rule is the "One Definition Rule" (ODR). A *declaration* introduces (or re-introduces) a name into the program. A *definition* introduces a name. If the name represents a variable, a definition explicitly initializes it. A *function definition* consists of the signature plus the function body. A class definition consists of the class name followed by a block that lists all the class members. (The bodies of member functions may optionally be defined separately in another file.)

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

A program consists of one or more *translation units*. A translation unit consists of an implementation file and all the headers that it includes directly or indirectly. Implementation files typically have a file extension of *cpp* or *cxx*. Header files typically have an extension of *h* or *hpp*. Each translation unit is compiled independently by the compiler. After the compilation is complete, the linker merges the compiled translation units into a single *program*. Violations of the ODR rule typically show up as linker errors. Linker errors occur when the same name has two different definitions in different translation units.

In general, the best way to make a variable visible across multiple files is to put it in a header file. Then add an #include directive in every *cpp* file that requires the declaration. By adding *include guards* around the header contents, you ensure that the names it declares are only defined once.

In C++20, [modules](modules-cpp.md) are introduced as an improved alternative to header files.

In some cases it may be necessary to declare a global variable or class in a *cpp* file. In those cases, you need a way to tell the compiler and linker what kind of *linkage* the name has. The type of linkage specifies whether the name of the object applies just to the one file, or to all files. The concept of linkage applies only to global names. The concept of linkage does not apply to names that are declared within a scope. A scope is specified by a set of enclosing braces such as in function or class definitions.

## External vs. internal linkage

A *free function* is a function that is defined at global or namespace scope. Non-const global variables and free functions by default have *external linkage*; they are visible from any translation unit in the program. Therefore, no other global object can have that name. A symbol with *internal linkage* or *no linkage* is visible only within the translation unit in which it is declared. When a name has internal linkage, the same name may exist in another translation unit. Variables declared within class definitions or function bodies have no linkage.

You can force a global name to have internal linkage by explicitly declaring it as **`static`**. This limits its visibility to the same translation unit in which it is declared. In this context, **`static`** means something different than when applied to local variables.

The following objects have internal linkage by default:

- const objects
- constexpr objects
- typedefs
- static objects in namespace scope

To give a const object external linkage, declare it as **`extern`** and assign it a value:

```cpp
extern const int value = 42;
```

See [extern](extern-cpp.md) for more information.

## See also

[Basic Concepts](../cpp/basic-concepts-cpp.md)
