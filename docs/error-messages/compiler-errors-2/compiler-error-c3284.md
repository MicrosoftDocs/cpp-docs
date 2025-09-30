---
title: "Compiler Error C3284"
description: "Learn more about: Compiler Error C3284"
ms.date: 11/04/2016
f1_keywords: ["C3284"]
helpviewer_keywords: ["C3284"]
---
# Compiler Error C3284

> the constraints for generic parameter 'parameter' of function 'function' must match the constraints for generic parameter 'parameter' of function 'function'

## Remarks

A virtual generic function must use the same constraints as a virtual function with the same name and set of arguments in the base class.

## Example

The following example generates C3284:

```cpp
// C3284.cpp
// compile with: /clr /c
// C3284 expected
public interface class IGettable {
   int Get();
};

public interface class B {
   generic<typename T>
   where T : IGettable
   virtual int mf(T t);
};

public ref class D : public B {
public:
   generic<typename T>
   // Uncomment the following line to resolve.
   // where T : IGettable
   virtual int mf(T t) {
      return 4;
   }
};
```
