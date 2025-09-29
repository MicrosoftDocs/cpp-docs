---
title: "Compiler Error C2396"
description: "Learn more about: Compiler Error C2396"
ms.date: 11/04/2016
f1_keywords: ["C2396"]
helpviewer_keywords: ["C2396"]
---
# Compiler Error C2396

> 'your_type::operator'type'' : CLR or WinRT user-defined conversion functionnot valid. Must either convert from or convert to: 'T^', 'T^%', 'T^&', where T = 'your_type'

## Remarks

A conversion function in a Windows Runtime or managed type did not have at least one parameter whose type is the same as the type containing the conversion function.

## Example

The following example generates C2396 and shows how to fix it:

```cpp
// C2396.cpp
// compile with: /clr /c

ref struct Y {
   static operator int(char c);   // C2396

   // OK
   static operator int(Y^ hY);
   // or
   static operator Y^(char c);
};
```
