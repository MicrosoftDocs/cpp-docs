---
description: "Learn more about: iid_is"
title: "iid_is (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.iid_is"]
helpviewer_keywords: ["iid_is attribute"]
ms.assetid: 2f9b42a9-7130-4b08-9b1e-0d5d360e10ff
---
# iid_is

Specifies the IID of the COM interface pointed to by an interface pointer.

## Syntax

```cpp
[ iid_is("expression") ]
```

### Parameters

*expression*<br/>
A C language expression that specifies an IID of a COM interface pointed to by an interface pointer.

## Remarks

The **iid_is** C++ attribute has the same functionality as the [iid_is](/windows/win32/Midl/iid-is) MIDL attribute.

## Example

The following code shows the use of **iid_is**:

```cpp
// cpp_attr_ref_iid_is.cpp
// compile with: /LD
#include "wtypes.h"
#include "unknwn.h"
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl : IDispatch
{
   [id(1)] HRESULT CreateInstance([in] REFIID riid,[out, iid_is("riid")]
   IUnknown ** ppvObject);
};

[module(name="ATLFIRELib")];
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface parameter, data member|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)
