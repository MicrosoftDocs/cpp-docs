---
title: "Compiler Error C2262"
description: "Learn more about: Compiler Error C2262"
ms.date: 11/04/2016
f1_keywords: ["C2262"]
helpviewer_keywords: ["C2262"]
---
# Compiler Error C2262

> 'attribute_specifiers' : InternalsVisibleTo declarations cannot have a version, culture, or processor architecture specified

## Remarks

The <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> attribute was not specified correctly.

## Example

The following example generates C2262.

```cpp
// C2262.cpp
// compile with: /clr /c
using namespace System::Runtime::CompilerServices;
[assembly: InternalsVisibleTo("assembly_name, version=1.2.3.7")];   // C2262
[assembly: InternalsVisibleTo("assembly_name ")];   // OK
```
