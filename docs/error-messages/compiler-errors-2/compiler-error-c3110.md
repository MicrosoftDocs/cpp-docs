---
description: "Learn more about: Compiler Error C3110"
title: "Compiler Error C3110"
ms.date: "11/04/2016"
f1_keywords: ["C3110"]
helpviewer_keywords: ["C3110"]
ms.assetid: 821dc71f-896e-4b2d-af0e-aa9932934b7b
---
# Compiler Error C3110

'function_name' : you cannot overload a COM interface method

An interface that is prefaced by an interface attribute, such as:

- [custom](../../windows/attributes/custom-cpp.md)

- [dispinterface](../../windows/attributes/dispinterface.md)

- [dual](../../windows/attributes/dual.md)

- [object](../../windows/attributes/object-cpp.md)

cannot be overloaded. For example:

```cpp
// C3110.cpp
#include <unknwn.h>
[ object, uuid= "4F98A180-EF37-11D1-978D-0000F805D73B" ]
__interface ITestInterface
{
   HRESULT mf1(void);
   HRESULT mf1(BSTR); // C3110
};

int main()
{
}
```
