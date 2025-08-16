---
title: "Compiler Error C3227"
description: "Learn more about: Compiler Error C3227"
ms.date: 11/04/2016
f1_keywords: ["C3227"]
helpviewer_keywords: ["C3227"]
---
# Compiler Error C3227

> 'parameter' : cannot use 'keyword' to allocate a generic type

## Remarks

In order to instantiate a type, an appropriate constructor is required. However, the compiler is not able to ensure that an appropriate constructor is available.

You can use templates instead of generics to resolve this error, or you can use one of several methods to create an instance of the type.

## Example

The following example generates C3227.

```cpp
// C3227.cpp
// compile with: /clr /c
generic<class T> interface class ICreate {
   static T Create();
};

generic <class T>
where T : ICreate<T>
ref class C {
   void f() {
      T t = new T;   // C3227

      // OK
      T t2 = ICreate<T>::Create();
      T t3 = safe_cast<T>( System::Activator::CreateInstance(T::typeid) );
   }
};
```
