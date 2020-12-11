---
description: "Learn more about: appobject"
title: "appobject (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.appobject"]
helpviewer_keywords: ["appobject attribute"]
ms.assetid: 8ce30b73-e945-403e-a755-6bc78078a695
---
# appobject

Identifies the coclass as an application object, which is associated with a full .exe application, and indicates that the functions and properties of the coclass are globally available in this [type library](../../mfc/automation-clients-using-type-libraries.md).

## Syntax

```cpp
[appobject]
```

## Remarks

The **appobject** C++ attribute has the same functionality as the [appobject](/windows/win32/Midl/appobject) MIDL attribute.

## Example

The following code shows a simple class definition preceded by an attribute block that includes **appobject**:

```cpp
// cpp_attr_ref_appobject.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib", uuid="f1ce17f0-a5df-4d26-95f6-0a122197ac5b")];

[object, uuid="905de6db-7a12-45ab-9f8b-b39f5112f010"]
__interface ICustom {};

[coclass, appobject,uuid="00395340-745f-4b69-bd58-e2921452b9fc"]
class A : public ICustom {
   int i;
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|`coclass`|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
