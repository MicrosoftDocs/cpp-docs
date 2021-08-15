---
description: "Learn more about: defaultvalue"
title: "defaultvalue (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.defaultvalue"]
helpviewer_keywords: ["defaultvalue attribute"]
ms.assetid: efa5d050-b2cc-4d9e-9b8e-79954f218d3a
---
# defaultvalue

Allows specification of a default value for a typed optional parameter.

## Syntax

```cpp
[ defaultvalue= value ]
```

### Parameters

*value*<br/>
The default value for the parameter.

## Remarks

The **defaultvalue** C++ attribute has the same functionality as the [defaultvalue](/windows/win32/Midl/defaultvalue) MIDL attribute.

## Example

The following code shows an interface method using the **defaultvalue** attribute:

```cpp
// cpp_attr_ref_defaultvalue.cpp
// compile with: /LD
#include <windows.h>

[export] typedef long HRESULT;
[export, ptr, string] typedef unsigned char * MY_STRING_TYPE;

[  uuid("479B29EE-9A2C-11D0-B696-00A0C903487A"), dual, oleautomation, helpstring("IFireTabCtrl Interface"), helpcontext(122), pointer_default(unique) ]

__interface IFireTabCtrl : IDispatch {
   [bindable, propget] HRESULT get_Size([out, retval, defaultvalue("33")] long *nSize);
   [bindable, propput] HRESULT put_Size([in] int nSize);
};

[ module(name="ATLFIRELib", uuid="479B29E1-9A2C-11D0-B696-00A0C903487A",    version="1.0", helpstring="ATLFire 1.0 Type Library") ];
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[out](out-cpp.md)<br/>
[retval](retval.md)<br/>
[in](in-cpp.md)<br/>
[pointer_default](pointer-default.md)<br/>
[unique](unique-cpp.md)
