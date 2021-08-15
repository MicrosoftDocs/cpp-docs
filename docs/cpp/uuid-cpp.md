---
description: "Learn more about: uuid (C++)"
title: "uuid (C++)"
ms.date: "11/04/2016"
f1_keywords: ["uuid_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], uuid", "uuid __declspec keyword"]
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
---
# uuid (C++)

**Microsoft Specific**

The compiler attaches a GUID to a class or structure declared or defined (full COM object definitions only) with the **`uuid`** attribute.

## Syntax

```
__declspec( uuid("ComObjectGUID") ) declarator
```

## Remarks

The **`uuid`** attribute takes a string as its argument. This string names a GUID in normal registry format with or without the **{ }** delimiters. For example:

```cpp
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;
```

This attribute can be applied in a redeclaration. This allows the system headers to supply the definitions of interfaces such as `IUnknown`, and the redeclaration in some other header (such as \<comdef.h>) to supply the GUID.

The keyword [__uuidof](../cpp/uuidof-operator.md) can be applied to retrieve the constant GUID attached to a user-defined type.

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
