---
description: "Learn more about: Compiler Error C3453"
title: "Compiler Error C3453"
ms.date: "11/04/2016"
f1_keywords: ["C3453"]
helpviewer_keywords: ["C3453"]
ms.assetid: dbefdbcf-f697-4239-b7a5-1d99b85e9e7f
---
# Compiler Error C3453

'attribute': attribute not applied because qualifier 'assembly' did not match

Assembly or module level attributes can only be specified as stand-alone instructions.

## Example

The following sample generates C3453.

```cpp
// C3453.cpp
// compile with: /clr /c
[assembly:System::CLSCompliant(true)]   // C3453
// try the following line instead
// [assembly:System::CLSCompliant(true)];
ref class X {};
```
