---
title: "Compiler Warning (level 2) C4285"
description: "Learn more about: Compiler Warning (level 2) C4285"
ms.date: 11/04/2016
f1_keywords: ["C4285"]
helpviewer_keywords: ["C4285"]
---
# Compiler Warning (level 2) C4285

> return type for 'identifier::operator ->' is recursive if applied using infix notation

## Remarks

The specified **operator->()** function cannot return the type for which it is defined or a reference to the type for which it is defined.

## Example

The following example generates C4285:

```cpp
// C4285.cpp
// compile with: /W2
class C
{
public:
    C operator->();   // C4285
   // C& operator->();  C4285, also
};

int main()
{
}
```
