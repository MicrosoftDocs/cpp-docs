---
description: "Learn more about: Compiler Warning (level 1) C4661"
title: "Compiler Warning (level 1) C4661"
ms.date: "11/04/2016"
f1_keywords: ["C4661"]
helpviewer_keywords: ["C4661"]
ms.assetid: 603bb8b7-356d-4eef-924b-64d769bac5bd
---
# Compiler Warning (level 1) C4661

'identifier' : no suitable definition provided for explicit template instantiation request

A member of the template class is not defined.

## Example

```cpp
// C4661.cpp
// compile with: /W1 /LD
template<class T> class MyClass {
public:
   void i();   // declaration but not definition
};
template MyClass< int >;  // C4661
```
