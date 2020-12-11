---
description: "Learn more about: Compiler Warning (level 1) C4927"
title: "Compiler Warning (level 1) C4927"
ms.date: "11/04/2016"
f1_keywords: ["C4927"]
helpviewer_keywords: ["C4927"]
ms.assetid: 7009e740-a2ef-4130-96ba-482e092f717a
---
# Compiler Warning (level 1) C4927

illegal conversion; more than one user-defined conversion has been implicitly applied

More than one user-defined conversion is implicitly applied to a single value -- the compiler did not find an explicit conversion but did find a conversion, which it used.

The following sample generates C4927:

```cpp
// C4927.cpp
// compile with: /W1
struct B
{
   operator int ()
   {
      return 0;
   }
};

struct A
{
   A(int i)
   {
   }

   /*
   // uncomment this constructor to resolve
   A(B b)
   {
   }
   */
};

A f1( B& b)
{
   return A(b);
}

B& f2( B& b)
{
   return b;
}

A f()
{
   B b;
   return A(b);   // ok
   return f1(b);  // ok
   return b;      // C4927
   return B(b);   // C4927
   return f2(b);  // C4927
}

int main()
{
   B b;
   A a = b;
   A a2(b);
}
```
