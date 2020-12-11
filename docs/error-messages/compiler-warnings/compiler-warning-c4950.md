---
description: "Learn more about: Compiler Warning C4950"
title: "Compiler Warning C4950"
ms.date: "11/04/2016"
f1_keywords: ["C4950"]
helpviewer_keywords: ["C4950"]
ms.assetid: 50226a5c-c664-4d09-ac59-e9e874ca244f
---
# Compiler Warning C4950

'type_or_member' : marked as obsolete

A member or type was marked as obsolete with the <xref:System.ObsoleteAttribute> attribute.

C4950 is always issued as an error. You can turn off this warning by using the [warning](../../preprocessor/warning.md) pragma directive or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.

## Example

The following sample generates C4950:

```cpp
// C4950.cpp
// compile with: /clr
using namespace System;

// Any reference to Func3 should generate an error with message
[System::ObsoleteAttribute("Will be removed in next version", true)]
Int32 Func3(Int32 a, Int32 b) {
   return (a + b);
}

int main() {
   Int32 MyInt3 = ::Func3(2, 2);   // C4950
}
```
