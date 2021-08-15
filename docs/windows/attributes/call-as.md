---
description: "Learn more about: call_as"
title: "call_as (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.call_as"]
helpviewer_keywords: ["call_as attribute"]
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
---
# call_as

Enables a [local](local-cpp.md) function to be mapped to a remote function so that when the remote function is called, the local function is invoked.

## Syntax

```cpp
[ call_as(function) ]
```

### Parameters

*function*<br/>
The local function that you want to be called when a remote function is invoked.

## Remarks

The **call_as** C++ attribute has the same functionality as the [call_as](/windows/win32/Midl/call-as) MIDL attribute.

## Example

The following code shows how you can use **call_as** to map a nonremotable function (`f1`) to a remotable function (`Remf1`):

```cpp
// cpp_attr_ref_call_as.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];
[dual, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMInterface {
   [local] HRESULT f1 ( int i );
   [call_as(f1)] HRESULT Remf1 ( int i );
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[local](local-cpp.md)
