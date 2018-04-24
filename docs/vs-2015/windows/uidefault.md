---
title: "uidefault | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.uidefault"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "uidefault attribute"
ms.assetid: 200de0e0-2e34-40a2-bae4-8d485a62264d
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# uidefault
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [uidefault](https://docs.microsoft.com/cpp/windows/uidefault).  
  
Indicates that the type information member is the default member for display in the user interface.  
  
## Syntax  
  
```  
  
[uidefault]  
  
```  
  
## Remarks  
 The **uidefault** C++ attribute has the same functionality as the [uidefault](http://msdn.microsoft.com/library/windows/desktop/aa367292) MIDL attribute.  
  
## Example  
 The following code shows a sample of **uidefault**:  
  
```  
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
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



