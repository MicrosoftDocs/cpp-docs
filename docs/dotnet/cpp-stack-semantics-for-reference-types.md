---
description: "Learn more about: C++ Stack Semantics for Reference Types"
title: "C++ Stack Semantics for Reference Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["reference types, C++ stack semantics for"]
ms.assetid: 319a1304-f4a4-4079-8b84-01cec847d531
---
# C++ Stack Semantics for Reference Types

Prior to Visual Studio 2005, an instance of a reference type could only be created using the **`new`** operator, which created the object on the garbage collected heap. However, you can now create an instance of a reference type using the same syntax that you would use to create an instance of a native type on the stack. So, you do not need to use [ref new, gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md) to create an object of a reference type. And when the object goes out of scope, the compiler calls the object's destructor.

## Remarks

When you create an instance of a reference type using stack semantics, the compiler does internally create the instance on the garbage collected heap (using **`gcnew`**).

When the signature or return type of a function includes an instance of a by-value reference type, the function will be marked in the metadata as requiring special handling (with modreq). This special handling is currently only provided by Visual C++ clients; other languages do not currently support consuming functions or data that use reference types created with stack semantics.

One reason to use **`gcnew`** (dynamic allocation) instead of stack semantics would be if the type has no destructor. Also, using reference types created with stack semantics in function signatures would not be possible if you want your functions to be consumed by languages other than Visual C++.

The compiler will not generate a copy constructor for a reference type. Therefore, if you define a function that uses a by-value reference type in the signature, you must define a copy constructor for the reference type. A copy constructor for a reference type has a signature of the following form: `R(R%){}`.

The compiler will not generate a default assignment operator for a reference type. An assignment operator allows you to create an object using stack semantics and initialize it with an existing object created using stack semantics. An assignment operator for a reference type has a signature of the following form: `void operator=( R% ){}`.

If your type's destructor releases critical resources and you use stack semantics for reference types, you do not need to explicitly call the destructor (or call **`delete`**). For more information on destructors in reference types, see [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

A compiler-generated assignment operator will follow the usual standard C++ rules with the following additions:

- Any non-static data members whose type is a handle to a reference type will be shallow copied (treated like a non-static data member whose type is a pointer).

- Any non-static data member whose type is a value type will be shallow copied.

- Any non-static data member whose type is an instance of a reference type will invoke a call to the reference type’s copy constructor.

The compiler also provides a `%` unary operator to convert an instance of a reference type created using stack semantics to its underlying handle type.

The following reference types are not available for use with stack semantics:

- [delegate  (C++ Component Extensions)](../extensions/delegate-cpp-component-extensions.md)

- [Arrays](../extensions/arrays-cpp-component-extensions.md)

- <xref:System.String>

## Example

### Description

The following code sample shows how to declare instances of reference types with stack semantics, how the assignment operator and copy constructor works, and how to initialize a tracking reference with reference type created using stack semantics.

### Code

```cpp
// stack_semantics_for_reference_types.cpp
// compile with: /clr
ref class R {
public:
   int i;
   R(){}

   // assignment operator
   void operator=(R% r) {
      i = r.i;
   }

   // copy constructor
   R(R% r) : i(r.i) {}
};

void Test(R r) {}   // requires copy constructor

int main() {
   R r1;
   r1.i = 98;

   R r2(r1);   // requires copy constructor
   System::Console::WriteLine(r1.i);
   System::Console::WriteLine(r2.i);

   // use % unary operator to convert instance using stack semantics
   // to its underlying handle
   R ^ r3 = %r1;
   System::Console::WriteLine(r3->i);

   Test(r1);

   R r4;
   R r5;
   r5.i = 13;
   r4 = r5;   // requires a user-defined assignment operator
   System::Console::WriteLine(r4.i);

   // initialize tracking reference
   R % r6 = r4;
   System::Console::WriteLine(r6.i);
}
```

### Output

```Output
98
98
98
13
13
```

## See also

[Classes and Structs](../extensions/classes-and-structs-cpp-component-extensions.md)
