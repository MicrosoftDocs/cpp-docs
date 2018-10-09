---
title: "Compiler Error C3101 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3101"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3101"]
ms.assetid: 4f673766-d4f7-4632-94a5-d36a83f7f4b5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3101

illegal expression for named attribute argument 'field'

When initializing a named attribute argument, the value must be a compile time constant.

For more information on attributes, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).

## Example

The following sample generates C3101.

```
// C3101.cpp
// compile with: /clr /c
ref class AAttribute : System::Attribute {
public:
   int Field;
};

extern int i;

[assembly:A(Field = i)];   // C3101
[assembly:A(Field = 0)];   // OK
```