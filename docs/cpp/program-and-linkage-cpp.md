---
title: "Programs and Linkage  (C++)"
ms.date: "04/09/2018"
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
---
# Program and Linkage (C++)

In a C++ program, a *symbol*, for example a variable or function name, can be declared any number of times within its scope, but it can only be defined once. This is the One Definition Rule (ODR). A *declaration* introduces (or re-introduces) a name into the program. A *definition* introduces a name and, in the case of a variable, explicitly initializes it. A *function definition* consists of the signature plus the function body.

These are declarations:

```cpp
int i;
int f(int x);
```

These are definitions:

```cpp
int i{42};
int f(int x){ return x * i; }
```

A program consists of one or more *translation units*. A translation unit consists of an implementation file (.cpp, .cxx, etc.) and all the headers (.h, .hpp, etc.) that it includes directly or indirectly. Each translation unit is compiled independently by the compiler, after which the linker merges the compiled translation units into a single *program*. Violations of the ODR rule typically show up as linker errors when the same name has two different definitions in different translation units.

In general, the best way to make a variable visible across multiple files is to put it in a header file and add an #include directive in every .cpp file that requires the declaration. By adding *include guards* around the header contents, you ensure that the names it declares are only defined once.

However, in some cases it may be necessary to declare a global variable or class in a .cpp file. In those cases, you need a way to tell the compiler and linker whether the name of the object applies just to the one file, or to all files.

## Linkage vs. scope

The concept of *linkage* refers to the visibility of global symbols (such as variables, type names and function names) within the program as a whole across translation units. The concept of *scope* refers to symbols that are declared within a block such as a namespace, class, or function body. Such symbols are visible only within the scope in which they are defined; the concept of linkage does not apply to them.

## External vs. internal linkage

A *free function* is a function that is defined at global or namespace scope. Non-const global variables and free functions by default have *external linkage*; they are visible from any translation unit in the program. Therefore, no other global object (variable, class definition, etc.) can have that name. A symbol with *internal linkage* or *no linkage* is visible only within the translation unit in which it is declared. When a name has internal linkage, the same name may exist in another translation unit. Variables declared with class definitions or function bodies have no linkage.

You can force a global name to have internal linkage by explicitly declaring it as **static**. This limits its visiblity to the same translation unit in which it is declared. Note that in this context, **static** means something different than when applied to local variables.

The following objects have internal linkage by default:
- const objects
- constexpr objects
- typedefs
- static objects in namespace scope

To give a const object external linkage, declare it as **extern** and assign it a value:

```cpp
extern const int value = 42;
```

See [extern](extern-cpp.md) for more information.

## See also

[Basic Concepts](../cpp/basic-concepts-cpp.md)