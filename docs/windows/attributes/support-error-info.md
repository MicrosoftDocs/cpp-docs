---
title: "support_error_info (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.support_error_info"]
dev_langs: ["C++"]
helpviewer_keywords: ["support_error_info attribute"]
ms.assetid: 20a2b55c-4738-4b35-a71d-e5e9c3a7e3bc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# support_error_info

Implements support for returning detailed errors.

## Syntax

```cpp
[ support_error_info(error_interface=uuid) ]
```

### Parameters

*error_interface*<br/>
The identifier of the interface implementing `IErrorInfo`.

## Remarks

The **support_error_info** C++ attribute implements support for returning detailed, contextual errors encountered by the target object to the client. For the object to support errors, the methods of the `IErrorInfo` interface must be implemented by the object. For more information, see [Supporting IDispatch and IErrorInfo](../../atl/supporting-idispatch-and-ierrorinfo.md).

This attribute adds the [ISupportErrorInfoImpl](../../atl/reference/isupporterrorinfoimpl-class.md) class as a base class to the target object. This results in a default implementation of `ISupportErrorInfo` and can be used when a single interface generates errors on an object.

## Example

The following code adds default support for the `ISupportErrorInfo` interface to the `CMyClass` object.

```cpp
// cpp_attr_ref_support_error_info.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name="mymod")];
[object, uuid("f0b17d66-dc6e-4662-baaf-76758e09c878")]
__interface IMyErrors
{
};

[ coclass, support_error_info("IMyErrors"),
  uuid("854dd392-bdc7-4781-8667-8757936f2a4f") ]
class CMyClass
{
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**|
|**Repeatable**|Yes|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[COM Attributes](com-attributes.md)<br/>
[Class Attributes](class-attributes.md)  