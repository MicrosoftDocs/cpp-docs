---
title: "Fatal Error C1191"
description: "Learn more about: Fatal Error C1191"
ms.date: 11/04/2016
f1_keywords: ["C1191"]
helpviewer_keywords: ["C1191"]
---
# Fatal Error C1191

> 'dll' can only be imported at global scope

## Remarks

The instruction to import mscorlib.dll into a program that uses /clr programming cannot appear in a namespace or function, but must appear at global scope.

## Example

The following example generates C1191:

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
