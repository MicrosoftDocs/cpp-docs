---
description: "Learn more about: Tracking Reference Operator (C++/CLI and C++/CX)"
title: "Tracking Reference Operator (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
f1_keywords: ["%"]
helpviewer_keywords: ["tracking references", "% tracking reference [C++]"]
ms.assetid: 142a7269-ab69-4b54-a6d7-833bef06228f
---
# Tracking Reference Operator (C++/CLI and C++/CX)

A *tracking reference* (`%`) behaves like an ordinary C++ reference (`&`) except that when an object is assigned to a tracking reference, the object's reference count is incremented.

## All Platforms

A tracking reference has the following characteristics.

- Assignment of an object to a tracking reference causes the object's reference count to be incremented.

- A native reference (`&`) is the result when you dereference a `*`. A tracking reference (`%`) is the result when you dereference a `^`. As long as you have a `%` to an object, the object will stay alive in memory.

- The dot (`.`) member-access operator is used to access a member of the object.

- Tracking references are valid for value types and handles (for example `String^`).

- A tracking reference cannot be assigned a null or **`nullptr`** value. A tracking reference may be reassigned to another valid object as many times as required.

- A tracking reference cannot be used as a unary take-address operator.

## Windows Runtime

A tracking reference behaves like a standard C++ reference, except that a % is reference-counted. The following snippet shows how to convert between % and ^ types:

```cpp
Foo^ spFoo = ref new Foo();
Foo% srFoo = *spFoo;
Foo^ spFoo2 = %srFoo;
```

The following example shows how to pass a ^ to a function that takes a %.

```cpp
ref class Foo sealed {};

    // internal or private
    void UseFooHelper(Foo% f)
    {
        auto x = %f;
    }

    // public method on ABI boundary
    void UseFoo(Foo^ f)
    {
        if (f != nullptr) { UseFooHelper(*f); }
    }
```

## Common Language Runtime

In C++/CLI, you can use a tracking reference to a handle when you bind to an object of a CLR type on the garbage-collected heap.

In the CLR, the value of a tracking reference variable is updated automatically whenever the garbage collector moves the referenced object.

A tracking reference can be declared only on the stack. A tracking reference cannot be a member of a class.

It is not possible to have a native C++ reference to an object on the garbage-collected heap.

For more information about tracking references in C++/CLI, see:

- [How to: Use Tracking References in C++/CLI](../dotnet/how-to-use-tracking-references-in-cpp-cli.md)

### Examples

The following sample for C++/CLI shows how to use a tracking reference with native and managed types.

```cpp
// tracking_reference_1.cpp
// compile with: /clr
ref class MyClass {
public:
   int i;
};

value struct MyStruct {
   int k;
};

int main() {
   MyClass ^ x = ref new MyClass;
   MyClass ^% y = x;   // tracking reference handle to reference object

   int %ti = x->i;   // tracking reference to member of reference type

   int j = 0;
   int %tj = j;   // tracking reference to object on the stack

   int * pi = new int[2];
   int % ti2 = pi[0];   // tracking reference to object on native heap

   int *% tpi = pi;   // tracking reference to native pointer

   MyStruct ^ x2 = ref new MyStruct;
   MyStruct ^% y2 = x2;   // tracking reference to value object

   MyStruct z;
   int %tk = z.k;   // tracking reference to member of value type

   delete[] pi;
}
```

The following sample for C++/CLI shows how to bind a tracking reference to an array.

```cpp
// tracking_reference_2.cpp
// compile with: /clr
using namespace System;

int main() {
   array<int> ^ a = ref new array<Int32>(5);
   a[0] = 21;
   Console::WriteLine(a[0]);
   array<int> ^% arr = a;
   arr[0] = 222;
   Console::WriteLine(a[0]);
}
```

```Output
21
222
```
