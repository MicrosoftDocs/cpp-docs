---
title: "Compiler Error C3223"
description: "Learn more about: Compiler Error C3223"
ms.date: 11/04/2016
f1_keywords: ["C3223"]
helpviewer_keywords: ["C3223"]
---
# Compiler Error C3223

> 'property' : you cannot apply 'typeid' to a property

## Remarks

You cannot apply [typeid](../../extensions/typeid-cpp-component-extensions.md) to a property.

## Example

The following example generates C3223.

```cpp
// C3223.cpp
// compile with: /clr
ref class R {
public:
   property int myprop;
};

int main() {
   System::Type^ type2 = R::myprop::typeid;   // C3223
}
```
