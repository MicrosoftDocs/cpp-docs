---
description: "Learn more about: Compiler Error C2158"
title: "Compiler Error C2158"
ms.date: "11/04/2016"
f1_keywords: ["C2158"]
helpviewer_keywords: ["C2158"]
ms.assetid: 39028899-e95c-4809-8e65-6111118641ee
---
# Compiler Error C2158

'type' : #pragma make_public directive is currently supported for native non-template types only

The [make_public](../../preprocessor/make-public.md) pragma can only be applied to a native, non-template type.

## Example

The following sample generates C2158.

```cpp
// C2158.cpp
// compile with: /clr /c
ref class A {};
#pragma make_public(A)   // C2158

template< typename T >
class B {};
#pragma make_public(B)   // C2158
#pragma make_public(B<int>)   // C2158

void C () {}
#pragma make_public(C)   // C2158

class D {};
#pragma make_public(D)   // OK
```
