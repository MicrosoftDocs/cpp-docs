---
description: "Learn more about: How to: Declare Pinning Pointers and Value Types"
title: "How to: Declare Pinning Pointers and Value Types"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["value types, declaring", "pinning pointers"]
ms.assetid: 57c5ec8a-f85a-48c4-ba8b-a81268bcede0
---
# How to: Declare Pinning Pointers and Value Types

A value type can be implicitly boxed. You can then declare a pinning pointer to the value type object itself and use a **pin_ptr** to the boxed value type.

## Example

### Code

```cpp
// pin_ptr_value.cpp
// compile with: /clr
value struct V {
   int i;
};

int main() {
   V ^ v = gcnew V;   // imnplicit boxing
   v->i=8;
   System::Console::WriteLine(v->i);
   pin_ptr<V> mv = &*v;
   mv->i = 7;
   System::Console::WriteLine(v->i);
   System::Console::WriteLine(mv->i);
}
```

```Output
8
7
7
```

## See also

[pin_ptr (C++/CLI)](pin-ptr-cpp-cli.md)
