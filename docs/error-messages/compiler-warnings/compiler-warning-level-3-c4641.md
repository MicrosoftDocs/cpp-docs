---
title: "Compiler Warning (level 3) C4641 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4641"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4641"]
ms.assetid: 28fe5c3e-6039-42da-9100-1312b5b15aea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4641

XML document comment has an ambiguous cross reference

The compiler was unable to unambiguously resolve a reference. To resolve this warning, specify the parameter information necessary to make the reference unambiguous.

For more information, see [XML Documentation](../../ide/xml-documentation-visual-cpp.md).

## Example

The following sample generates C4641.

```
// C4641.cpp
// compile with: /W3 /doc /clr /c

/// <see cref="f" />   // C4641
// try the following line instead
// /// <see cref="f(int)" />
public ref class GR {
public:
   void f( int ) {}
   void f( char ) {}
};
```