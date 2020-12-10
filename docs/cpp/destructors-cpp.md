---
description: "Learn more about: Destructors (C++)"
title: "Destructors (C++)"
ms.date: "07/20/2019"
helpviewer_keywords: ["objects [C++], destroying", "destructors, C++"]
ms.assetid: afa859b0-f3bc-4c4d-b250-c68b335b6004
---
# Destructors (C++)

A destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to **`delete`**. A destructor has the same name as the class, preceded by a tilde (`~`). For example, the destructor for class `String` is declared: `~String()`.

If you do not define a destructor, the compiler will provide a default one; for many classes this is sufficient. You only need to define a custom destructor when the class stores handles to system resources that need to be released, or pointers that own the memory they point to.

Consider the following declaration of a `String` class:

```cpp
// spec1_destructors.cpp
#include <string>

class String {
public:
   String( char *ch );  // Declare constructor
   ~String();           //  and destructor.
private:
   char    *_text;
   size_t  sizeOfText;
};

// Define the constructor.
String::String( char *ch ) {
   sizeOfText = strlen( ch ) + 1;

   // Dynamically allocate the correct amount of memory.
   _text = new char[ sizeOfText ];

   // If the allocation succeeds, copy the initialization string.
   if( _text )
      strcpy_s( _text, sizeOfText, ch );
}

// Define the destructor.
String::~String() {
   // Deallocate the memory that was previously reserved
   //  for this string.
   delete[] _text;
}

int main() {
   String str("The piper in the glen...");
}
```

In the preceding example, the destructor `String::~String` uses the **`delete`** operator to deallocate the space dynamically allocated for text storage.

## Declaring destructors

Destructors are functions with the same name as the class but preceded by a tilde (`~`)

Several rules govern the declaration of destructors. Destructors:

- Do not accept arguments.

- Do not return a value (or **`void`**).

- Cannot be declared as **`const`**, **`volatile`**, or **`static`**. However, they can be invoked for the destruction of objects declared as **`const`**, **`volatile`**, or **`static`**.

- Can be declared as **`virtual`**. Using virtual destructors, you can destroy objects without knowing their type — the correct destructor for the object is invoked using the virtual function mechanism. Note that destructors can also be declared as pure virtual functions for abstract classes.

## Using destructors

Destructors are called when one of the following events occurs:

- A local (automatic) object with block scope goes out of scope.

- An object allocated using the **`new`** operator is explicitly deallocated using **`delete`**.

- The lifetime of a temporary object ends.

- A program ends and global or static objects exist.

- The destructor is explicitly called using the destructor function's fully qualified name.

Destructors can freely call class member functions and access class member data.

There are two restrictions on the use of destructors:

- You cannot take its address.

- Derived classes do not inherit the destructor of their base class.

## Order of destruction

When an object goes out of scope or is deleted, the sequence of events in its complete destruction is as follows:

1. The class's destructor is called, and the body of the destructor function is executed.

1. Destructors for nonstatic member objects are called in the reverse order in which they appear in the class declaration. The optional member initialization list used in construction of these members does not affect the order of construction or destruction.

1. Destructors for non-virtual base classes are called in the reverse order of declaration.

1. Destructors for virtual base classes are called in the reverse order of declaration.

```cpp
// order_of_destruction.cpp
#include <cstdio>

struct A1      { virtual ~A1() { printf("A1 dtor\n"); } };
struct A2 : A1 { virtual ~A2() { printf("A2 dtor\n"); } };
struct A3 : A2 { virtual ~A3() { printf("A3 dtor\n"); } };

struct B1      { ~B1() { printf("B1 dtor\n"); } };
struct B2 : B1 { ~B2() { printf("B2 dtor\n"); } };
struct B3 : B2 { ~B3() { printf("B3 dtor\n"); } };

int main() {
   A1 * a = new A3;
   delete a;
   printf("\n");

   B1 * b = new B3;
   delete b;
   printf("\n");

   B3 * b2 = new B3;
   delete b2;
}

Output: A3 dtor
A2 dtor
A1 dtor

B1 dtor

B3 dtor
B2 dtor
B1 dtor
```

### Virtual base classes

Destructors for virtual base classes are called in the reverse order of their appearance in a directed acyclic graph (depth-first, left-to-right, postorder traversal). the following figure depicts an inheritance graph.

