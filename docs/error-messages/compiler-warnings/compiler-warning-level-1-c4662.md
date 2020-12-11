---
description: "Learn more about: Compiler Warning (level 1) C4662"
title: "Compiler Warning (level 1) C4662"
ms.date: "11/04/2016"
f1_keywords: ["C4662"]
helpviewer_keywords: ["C4662"]
ms.assetid: 7efda273-d04a-47b7-ad65-ff1ff94b5ffc
---
# Compiler Warning (level 1) C4662

explicit instantiation; template-class 'identifier1' has no definition from which to specialize 'identifier2'

The specified template-class was declared, but not defined.

## Example

```cpp
// C4662.cpp
// compile with: /W1 /LD
template<class T, int i> class MyClass; // no definition
template MyClass< int, 1>;              // C4662
```
