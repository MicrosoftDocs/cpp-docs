---
title: "restricted | Microsoft Docs"
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
  - "vc-attr.restricted"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "restricted attribute"
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# restricted
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [restricted](https://docs.microsoft.com/cpp/windows/restricted).  
  
Specifies that a member of a module, interface, or dispinterface cannot be called arbitrarily.  
  
## Syntax  
  
```  
  
      [ restricted(  
   interfaces  
) ]  
```  
  
#### Parameters  
 `interfaces`  
 One or more interfaces that may not be called arbitrarily on a COM object. This parameter is only valid when applied to a class.  
  
## Remarks  
 The **restricted** C++ attribute has the same functionality as the [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) MIDL attribute.  
  
## Example  
 The following code shows how to use the **restricted** attribute:  
  
```  
// cpp_attr_ref_restricted.cpp  
// compile with: /LD  
#include "windows.h"  
#include "unknwn.h"  
[module(name="MyLib")];  
  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface a  
{  
};  
  
[object, uuid("00000000-0000-0000-0000-000000000002")]  
__interface b  
{  
};  
  
[coclass, restricted(a,b), uuid("00000000-0000-0000-0000-000000000003")]  
class c : public a, public b  
{  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface method, `interface`, **class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|**coclass** (when applied to **class** or `struct`)|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



