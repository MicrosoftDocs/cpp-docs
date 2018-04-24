---
title: "public (C++ Attributes) | Microsoft Docs"
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
  - "vc-attr.public"
  - "vc-attr.public_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "public attribute"
ms.assetid: c42e1fd5-6cb1-48fe-8a03-95f2a2e0137c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# public (C++ Attributes)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [public (C++ Attributes)](https://docs.microsoft.com/cpp/windows/public-cpp-attributes).  
  
Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.  
  
## Syntax  
  
```  
  
[public]  
  
```  
  
## Remarks  
 The **public** C++ attribute has the same functionality as the [public](http://msdn.microsoft.com/library/windows/desktop/aa367150) MIDL attribute.  
  
## Example  
 The following code shows how to use the **public** attribute:  
  
```  
// cpp_attr_ref_public.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
[export, public] typedef long MEMBERID;  
  
[dispinterface, uuid(99999999-9999-9999-9999-000000000000)]  
__interface IFireTabCtrl : IDispatch  
{  
   [id(2)] long procedure ([in, optional] VARIANT i);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`typedef`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



