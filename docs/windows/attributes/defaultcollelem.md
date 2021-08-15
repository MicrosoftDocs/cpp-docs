---
description: "Learn more about: defaultcollelem"
title: "defaultcollelem"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.defaultcollelem"]
helpviewer_keywords: ["defaultcollelem attribute"]
ms.assetid: 3dbbd293-8b83-4f70-a36b-64cc1d0b6713
---
# defaultcollelem

Used for Visual Basic code optimization.

## Syntax

```cpp
[defaultcollelem]
```

## Remarks

The **defaultcollelem** C++ attribute has the same functionality as the [defaultcollelem](/windows/win32/Midl/defaultcollelem) MIDL attribute.

## Example

The following code shows an interface method using the **defaultcollelem** attribute:

```cpp
// cpp_attr_ref_defaultcollelem.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyForm
{
   [propget, id(1), bindable, defaultcollelem, displaybind, defaultbind, requestedit] HRESULT P1([out, retval] long *nSize);
   [propput, id(1), bindable, defaultcollelem, displaybind, defaultbind, requestedit] HRESULT P1([in] long nSize);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)
