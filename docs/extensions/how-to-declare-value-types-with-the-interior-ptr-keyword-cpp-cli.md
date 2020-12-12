---
description: "Learn more about: How to: Declare Value Types with the interior_ptr Keyword (C++/CLI)"
title: "How to: Declare Value Types with the interior_ptr Keyword (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["_ptr keyword", "value types, declaring"]
ms.assetid: 49eea66e-eeba-49bd-95b0-ba297be436e3
---
# How to: Declare Value Types with the interior_ptr Keyword (C++/CLI)

An **interior_ptr** can be used with a value type.

> [!IMPORTANT]
> This language feature is supported by the `/clr` compiler option, but not by the `/ZW` compiler option.

## Example: interior_ptr with value type

### Description

The following C++/CLI sample shows how to use an **interior_ptr** with a value type.

### Code

```cpp
// interior_ptr_value_types.cpp
// compile with: /clr
value struct V {
   V(int i) : data(i){}
   int data;
};

int main() {
   V v(1);
   System::Console::WriteLine(v.data);

   // pointing to a value type
   interior_ptr<V> pv = &v;
   pv->data = 2;

   System::Console::WriteLine(v.data);
   System::Console::WriteLine(pv->data);

   // pointing into a value type
   interior_ptr<int> pi = &v.data;
   *pi = 3;
   System::Console::WriteLine(*pi);
   System::Console::WriteLine(v.data);
   System::Console::WriteLine(pv->data);
}
```

```Output
1
2
2
3
3
3
```

## Example: this pointer

### Description

In a value type, the **`this`** pointer evaluates to an interior_ptr.

In the body of a non-static member-function of a value type `V`, **`this`** is an expression of type `interior_ptr<V>` whose value is the address of the object for which the function is called.

### Code

```cpp
// interior_ptr_value_types_this.cpp
// compile with: /clr /LD
value struct V {
   int data;
   void f() {
      interior_ptr<V> pv1 = this;
      // V* pv2 = this;   error
   }
};
```

## Example: address-of operator

### Description

The following sample shows how to use the address-of operator with static members.

The address of a static Visual C++ type member yields a native pointer.  The address of a static value type member is a managed pointer because value type member is allocated on the runtime heap and can be moved by the garbage collector.

### Code

```cpp
// interior_ptr_value_static.cpp
// compile with: /clr
using namespace System;
value struct V { int i; };

ref struct G {
   static V v = {22};
   static int i = 23;
   static String^ pS = "hello";
};

int main() {
   interior_ptr<int> p1 = &G::v.i;
   Console::WriteLine(*p1);

   interior_ptr<int> p2 = &G::i;
   Console::WriteLine(*p2);

   interior_ptr<String^> p3 = &G::pS;
   Console::WriteLine(*p3);
}
```

```Output
22
23
hello
```

## See also

[interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)
