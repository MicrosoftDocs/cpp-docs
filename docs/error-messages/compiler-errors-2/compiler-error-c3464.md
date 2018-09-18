---
title: "Compiler Error C3464 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3464"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3464"]
ms.assetid: 0ede05dc-4486-4921-8e8c-78ab5a2e09c5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3464

'type' a nested type cannot be forwarded

Type forwarding does not work on nested types.

For more information, see [Type Forwarding (C++/CLI)](../../windows/type-forwarding-cpp-cli.md).

## Example

The following sample creates a component.

```
// C3464.cpp
// compile with: /LD /clr
public ref class R {
public:
   ref class N {};
};
```

## Example

The following sample generates C3464.

```
// C3464_b.cpp
// compile with: /clr /c
#using "C3464.dll"
[assembly:TypeForwardedTo(R::N::typeid)];   // C3464
[assembly:TypeForwardedTo(R::typeid)];   // OK
```