---
description: "Learn more about: Compiler Warning (level 4) C4634"
title: "Compiler Warning (level 4) C4634"
ms.date: "11/04/2016"
f1_keywords: ["C4634"]
helpviewer_keywords: ["C4634"]
ms.assetid: 3e3496ce-2ac7-43d0-a48a-f514c950e81d
---
# Compiler Warning (level 4) C4634

XML document comment: cannot be applied:  reason

XML documentation tags can not be applied to all C++ constructs.  For example, you cannot add a documentation comment to a namespace or template.

For more information, see [XML Documentation](../../build/reference/xml-documentation-visual-cpp.md).

## Examples

The following sample generates C4634.

```cpp
// C4634.cpp
// compile with: /W4 /doc /c
/// This is a namespace.   // C4634
namespace hello {
   class MyClass  {};
};
```

The following sample generates C4634.

```cpp
// C4634_b.cpp
// compile with: /W4 /doc /c
/// This is a template.   // C4634
template <class T>
class MyClass  {};
```
