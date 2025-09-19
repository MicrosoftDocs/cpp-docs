---
title: "Compiler Error C3920"
description: "Learn more about: Compiler Error C3920"
ms.date: 11/04/2016
f1_keywords: ["C3920"]
helpviewer_keywords: ["C3920"]
---
# Compiler Error C3920

> 'operator'' : cannot define a postfix increment/decrement WinRT or CLR operator  Calling the postfix WinRT or CLR operator will call the corresponding prefix WinRT or CLR operator (op_Increment/op_Decrement), but with postfix semantics

## Remarks

The Windows Runtime and CLR do not support the postfix operator and user-defined postfix operators are not allowed.  You can define a prefix operator and the prefix operator will be used for both pre- and post-increment operations.

## Example

The following example generates C3920 and shows how to fix it:

```cpp
// C3920.cpp
// compile with: /clr /LD
public value struct V {
   static V operator ++(V me, int)
   // try the following line instead
   // static V operator ++(V me)
   {   // C3920
      me.m_i++;
      return me;
   }

   int m_i;
};
```
