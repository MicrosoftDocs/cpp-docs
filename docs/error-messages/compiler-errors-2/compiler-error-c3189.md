---
title: "Compiler Error C3189"
description: "Learn more about: Compiler Error C3189"
ms.date: 11/04/2016
f1_keywords: ["C3189"]
helpviewer_keywords: ["C3189"]
---
# Compiler Error C3189

> 'typeid\<type abstract declarator>': this syntax is no longer supported, use ::typeid instead

## Remarks

An obsolete form of [typeid](../../extensions/typeid-cpp-component-extensions.md) was used, use the new form.

This error is obsolete in Visual Studio 2022 and later versions.

## Example

The following example generates C3189:

```cpp
// C3189.cpp
// compile with: /clr
int main() {
   System::Type^ t  = typeid<System::Object>;   // C3189
   System::Type^ t2  = System::Object::typeid;   // OK
}
```
