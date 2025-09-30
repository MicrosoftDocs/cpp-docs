---
title: "Compiler Error C3110"
description: "Learn more about: Compiler Error C3110"
ms.date: 11/04/2016
f1_keywords: ["C3110"]
helpviewer_keywords: ["C3110"]
---
# Compiler Error C3110

> 'function_name' : you cannot overload a COM interface method

## Remarks

An interface that is prefaced by an interface attribute, such as:

- [custom](../../windows/attributes/custom-cpp.md)

- [dispinterface](../../windows/attributes/dispinterface.md)

- [dual](../../windows/attributes/dual.md)

- [object](../../windows/attributes/object-cpp.md)

cannot be overloaded.

## Example

For example:

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
