---
description: "Learn more about: Declarations and definitions (C++)"
title: "Declarations and definitions (C++)"
ms.date: 02/22/2022
---
# Declarations and definitions (C++)

A C++ program consists of various entities such as variables, functions, types, and namespaces. Each of these entities must be *declared* before they can be used. A declaration specifies a unique name for the entity, along with information about its type and other characteristics. In C++ the point at which a name is declared is the point at which it becomes visible to the compiler. You can't refer to a function or class that is declared at some later point in the compilation unit. Variables should be declared as close as possible before the point at which they're used.

The following example shows some declarations:

```cpp
#include <string>

int f(int i); // forward declaration

int main()
{
    const double pi = 3.14; //OK
    int i = f(2); //OK. f is forward-declared
    C obj; // error! C not yet declared.
    std::string str; // OK std::string is declared in <string> header
    j = 0; // error! No type specified.
    auto k = 0; // OK. type inferred as int by compiler.
}

int f(int i)
{
    return i + 42;
}

namespace N {
   class C{/*...*/};
}
```

On line 5, the `main` function is declared. On line 7, a **`const`** variable named `pi` is declared and *initialized*. On line 8, an integer `i` is declared and initialized with the value produced by the function `f`. The name `f` is visible to the compiler because of the *forward declaration* on line 3.

In line 9, a variable named `obj` of type `C` is declared. However, this declaration raises an error because `C` isn't declared until later in the program, and isn't forward-declared. To fix the error, you can either move the entire *definition* of `C` before `main` or else add a forward-declaration for it. This behavior is different from other languages such as C#. In those languages, functions and classes can be used before their point of declaration in a source file.

In line 10, a variable named `str` of type `std::string` is declared. The name `std::string` is visible because it's introduced in the `string` [header file](header-files-cpp.md), which is merged into the source file in line 1. `std` is the namespace in which the `string` class is declared.

In line 11, an error is raised because the name `j` hasn't been declared. A declaration must provide a type, unlike other languages such as JavaScript. In line 12, the **`auto`** keyword is used, which tells the compiler to infer the type of `k` based on the value that it's initialized with. The compiler in this case chooses **`int`** for the type.  

## Declaration scope

The name that is introduced by a declaration is valid within the *scope* where the declaration occurs. In the previous example, the variables that are declared inside the `main` function are *local variables*. You could declare another variable named `i` outside of main, at *global scope*, and it would be a separate entity. However, such duplication of names can lead to programmer confusion and errors, and should be avoided. In line 21, the class `C` is declared in the scope of the namespace `N`. The use of namespaces helps to avoid *name collisions*. Most C++ Standard Library names are declared within the `std` namespace. For more information about how scope rules interact with declarations, see [Scope](../cpp/scope-visual-cpp.md).

## Definitions

Some entities, including functions, classes, enums, and constant variables, must be defined as well as declared. A *definition* provides the compiler with all the information it needs to generate machine code when the entity is used later in the program. In the previous example, line 3 contains a declaration for the function `f` but the *definition* for the function is provided in lines 15 through 18. On line 21, the class `C` is both declared and defined (although as defined the class doesn't do anything). A constant variable must be defined, in other words assigned a value, in the same statement in which it's declared. A declaration of a built-in type such as **`int`** is automatically a definition because the compiler knows how much space to allocate for it.

The following example shows declarations that are also definitions:

```cpp
// Declare and define int variables i and j.
int i;
int j = 10;

// Declare enumeration suits.
enum suits { Spades = 1, Clubs, Hearts, Diamonds };

// Declare class CheckBox.
class CheckBox : public Control
{
public:
    Boolean IsChecked();
    virtual int     ChangeState() = 0;
};
```

Here are some declarations that aren't definitions:

```cpp
extern int i;
char *strchr( const char *Str, const char Target );
```

## Typedefs and using statements

In older versions of C++, the [`typedef`](aliases-and-typedefs-cpp.md) keyword is used to declare a new name that is an *alias* for another name. For example, the type `std::string` is another name for `std::basic_string<char>`. It should be obvious why programmers use the typedef name and not the actual name. In modern C++, the [`using`](aliases-and-typedefs-cpp.md) keyword is preferred over **`typedef`**, but the idea is the same: a new name is declared for an entity, which is already declared and defined.

## Static class members

Static class data members are discrete variables that are shared by all objects of the class. Because they're shared, they must be defined and initialized outside the class definition. For more information, see [Classes](../cpp/classes-and-structs-cpp.md).

## extern declarations

A C++ program might contain more than one [compilation unit](header-files-cpp.md). To declare an entity that's defined in a separate compilation unit, use the [`extern`](extern-cpp.md) keyword. The information in the declaration is sufficient for the compiler. However, if the definition of the entity can't be found in the linking step, then the linker will raise an error.

## In this section

[Storage classes](storage-classes-cpp.md)\
[`const`](const-cpp.md)\
[`constexpr`](constexpr-cpp.md)\
[`extern`](extern-cpp.md)\
[Initializers](initializers.md)\
[Aliases and typedefs](aliases-and-typedefs-cpp.md)\
[`using` declaration](using-declaration.md)\
[`volatile`](volatile-cpp.md)\
[`decltype`](decltype-cpp.md)\
[Attributes in C++](attributes.md)

## See also

[Basic Concepts](../cpp/basic-concepts-cpp.md)
