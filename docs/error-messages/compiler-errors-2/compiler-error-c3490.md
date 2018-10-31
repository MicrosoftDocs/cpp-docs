---
title: "Compiler Error C3490"
ms.date: "11/04/2016"
f1_keywords: ["C3490"]
helpviewer_keywords: ["C3490"]
ms.assetid: 7638559a-fd06-4527-a9c1-0c8ae68b3123
---
# Compiler Error C3490

'var' cannot be modified because it is being accessed through a const object

A lambda expression that is declared in a `const` method cannot modify non-mutable member data.

### To correct this error

- Remove the `const` modifier from your method declaration.

## Example

The following example generates C3490 because it modifies the member variable `_i` in a `const` method:

```
// C3490a.cpp
// compile with: /c

class C
{
   void f() const
   {
      auto x = [=]() { _i = 20; }; // C3490
   }

   int _i;
};
```

## Example

The following example resolves C3490 by removing the `const` modifier from the method declaration:

```
// C3490b.cpp
// compile with: /c

class C
{
   void f()
   {
      auto x = [=]() { _i = 20; };
   }

   int _i;
};
```

## See Also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)