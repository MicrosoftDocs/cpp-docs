---
title: "Compiler Warning (level 4) C4634 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4634"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4634"]
ms.assetid: 3e3496ce-2ac7-43d0-a48a-f514c950e81d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4634

XML document comment: cannot be applied:  reason

XML documentation tags can not be applied to all C++ constructs.  For example, you cannot add a documentation comment to a namespace or template.

For more information, see [XML Documentation](../../ide/xml-documentation-visual-cpp.md).

## Example

The following sample generates C4634.

```
// C4634.cpp
// compile with: /W4 /doc /c
/// This is a namespace.   // C4634
namespace hello {
   class MyClass  {};
};
```

## Example

The following sample generates C4634.

```
// C4634_b.cpp
// compile with: /W4 /doc /c
/// This is a template.   // C4634
template <class T>
class MyClass  {};
```