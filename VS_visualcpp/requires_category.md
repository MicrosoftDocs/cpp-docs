---
title: "requires_category"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: a645fdc6-1ef5-414d-8c56-5fe2686d4687
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# requires_category
Specifies the required component categories of the target class.  
  
## Syntax  
  
```  
  
     [ requires_category(   
  requires_category  
) ]  
```  
  
#### Parameters  
 *requires_category*  
 The ID of the required category.  
  
## Remarks  
 The **requires_category** C++ attribute specifies the component categories required by the target class. For more information, see [REQUIRED_CATEGORY](../Topic/REQUIRED_CATEGORY.md).  
  
 This attribute requires that the [coclass](../VS_visualcpp/coclass.md), [progid](../VS_visualcpp/progid.md), or [vi_progid](../VS_visualcpp/vi_progid.md) attribute (or another attribute that implies one of these) also be applied to the same element.  
  
## Example  
 The following code requires that the object implement the Control category.  
  
```  
// cpp_attr_ref_requires_category.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="MyLibrary")];  
  
[ coclass, requires_category("CATID_Control"),  
  uuid("1e1a2436-f3ea-4ff3-80bf-5409370e8144")]  
class CMyClass {};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|One or more of the following: **coclass**, **progid**, or **vi_progid**.|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [COM Attributes](../VS_visualcpp/COM-Attributes.md)   
 [implements_category](../VS_visualcpp/implements_category.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)