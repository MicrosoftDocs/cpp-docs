---
description: "Learn more about: Compiler Error C3463"
title: "Compiler Error C3463"
ms.date: "11/04/2016"
f1_keywords: ["C3463"]
helpviewer_keywords: ["C3463"]
ms.assetid: 153efcc0-085c-4615-84ea-d22942618bdf
---
# Compiler Error C3463

'type': type not allowed in attribute 'implements'

An invalid type was passed to the [implements](../../windows/attributes/implements-cpp.md) attribute. For example, you can pass an interface to `implements`, but you cannot pass a pointer to an interface.

## Example

The following sample generates C3463.

```cpp
// C3463.cpp
// compile with: /c
#include <windows.h>
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface X {};

typedef X* PX;

[ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=PX) ]   // C3463
// try the following line instead
// [ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=X) ]
class CMyClass : public X {};
```
