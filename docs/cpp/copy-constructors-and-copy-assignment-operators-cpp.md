---
description: "Learn more about: Copy constructors and copy assignment operators (C++)"
title: "Copy constructors and copy assignment operators (C++)"
ms.date: 02/11/2022
helpviewer_keywords: ["= operator [C++], copying objects", "assignment statements [C++], copying objects", "assignment operators [C++], for copying objects", "objects [C++], copying", "initializing objects, by copying objects", "copying objects", "assigning values to copy objects"]
ms.assetid: a94fe1f9-0289-4fb9-8633-77c654002c0d
---
# Copy constructors and copy assignment operators (C++)

> [!NOTE]
> Starting in C++11, two kinds of assignment are supported in the language: *copy assignment* and *move assignment*. In this article "assignment" means copy assignment unless explicitly stated otherwise. For information about move assignment, see [Move Constructors and Move Assignment Operators (C++)](move-constructors-and-move-assignment-operators-cpp.md).
>
> Both the assignment operation and the initialization operation cause objects to be copied.

- **Assignment**: When one object's value is assigned to another object, the first object is copied to the second object. So, this code copies the value of `b` into `a`:

    ```cpp
    Point a, b;
    ...
    a = b;
    ```

- **Initialization**: Initialization occurs when you declare a new object, when you pass function arguments by value, or when you return by value from a function.

You can define the semantics of "copy" for objects of class type. For example, consider this code:

```cpp
TextFile a, b;
a.Open( "FILE1.DAT" );
b.Open( "FILE2.DAT" );
b = a;
```

The preceding code could mean "copy the contents of FILE1.DAT to FILE2.DAT" or it could mean "ignore FILE2.DAT and make `b` a second handle to FILE1.DAT." You must attach appropriate copying semantics to each class, as follows:

- Use an assignment operator **`operator=`** that returns a reference to the class type and takes one parameter that's passed by **`const`** reference—for example `ClassName& operator=(const ClassName& x);`.

- Use the copy constructor.

If you don't declare a copy constructor, the compiler generates a member-wise copy constructor for you. Similarly, if you don't declare a copy assignment operator, the compiler generates a member-wise copy assignment operator for you. Declaring a copy constructor doesn't suppress the compiler-generated copy assignment operator, and vice-versa. If you implement either one, we recommend that you implement the other one, too. When you implement both, the meaning of the code is clear.

The copy constructor takes an argument of type `ClassName&`, where *`ClassName`* is the name of the class. For example:

```cpp
// spec1_copying_class_objects.cpp
class Window
{
public:
    Window( const Window& );            // Declare copy constructor.
    Window& operator=(const Window& x); // Declare copy assignment.
    // ...
};

int main()
{
}
```

> [!NOTE]
> Make the type of the copy constructor's argument `const ClassName&` whenever possible. This prevents the copy constructor from accidentally changing the copied object. It also lets you copy from **`const`** objects.

## Compiler generated copy constructors

Compiler-generated copy constructors, like user-defined copy constructors, have a single argument of type "reference to *class-name*." An exception is when all base classes and member classes have copy constructors declared as taking a single argument of type **`const`** <em>class-name</em><strong>&</strong>. In such a case, the compiler-generated copy constructor's argument is also **`const`**.

When the argument type to the copy constructor isn't **`const`**, initialization by copying a **`const`** object generates an error. The reverse isn't true: If the argument is **`const`**, you can initialize by copying an object that's not **`const`**.

Compiler-generated assignment operators follow the same pattern for **`const`**. They take a single argument of type `ClassName&` unless the assignment operators in all base and member classes take arguments of type `const ClassName&`. In this case, the generated assignment operator for the class takes a **`const`** argument.

> [!NOTE]
> When virtual base classes are initialized by copy constructors, whether compiler-generated or user-defined, they're initialized only once: at the point when they are constructed.

The implications are similar to the copy constructor. When the argument type isn't **`const`**, assignment from a **`const`** object generates an error. The reverse isn't true: If a **`const`** value is assigned to a value that's not **`const`**, the assignment succeeds.

For more information about overloaded assignment operators, see [Assignment](../cpp/assignment.md).
