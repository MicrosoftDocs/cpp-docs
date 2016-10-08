---
title: "readonly (C++)"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 1246cadd-5304-43a9-beea-51153d12704d
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# readonly (C++)
Prohibits assignment to a data member.  
  
## Syntax  
  
```  
  
[readonly]  
  
```  
  
## Remarks  
 The **readonly** C++ attribute has the same functionality as the [readonly](http://msdn.microsoft.com/library/windows/desktop/aa367152) MIDL attribute.  
  
 If you want to prohibit modification of a method parameter, then use the [in](../VS_visualcpp/in--C---.md) attribute.  
  
## Example  
 The following code shows a use of the **readonly** attribute:  
  
```  
// cpp_attr_ref_readonly.cpp  
// compile with: /LD  
[idl_quote("midl_pragma warning(disable:2461)")];  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
  
[dispinterface, uuid(11111111-1111-1111-1111-111111111111)]  
__interface IFireTabCtrl  
{  
   [readonly, id(1)] int i();  
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
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Data Member Attributes](../VS_visualcpp/Data-Member-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)