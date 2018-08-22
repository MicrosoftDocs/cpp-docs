---
title: "defaultvalue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.defaultvalue"]
dev_langs: ["C++"]
helpviewer_keywords: ["defaultvalue attribute"]
ms.assetid: efa5d050-b2cc-4d9e-9b8e-79954f218d3a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# defaultvalue

Allows specification of a default value for a typed optional parameter.

## Syntax

```cpp  
[ defaultvalue= value ]  
```

### Parameters

*value*  
The default value for the parameter.

## Remarks

The **defaultvalue** C++ attribute has the same functionality as the [defaultvalue](http://msdn.microsoft.com/library/windows/desktop/aa366793) MIDL attribute.

## Example

The following code shows an interface method using the **defaultvalue** attribute:

```cpp  
// cpp_attr_ref_defaultvalue.cpp  
// compile with: /LD  
#include <windows.h>

[export] typedef long HRESULT;  
[export, ptr, string] typedef unsigned char * MY_STRING_TYPE;

[  uuid("479B29EE-9A2C-11D0-B696-00A0C903487A"),  
   dual, oleautomation,  
   helpstring("IFireTabCtrl Interface"),  
   helpcontext(122), pointer_default(unique) ]

__interface IFireTabCtrl : IDispatch {  
   [bindable, propget] HRESULT get_Size([out, retval, defaultvalue("33")] long *nSize);  
   [bindable, propput] HRESULT put_Size([in] int nSize);  
};

[ module(name="ATLFIRELib", uuid="479B29E1-9A2C-11D0-B696-00A0C903487A",  
      version="1.0", helpstring="ATLFire 1.0 Type Library") ];  
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Parameter Attributes](../windows/parameter-attributes.md)  
[out](../windows/out-cpp.md)  
[retval](../windows/retval.md)  
[in](../windows/in-cpp.md)  
[pointer_default](../windows/pointer-default.md)  
[unique](../windows/unique-cpp.md)   