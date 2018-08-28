---
title: "defaultcollelem | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.defaultcollelem"]
dev_langs: ["C++"]
helpviewer_keywords: ["defaultcollelem attribute"]
ms.assetid: 3dbbd293-8b83-4f70-a36b-64cc1d0b6713
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# defaultcollelem

Used for Visual Basic code optimization.

## Syntax

```cpp
[defaultcollelem]
```

## Remarks

The **defaultcollelem** C++ attribute has the same functionality as the [defaultcollelem](https://msdn.microsoft.com/library/windows/desktop/aa366792) MIDL attribute.

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
   [propget, id(1), bindable, defaultcollelem, displaybind,
   defaultbind, requestedit] HRESULT P1([out, retval] long *nSize);
   [propput, id(1), bindable, defaultcollelem, displaybind,
   defaultbind, requestedit] HRESULT P1([in] long nSize);
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  