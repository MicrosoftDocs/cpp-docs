---
description: "Learn more about: Compiler Error C2181"
title: "Compiler Error C2181"
ms.date: "11/04/2016"
f1_keywords: ["C2181"]
helpviewer_keywords: ["C2181"]
ms.assetid: d52b2fe4-566a-40a9-b8e2-8dce1f287668
---
# Compiler Error C2181

illegal else without matching if

Each **`else`** must have a matching **`if`**.

The following sample generates C2181:

```cpp
// C2181.cpp
int main() {
   int i = 0;
   else   // C2181
      i = 1;
}
```

Possible resolution:

```cpp
// C2181b.cpp
int main() {
   int i = 0;
   if(i)
      i = 0;
   else
      i = 1;
}
```