![Inheritance graph that shows virtual base classes](../cpp/media/vc392j1.gif "Inheritance graph that shows virtual base classes") <br/>
Inheritance graph that shows virtual base classes

The following lists the class heads for the classes shown in the figure.

```cpp
class A
class B
class C : virtual public A, virtual public B
class D : virtual public A, virtual public B
class E : public C, public D, virtual public B
```

To determine the order of destruction of the virtual base classes of an object of type `E`, the compiler builds a list by applying the following algorithm:

1. Traverse the graph left, starting at the deepest point in the graph (in this case, `E`).

1. Perform leftward traversals until all nodes have been visited. Note the name of the current node.

1. Revisit the previous node (down and to the right) to find out whether the node being remembered is a virtual base class.

1. If the remembered node is a virtual base class, scan the list to see whether it has already been entered. If it is not a virtual base class, ignore it.

1. If the remembered node is not yet in the list, add it to the bottom of the list.

1. Traverse the graph up and along the next path to the right.

1. Go to step 2.

1. When the last upward path is exhausted, note the name of the current node.

1. Go to step 3.

1. Continue this process until the bottom node is again the current node.

Therefore, for class `E`, the order of destruction is:

1. The non-virtual base class `E`.

1. The non-virtual base class `D`.

1. The non-virtual base class `C`.

1. The virtual base class `B`.

1. The virtual base class `A`.

This process produces an ordered list of unique entries. No class name appears twice. Once the list is constructed, it is walked in reverse order, and the destructor for each of the classes in the list from the last to the first is called.

The order of construction or destruction is primarily important when constructors or destructors in one class rely on the other component being created first or persisting longer — for example, if the destructor for `A` (in the figure shown above) relied on `B` still being present when its code executed, or vice versa.

Such interdependencies between classes in an inheritance graph are inherently dangerous because classes derived later can alter which is the leftmost path, thereby changing the order of construction and destruction.

### Non-virtual base classes

The destructors for non-virtual base classes are called in the reverse order in which the base class names are declared. Consider the following class declaration:

```cpp
class MultInherit : public Base1, public Base2
...
```

In the preceding example, the destructor for `Base2` is called before the destructor for `Base1`.

## Explicit destructor calls

Calling a destructor explicitly is seldom necessary. However, it can be useful to perform cleanup of objects placed at absolute addresses. These objects are commonly allocated using a user-defined **`new`** operator that takes a placement argument. The **`delete`** operator cannot deallocate this memory because it is not allocated from the free store (for more information, see [The new and delete Operators](../cpp/new-and-delete-operators.md)). A call to the destructor, however, can perform appropriate cleanup. To explicitly call the destructor for an object, `s`, of class `String`, use one of the following statements:

```cpp
s.String::~String();     // non-virtual call
ps->String::~String();   // non-virtual call

s.~String();       // Virtual call
ps->~String();     // Virtual call
```

The notation for explicit calls to destructors, shown in the preceding, can be used regardless of whether the type defines a destructor. This allows you to make such explicit calls without knowing if a destructor is defined for the type. An explicit call to a destructor where none is defined has no effect.

## Robust programming

A class needs a destructor if it acquires a resource, and to manage the resource safely it probably has to implement a copy constructor and a copy assignment.

If these special functions are not defined by the user, they are implicitly defined by the compiler. The implicitly generated constructors and assignment operators perform shallow, memberwise copy, which is almost certainly wrong if an object is managing a resource.

In the next example, the implicitly generated copy constructor will make the pointers `str1.text` and `str2.text` refer to the same memory, and when we return from `copy_strings()`, that memory will be deleted twice, which is undefined behavior:

```cpp
void copy_strings()
{
   String str1("I have a sense of impending disaster...");
   String str2 = str1; // str1.text and str2.text now refer to the same object
} // delete[] _text; deallocates the same memory twice
  // undefined behavior
```

Explicitly defining a destructor, copy constructor, or copy assignment operator prevents implicit definition of the move constructor and the move assignment operator. In this case, failing to provide move operations is usually, if copying is expensive, a missed optimization opportunity.

## See also

[Copy Constructors and Copy Assignment Operators](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md)</br>
[Move Constructors and Move Assignment Operators](../cpp/move-constructors-and-move-assignment-operators-cpp.md)
