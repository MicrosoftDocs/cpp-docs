---
description: "Learn more about: Compiler Error C3883"
title: "Compiler Error C3883"
ms.date: "11/04/2016"
f1_keywords: ["C3883"]
helpviewer_keywords: ["C3883"]
ms.assetid: cdd1c1f4-f268-4469-9c62-d52303114b0c
---
# Compiler Error C3883

'var' : an initonly static data member must be initialized

A variable marked with [initonly](../../dotnet/initonly-cpp-cli.md) was not initialized correctly.

The following sample generates C3883:

```cpp
// C3883.cpp
// compile with: /clr
ref struct Y1 {
   initonly
   static int staticConst1;   // C3883
};
```

The following sample demonstrates a possible resolution:

```cpp
// C3883b.cpp
// compile with: /clr /c
ref struct Y1 {
   initonly
   static int staticConst2 = 0;
};
```

The following sample shows how to initialize in a static constructor:

```cpp
// C3883c.cpp
// compile with: /clr /LD
ref struct Y1 {
   initonly
   static int staticConst1;

   static Y1() {
      staticConst1 = 0;
   }
};
```
