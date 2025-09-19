---
title: "Compiler Error C2626"
description: "Learn more about: Compiler Error C2626"
ms.date: 11/04/2016
f1_keywords: ["C2626"]
helpviewer_keywords: ["C2626"]
---
# Compiler Error C2626

> 'identifier': a private or protected data member is not allowed in an anonymous struct or union

## Remarks

A member of an anonymous struct or union must have public access.

## Example

The following example generates C2626:

```cpp
// C2626.cpp
int main() {
   union {
   protected:
      int j;     // C2626, j is protected
   private:
      int k;     // C2626, k is private
   };
}
```

To fix this issue, remove any private or protected tags:

```cpp
// C2626b.cpp
int main() {
   union {
   public:
      int i;   // OK, i is public
   };
}
```
