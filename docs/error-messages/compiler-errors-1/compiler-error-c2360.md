---
description: "Learn more about: Compiler Error C2360"
title: "Compiler Error C2360"
ms.date: "11/04/2016"
f1_keywords: ["C2360"]
helpviewer_keywords: ["C2360"]
ms.assetid: 51bfd2ee-8108-4777-aa93-148b9cebfa83
---
# Compiler Error C2360

initialization of 'identifier' is skipped by 'case' label

The initialization of `identifier` can be skipped in a **`switch`** statement. You cannot jump past a declaration with an initializer unless the declaration is enclosed in a block. (Unless it is declared within a block, the variable is within scope until the end of the **`switch`** statement.)

The following sample generates C2360:

```cpp
// C2360.cpp
int main() {
   int x = 0;
   switch ( x ) {
   case 0 :
      int i = 1;
      { int j = 1; }
   case 1 :   // C2360
      int k = 1;
   }
}
```

Possible resolution:

```cpp
// C2360b.cpp
int main() {
   int x = 0;
   switch ( x ) {
   case 0 :
      { int j = 1; int i = 1;}
   case 1 :
      int k = 1;
   }
}
```
