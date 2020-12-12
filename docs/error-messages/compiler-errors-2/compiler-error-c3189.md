---
description: "Learn more about: Compiler Error C3189"
title: "Compiler Error C3189"
ms.date: "11/04/2016"
f1_keywords: ["C3189"]
helpviewer_keywords: ["C3189"]
ms.assetid: b254de79-931e-4a59-a9f4-1c690d90ca5e
---
# Compiler Error C3189

'typeid\<type abstract declarator>': this syntax is no longer supported, use ::typeid instead

An obsolete form of [typeid](../../extensions/typeid-cpp-component-extensions.md) was used, use the new form.

The following sample generates C3189:

```cpp
// C3189.cpp
// compile with: /clr
int main() {
   System::Type^ t  = typeid<System::Object>;   // C3189
   System::Type^ t2  = System::Object::typeid;   // OK
}
```
