---
title: "string (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.string"]
dev_langs: ["C++"]
helpviewer_keywords: ["string attribute"]
ms.assetid: ddde900a-2e99-4fcd-86e8-57e1bdba7c93
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# string (C++)
Indicates that the one-dimensional `char`, `wchar_t`, **byte** (or equivalent) array or the pointer to such an array must be treated as a string.  
  
## Syntax  
  
```  
  
[string]  
  
```  
  
## Remarks  
 The **string** C++ attribute has the same functionality as the [string](http://msdn.microsoft.com/library/windows/desktop/aa367270) MIDL attribute.  
  
## Example  
 The following code shows how to use **string** on an interface and on a typedef:  
  
```  
// cpp_attr_ref_string.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
[export, string] typedef char a[21];  
[dispinterface, restricted, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl  
{  
   [id(1)] HRESULT Method3([in, string] char *pC);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Array or pointer to an array, interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Array Attributes](../windows/array-attributes.md)   
 [export](../windows/export.md)   