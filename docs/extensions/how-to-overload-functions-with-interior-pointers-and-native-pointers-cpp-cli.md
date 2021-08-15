---
description: "Learn more about: How to: Overload Functions with Interior Pointers and Native Pointers (C++/CLI)"
title: "How to: Overload Functions with Interior Pointers and Native Pointers (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["Functions with interior and native pointers, overloading"]
ms.assetid: d70df625-4aad-457c-84f5-70a0a290cc1f
---
# How to: Overload Functions with Interior Pointers and Native Pointers (C++/CLI)

Functions can be overloaded depending on whether the parameter type is an interior pointer or a native pointer.

> [!IMPORTANT]
> This language feature is supported by the `/clr` compiler option, but not by the `/ZW` compiler option.

## Example

### Code

```cpp
// interior_ptr_overload.cpp
// compile with: /clr
using namespace System;

// C++ class
struct S {
   int i;
};

// managed class
ref struct G {
   int i;
};

// can update unmanaged storage
void f( int* pi ) {
   *pi = 10;
   Console::WriteLine("in f( int* pi )");
}

// can update managed storage
void f( interior_ptr<int> pi ) {
   *pi = 10;
   Console::WriteLine("in f( interior_ptr<int> pi )");
}

int main() {
   S *pS = new S;   // C++ heap
   G ^pG = gcnew G;   // common language runtime heap
   f( &pS->i );
   f( &pG->i );
};
```

```Output
in f( int* pi )
in f( interior_ptr<int> pi )
```

## See also

[interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)
