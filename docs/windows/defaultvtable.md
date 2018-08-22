---
title: "defaultvtable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.defaultvtable"]
dev_langs: ["C++"]
helpviewer_keywords: ["defaultvtable attribute"]
ms.assetid: 5b3ed483-f69e-44dd-80fc-952028eb9d73
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# defaultvtable

Defines an interface as the default vtable interface for a COM object.

## Syntax

```cpp  
[ defaultvtable(  
   interface  
) ]  
```

### Parameters

*interface*  
The designated interface that you want to have the default vtable for the COM object.

## Remarks

The **defaultvtable** C++ attribute has the same functionality as the [defaultvtable](http://msdn.microsoft.com/library/windows/desktop/aa366795) MIDL attribute.

## Example

The following code shows attributes on a class that use **defaultvtable** to specify a default interface:

```cpp  
// cpp_attr_ref_defaultvtable.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];

[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyI1 {  
   HRESULT x();  
};

[object, uuid("00000000-0000-0000-0000-000000000002")]  
__interface IMyI2 {  
   HRESULT x();  
};

[object, uuid("00000000-0000-0000-0000-000000000003")]  
__interface IMyI3 {  
   HRESULT x();  
};

[coclass, source(IMyI3, IMyI1), default(IMyI3, IMyI2), defaultvtable(IMyI1),  
uuid("00000000-0000-0000-0000-000000000004")]  
class CMyC3 : public IMyI3 {};  
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|No|
|**Required attributes**|**coclass**|
|**Invalid attributes**|None|

 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Class Attributes](../windows/class-attributes.md)   