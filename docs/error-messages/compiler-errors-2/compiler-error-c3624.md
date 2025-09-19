---
title: "Compiler Error C3624"
description: "Learn more about: Compiler Error C3624"
ms.date: 11/04/2016
f1_keywords: ["C3624"]
helpviewer_keywords: ["C3624"]
---
# Compiler Error C3624

> 'type': use of this type requires a reference to assembly 'assembly'

## Remarks

An assembly (reference) needed to compile your code was not specified; pass the assembly to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive.

## Example

The following example generates C3624:

```cpp
// C3624.cpp
// compile with: /clr /c
#using <System.Windows.Forms.dll>

// Uncomment the following 2 lines to resolve.
// #using <System.dll>
// #using <System.Drawing.dll>

using namespace System;

public ref class MyForm : public Windows::Forms::Form {};   // C3624
```
