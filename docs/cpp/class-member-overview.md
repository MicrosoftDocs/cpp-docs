---
description: "Learn more about: Class member overview"
title: "Class member overview"
ms.date: 07/01/2022
helpviewer_keywords: ["members [C++], types of class members", "members [C++]", "class members [C++], types of", "class members"]
ms.assetid: 8802cfa9-705d-4f37-acde-245d6838010c
---
# Class member overview

A `class` or `struct` consists of its members. The work that a class does is performed by its member functions. The state that it maintains is stored in its data members. Initialization of members is done by constructors, and cleanup work such as freeing of memory and releasing of resources is done by destructors. In C++11 and later, data members can (and usually should) be initialized at the point of declaration.

## Kinds of class members

The full list of member categories is as follows:

- [Special member functions](special-member-functions.md).

- [Overview of member functions](overview-of-member-functions.md).

- [Mutable](static-members-cpp.md) and [static](static-members-cpp.md) data members, including built-in types and other user defined types.

- Operators

- [Nested class declarations](nested-class-declarations.md) and.)

- [Unions](unions.md)

- [Enumerations](../cpp/enumerations-cpp.md).

- [Bit fields](../cpp/cpp-bit-fields.md).

- [Friends](../cpp/friend-cpp.md).

- [Aliases and typedefs](../cpp/aliases-and-typedefs-cpp.md).

    > [!NOTE]
    >  Friends are included in the preceding list because they are contained in the class declaration. However, they are not true class members, because they are not in the scope of the class.

## Example class declaration

The following example shows a simple class declaration:

```cpp
// TestRun.h

class TestRun
{
    // Start member list.

    // The class interface accessible to all callers.
public:
    // Use compiler-generated default constructor:
    TestRun() = default;
    // Don't generate a copy constructor:
    TestRun(const TestRun&) = delete;
    TestRun(std::string name);
    void DoSomething();
    int Calculate(int a, double d);
    virtual ~TestRun();
    enum class State { Active, Suspended };

    // Accessible to this class and derived classes only.
protected:
    virtual void Initialize();
    virtual void Suspend();
    State GetState();

    // Accessible to this class only.
private:
    // Default brace-initialization of instance members:
    State _state{ State::Suspended };
    std::string _testName{ "" };
    int _index{ 0 };

    // Non-const static member:
    static int _instances;
    // End member list.
};

// Define and initialize static member.
int TestRun::_instances{ 0 };
```

## Member accessibility

The members of a class are declared in the member list. The member list of a class may be divided into any number of **`private`**, **`protected`** and **`public`** sections using keywords known as access specifiers. A colon **`:`** must follow the access specifier.  These sections don't have to be contiguous; that is, any of these keywords may appear several times in the member list. The keyword designates the access of all members up until the next access specifier or the closing brace. For more information, see [Member access control (C++)](../cpp/member-access-control-cpp.md).

## Static members

A data member may be declared as static, which means all objects of the class have access to the same copy of it. A member function may be declared as static, in which case it can only access static data members of the class (and has no **`this`** pointer). For more information, see [Static Data Members](../cpp/static-members-cpp.md).

## Special member functions

Special member functions are functions that the compiler provides automatically if you don't specify them in your source code.

- Default constructor

- Copy constructor

- **(C++11)** Move constructor

- Copy assignment operator

- **(C++11)** Move assignment operator

- Destructor

For more information, see [Special member functions](../cpp/special-member-functions.md).

## Member-wise initialization

In C++11 and later, non-static member declarators can contain initializers.

```cpp
class CanInit
{
public:
    long num {7};       // OK in C++11
    int k = 9;          // OK in C++11
    static int i = 9; // Error: must be defined and initialized
                      // outside of class declaration.

    // initializes num to 7 and k to 9
    CanInit(){}

    // overwrites original initialized value of num:
    CanInit(int val) : num(val) {}
};
int main()
{
}
```

If a member is assigned a value in a constructor, that value overwrites the value assigned at declaration.

There's only one shared copy of static data members for all objects of a given class type. Static data members must be defined and can be initialized at file scope. For more information about static data members, see [Static data members](../cpp/static-members-cpp.md). The following example shows how to initialize static data members:

```cpp
// class_members2.cpp
class CanInit2
{
public:
    CanInit2() {} // Initializes num to 7 when new objects of type
                 //  CanInit are created.
    long     num {7};
    static int i;
    static int j;
};

// At file scope:

// i is defined at file scope and initialized to 15.
// The initializer is evaluated in the scope of CanInit.
int CanInit2::i = 15;

// The right side of the initializer is in the scope
// of the object being initialized
int CanInit2::j = i;
```

> [!NOTE]
> The class name, `CanInit2`, must precede `i` to specify that the `i` being defined is a member of class `CanInit2`.

## See also

[Classes and Structs](../cpp/classes-and-structs-cpp.md)
