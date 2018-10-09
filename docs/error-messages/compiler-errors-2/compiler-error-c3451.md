---
title: "Compiler Error C3451 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3451"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3451"]
ms.assetid: a4897a69-e3e7-40bb-bb1c-598644904012
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3451

'attribute': cannot apply unmanaged attribute to 'type'

A C++ attribute cannot be applied to a CLR type. See [C++ Attributes Reference](../../windows/cpp-attributes-reference.md) for more information.

For more information, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).

This error can be generated as a result of compiler conformance work that was done for Visual C++ 2005: the [uuid](../../windows/uuid-cpp-attributes.md) attribute is no longer allowed on a user-defined attribute using CLR programming. Use <xref:System.Runtime.InteropServices.GuidAttribute> instead.

## Example

The following sample generates C3451.

```
// C3451.cpp
// compile with: /clr /c
using namespace System;
[ attribute(AttributeTargets::All) ]
public ref struct MyAttr {};

[ MyAttr, helpstring("test") ]   // C3451
// try the following line instead
// [ MyAttr ]
public ref struct ABC {};
```