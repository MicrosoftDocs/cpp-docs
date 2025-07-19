---
title: "Compiler Error C2181"
description: "Learn more about: Compiler Error C2181"
ms.date: 11/04/2016
f1_keywords: ["C2181"]
helpviewer_keywords: ["C2181"]
---
# Compiler Error C2181

> illegal else without matching if

## Remarks

Each **`else`** must have a matching **`if`**.

## Example

The following example generates C2181:

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
