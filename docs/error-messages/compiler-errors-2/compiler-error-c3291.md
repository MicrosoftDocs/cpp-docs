---
title: "Compiler Error C3291 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3291"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3291"]
ms.assetid: ed2e9f89-8dbc-4387-bc26-cc955e840858
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3291

'default' : cannot be the name of a trivial property

A trivial property cannot be named `default`. See [property](../../windows/property-cpp-component-extensions.md) for more information.

## Example

The following sample generates C3291.

```
// C3291.cpp
// compile with: /clr /c
ref struct C {
   property System::String ^ default;   // C3291
   property System::String ^ Default;   // OK
};
```