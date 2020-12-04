---
description: "Learn more about: Compiler Error C3247"
title: "Compiler Error C3247"
ms.date: "11/04/2016"
f1_keywords: ["C3247"]
helpviewer_keywords: ["C3247"]
ms.assetid: f9a2bbb5-3fce-40bf-9fd3-835a5f164dbb
---
# Compiler Error C3247

'class1' : a coclass cannot inherit from another coclass 'class2'

A class marked with the [coclass](../../windows/attributes/coclass.md) attribute cannot inherit from another class marked with the `coclass` attribute.

The following sample generates C3247:

```cpp
// C3247.cpp
[module(name="MyLib")];
[coclass]
class a {
};

[coclass]
class b : public a {   // C3247
};
int main() {
}
```
