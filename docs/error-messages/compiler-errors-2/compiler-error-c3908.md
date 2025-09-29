---
title: "Compiler Error C3908"
description: "Learn more about: Compiler Error C3908"
ms.date: 11/04/2016
f1_keywords: ["C3908"]
helpviewer_keywords: ["C3908"]
---
# Compiler Error C3908

> access level less restrictive than 'construct'

## Remarks

A property accessor method (get or set) cannot have less restrictive access than the access specified on the property itself.  Similarly, for event accessor methods.

For more information, see [property](../../extensions/property-cpp-component-extensions.md) and [event](../../extensions/event-cpp-component-extensions.md).

## Example

The following example generates C3908:

```cpp
// C3908.cpp
// compile with: /clr
ref class X {
protected:
   property int i {
   public:   // C3908 property i is protected
      int get();
   private:
      void set(int);   // OK more restrictive
   };
};
```
