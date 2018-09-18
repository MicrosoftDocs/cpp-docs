---
title: "Compiler Error C3868 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3868"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3868"]
ms.assetid: f0e45c2a-2149-4885-a03b-0d230069f03a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3868

'type': constraints on generic parameter 'parameter' differ from those on the declaration

Multiple declarations must have the same generic constraints.  For more information, see [Generics](../../windows/generics-cpp-component-extensions.md).

## Example

The following sample generates C3868.

```
// C3868.cpp
// compile with: /clr /c
interface struct I1;

generic <typename T> ref struct MyStruct;
generic <typename U> where U : I1 ref struct MyStruct;   // C3868

// OK
generic <typename T> ref struct MyStruct2;
generic <typename U> ref struct MyStruct2;

generic <typename T> where T : I1 ref struct MyStruct3;
generic <typename U> where U : I1 ref struct MyStruct3;
```