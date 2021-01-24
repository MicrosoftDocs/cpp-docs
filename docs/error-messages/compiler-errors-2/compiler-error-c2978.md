---
description: "Learn more about: Compiler Error C2978"
title: "Compiler Error C2978"
ms.date: "11/04/2016"
f1_keywords: ["C2978"]
helpviewer_keywords: ["C2978"]
ms.assetid: 5e7bee82-e266-4ccd-ad2e-ee89606ec5bf
---
# Compiler Error C2978

syntax error : expected 'keyword1' or 'keyword2'; found type 'keyword3'; non-type parameters are not supported in generics

A generic class was declared incorrectly. See [Generics](../../extensions/generics-cpp-component-extensions.md)for more information.

## Example

The following sample generates C2978.

```cpp
// C2978.cpp
// compile with: /clr /c
generic <ref class T>   // C2978
// try the following line instead
// generic <typename T>   // OK
ref class Utils {
   static void sort(T elems, size_t size);
};

generic <int>
// try the following line instead
// generic <class T>
ref class Utils2 {
   static void sort(T elems, size_t size);
};
```
