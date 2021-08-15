---
description: "Learn more about: Compiler Error C2032"
title: "Compiler Error C2032"
ms.date: "11/04/2016"
f1_keywords: ["C2032"]
helpviewer_keywords: ["C2032"]
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
---
# Compiler Error C2032

'identifier' : function cannot be member of struct/union 'structorunion'

The structure or union has a member function, which is allowed in C++ but not in C. To resolve the error, either compile as a C++ program or remove the member function.

The following sample generates C2032:

```c
// C2032.c
struct z {
   int i;
   void func();   // C2032
};
```

Possible resolution:

```c
// C2032b.c
// compile with: /c
struct z {
   int i;
};
```
