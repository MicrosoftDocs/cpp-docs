---
title: "Compiler Error C3803"
description: "Learn more about: Compiler Error C3803"
ms.date: 11/04/2016
f1_keywords: ["C3803"]
helpviewer_keywords: ["C3803"]
---
# Compiler Error C3803

> 'property': property has a type that is incompatible with one of its accessors 'accessor'

## Remarks

The type of a property defined with [property](../../cpp/property-cpp.md) does not match the return type for one of its accessor functions.

## Example

The following example generates C3803:

```cpp
// C3803.cpp
struct A
{
   __declspec(property(get=GetIt)) int i;
   char GetIt()
   {
      return 0;
   }

   /*
   // try the following definition instead
   int GetIt()
   {
      return 0;
   }
   */
}; // C3803

int main()
{
}
```
