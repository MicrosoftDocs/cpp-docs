---
description: "Learn more about: Compiler Error C3050"
title: "Compiler Error C3050"
ms.date: "11/04/2016"
f1_keywords: ["C3050"]
helpviewer_keywords: ["C3050"]
ms.assetid: ee090a0b-29cc-4215-a2f9-d82af79b8e82
---
# Compiler Error C3050

'type1' : a ref class cannot inherit from 'type1'

`System::ValueType` cannot be a base class for a reference type.

The following sample generates C3050:

```cpp
// C3050.cpp
// compile with: /clr /LD
ref struct X : System::ValueType {};   // C3050
ref struct Y {};   // OK
```
