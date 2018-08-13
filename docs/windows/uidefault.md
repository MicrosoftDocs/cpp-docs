---
title: "uidefault | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.uidefault"]
dev_langs: ["C++"]
helpviewer_keywords: ["uidefault attribute"]
ms.assetid: 200de0e0-2e34-40a2-bae4-8d485a62264d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# uidefault
Indicates that the type information member is the default member for display in the user interface.  
  
## Syntax  
  
```cpp  
[uidefault]  
```  
  
## Remarks  
 The **uidefault** C++ attribute has the same functionality as the [uidefault](http://msdn.microsoft.com/library/windows/desktop/aa367292) MIDL attribute.  
  
## Example  
 The following code shows a sample of **uidefault**:  
  
```cpp  
// cpp_attr_ref_uidefault.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyLib")];  
  
[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface ICustom{  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
   [uidefault]HRESULT id0([in] long l);  
   [uidefault]HRESULT id1([in] long l);  
  
   [uidefault, propget] HRESULT get_y(int *y);  
   [uidefault, propput] HRESULT put_y(int y);  
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
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   