---
description: "Learn more about: Fatal Error C1191"
title: "Fatal Error C1191"
ms.date: "11/04/2016"
f1_keywords: ["C1191"]
helpviewer_keywords: ["C1191"]
ms.assetid: 2888c6c4-b4e6-449e-8ee0-7917f31086df
---
# Fatal Error C1191

'dll' can only be imported at global scope

The instruction to import mscorlib.dll into a program that uses /clr programming cannot appear in a namespace or function, but must appear at global scope.

The following sample generates C1191:

```cpp
// C1191.cpp
// compile with: /clr
namespace sample {
   #using <mscorlib.dll>   // C1191 not at global scope
}
```

Possible resolution:

```cpp
// C1191b.cpp
// compile with: /clr /c
#using <mscorlib.dll>
namespace sample {}
```
