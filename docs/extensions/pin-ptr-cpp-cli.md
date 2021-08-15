---
description: "Learn more about: pin_ptr (C++/CLI)"
title: "pin_ptr (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
f1_keywords: ["pin_ptr_cpp", "stdcli::language::pin_ptr", "pin_ptr"]
helpviewer_keywords: ["pinning pointers", "pin_ptr keyword [C++]"]
ms.assetid: 6c2e6c73-4ec2-4dce-8e1f-ccf3a9f9d0aa
---
# pin_ptr (C++/CLI)

Declares a *pinning pointer*, which is used only with the common language runtime.

## All Runtimes

(There are no remarks for this language feature that apply to all runtimes.)

## Windows Runtime

(This language feature is not supported in the Windows Runtime.)

## Common Language Runtime

A *pinning pointer* is an interior pointer that prevents the object pointed to from moving on the garbage-collected heap. That is, the value of a pinning pointer is not changed by the common language runtime. This is required when you pass the address of a managed class to an unmanaged function so that the address will not change unexpectedly during resolution of the unmanaged function call.

### Syntax

```cpp
[cli::]pin_ptr<cv_qualifiertype>var = &initializer;
```

### Parameters

*cv_qualifier*<br/>
**`const`** or **`volatile`** qualifiers. By default, a pinning pointer is **`volatile`**. It is redundant but not an error to declare a pinning pointer **`volatile`**.

*type*<br/>
The type of *initializer*.

*var*<br/>
The name of the **pin_ptr** variable.

*initializer*<br/>
A member of a reference type, element of a managed array, or any other object that you can assign to a native pointer.

### Remarks

A **pin_ptr** represents a superset of the functionality of a native pointer. Therefore, anything that can be assigned to a native pointer can also be assigned to a **pin_ptr**. An interior pointer is permitted to perform the same set of operations as native pointers, including comparison and pointer arithmetic.

An object or sub-object of a managed class can be pinned, in which case the common language runtime will not move it during garbage collection. The principal use of this is to pass a pointer to managed data as an actual parameter of an unmanaged function call. During a collection cycle, the runtime will inspect the metadata created for the pinning pointer and will not move the item it points to.

Pinning an object also pins its value fields; that is, fields of primitive or value type. However, fields declared by tracking handle (`%`) are not pinned.

Pinning a sub-object defined in a managed object has the effect of pinning the whole object.

If the pinning pointer is reassigned to point to a new value, the previous instance pointed to is no longer considered pinned.

An object is pinned only while a **pin_ptr** points to it. The object is no longer pinned when its pinning pointer goes out of scope, or is set to [nullptr](nullptr-cpp-component-extensions.md). After the **pin_ptr** goes out of scope, the object that was pinned can be moved in the heap by the garbage collector. Any native pointers that still point to the object will not be updated, and de-referencing one of them could raise an unrecoverable exception.

If no pinning pointers point to the object (all pinning pointers went out of scope, were reassigned to point to other objects, or were assigned [nullptr](nullptr-cpp-component-extensions.md)), the object is guaranteed not to be pinned.

A pinning pointer can point to a reference handle, value type or boxed type handle, member of a managed type, or an element of a managed array. It cannot point to a reference type.

Taking the address of a **pin_ptr** that points to a native object causes undefined behavior.

Pinning pointers can only be declared as non-static local variables on the stack.

Pinning pointers cannot be used as:

- function parameters

- the return type of a function

- a member of a class

- the target type of a cast.

**pin_ptr** is in the `cli` namespace. For more information, see [Platform, default, and cli Namespaces](platform-default-and-cli-namespaces-cpp-component-extensions.md).

For more information about interior pointers, see [interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md).

For more information about pinning pointers, see [How to: Pin Pointers and Arrays](how-to-pin-pointers-and-arrays.md) and [How to: Declare Pinning Pointers and Value Types](how-to-declare-pinning-pointers-and-value-types.md).

### Requirements

Compiler option: `/clr`

### Examples

The following example uses **pin_ptr** to constrain the position of the first element of an array.

```cpp
// pin_ptr_1.cpp
// compile with: /clr
using namespace System;
#define SIZE 10

#pragma unmanaged
// native function that initializes an array
void native_function(int* p) {
   for(int i = 0 ; i < 10 ; i++)
    p[i] = i;
}
#pragma managed

public ref class A {
private:
   array<int>^ arr;   // CLR integer array

public:
   A() {
      arr = gcnew array<int>(SIZE);
   }

   void load() {
   pin_ptr<int> p = &arr[0];   // pin pointer to first element in arr
   int* np = p;   // pointer to the first element in arr
   native_function(np);   // pass pointer to native function
   }

   int sum() {
      int total = 0;
      for (int i = 0 ; i < SIZE ; i++)
         total += arr[i];
      return total;
   }
};

int main() {
   A^ a = gcnew A;
   a->load();   // initialize managed array using the native function
   Console::WriteLine(a->sum());
}
```

```Output
45
```

The following example shows that an interior pointer can be converted to a pinning pointer, and that the return type of the address-of operator (`&`) is an interior pointer when the operand is on the managed heap.

```cpp
// pin_ptr_2.cpp
// compile with: /clr
using namespace System;

ref struct G {
   G() : i(1) {}
   int i;
};

ref struct H {
   H() : j(2) {}
   int j;
};

int main() {
   G ^ g = gcnew G;   // g is a whole reference object pointer
   H ^ h = gcnew H;

   interior_ptr<int> l = &(g->i);   // l is interior pointer

   pin_ptr<int> k = &(h->j);   // k is a pinning interior pointer

   k = l;   // ok
   Console::WriteLine(*k);
};
```

```Output
1
```

The following example shows that a pinning pointer can be cast to another type.

```cpp
// pin_ptr_3.cpp
// compile with: /clr
using namespace System;

ref class ManagedType {
public:
   int i;
};

int main() {
   ManagedType ^mt = gcnew ManagedType;
   pin_ptr<int> pt = &mt->i;
   *pt = 8;
   Console::WriteLine(mt->i);

   char *pc = ( char* ) pt;
   *pc = 255;
   Console::WriteLine(mt->i);
}
```

```Output
8
255
```
