---
description: "Learn more about: Compiler Error C3115"
title: "Compiler Error C3115"
ms.date: "11/04/2016"
f1_keywords: ["C3115"]
helpviewer_keywords: ["C3115"]
ms.assetid: 51726145-9782-4ec9-84b9-286f366d9cbd
---
# Compiler Error C3115

'attribute': this attribute is not allowed on 'construct'

An attribute was applied to a construct for which it was not intended.  See [Attributes by Usage](../../windows/attributes/attributes-by-usage.md) for more information.

## Example

The following sample generates C3115.

```cpp
// C3115.cpp
// compile with: /c
#include <unknwn.h>
[module(name="xx")];

[object, helpstringdll(xx.dll), uuid("00000000-0000-0000-0000-000000000001")]   // C3115
// try the following line instead
// [object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI {
   HRESULT xx();
};
```
