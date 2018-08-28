---
title: "async_uuid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.async_uuid"]
dev_langs: ["C++"]
helpviewer_keywords: ["async_uuid attribute"]
ms.assetid: 235cb0d7-be58-4dd9-983c-e2a21bbc42c6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# async_uuid

Specifies the UUID that directs the MIDL compiler to define both synchronous and asynchronous versions of a COM interface.

## Syntax

```cpp
[async_uuid (
   uuid
)]
```

### Parameters

*uuid*  
A UUID that identifies the version of the interface.

## Remarks

The **async_uuid** C++ attribute has the same functionality as the [async_uuid](https://msdn.microsoft.com/library/windows/desktop/aa366735) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_async_uuid.cpp
// compile with: /LD
#include <Windows.h>
[module(name="Test")];
[object, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb"),
async_uuid("e8583106-38fd-487e-912e-4fc8645c677e")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|`interface`|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|**dual**, **dispinterface**|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Interface Attributes](../windows/interface-attributes.md)  