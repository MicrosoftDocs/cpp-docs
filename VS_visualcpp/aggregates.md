---
title: "aggregates"
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
ms.assetid: 67a084c9-941f-474b-a029-9c93b38ebe9a
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
# aggregates
Indicates that the object aggregates the object specified by the CLSID.  
  
## Syntax  
  
```  
  
      [ aggregates(  
   clsid,  
   variable_name  
) ]  
```  
  
#### Parameters  
 `clsid`  
 Specifies the CLSID of the aggregatable object.  
  
 `variable_name`  
 The name of the variable that is to be inserted. This variable contains the **IUnknown** of the object being aggregated.  
  
## Remarks  
 When applied to an object, the **aggregates** C++ attribute implements an outer wrapper for the object being aggregated (specified by `clsid`).  
  
 This attribute requires that the [coclass](../VS_visualcpp/coclass.md), [progid](../VS_visualcpp/progid.md), or [vi_progid](../VS_visualcpp/vi_progid.md) attribute (or another attribute that implies one of these) also be applied to the same element. If any single attribute is used, the other two are automatically applied. For example, if **progid** is applied, **vi_progid** and **coclass** are also applied.  
  
 **ATL Projects**  
  
 If this attribute is used within a project that uses ATL, the behavior of the attribute changes. First, the following entry is added to the COM map of the target object:  
  
```  
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(_m_spAttrXXX, clsid)  
```  
  
 Second, the [DECLARE_GET_CONTROLLING_UNKNOWN](../Topic/DECLARE_GET_CONTROLLING_UNKNOWN.md) macro is also added.  
  
## Example  
  
```  
// cpp_attr_ref_aggregates.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
// requires 'aggregatable.dll'  
// see aggregatable attribute to create 'aggregatable.dll'  
class DECLSPEC_UUID("1a8369cc-1c91-42c4-befa-5a5d8c9d2529") CMyClass;  
  
[module (name="MYObject")];  
[object, uuid("ab006d85-e754-47c5-9ef4-2744ff32a20c")]  
__interface IObject  
{  
};  
  
[ coclass, aggregates(__uuidof(CMyClass)),   
  uuid("91cb2c06-8931-432a-baac-206e55c4edfb")]  
struct CObject : IObject  
{  
   int i;  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|Yes|  
|**Required attributes**|One or more of the following: **coclass**, **progid**, or **vi_progid**.|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [COM Attributes](../VS_visualcpp/COM-Attributes.md)   
 [Class Attributes](../VS_visualcpp/Class-Attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../VS_visualcpp/Typedef--Enum--Union--and-Struct-Attributes.md)   
 [Aggregation](http://msdn.microsoft.com/library/windows/desktop/ms686558)   
 [Aggregatable](http://msdn.microsoft.com/library/windows/desktop/aa366721)   
 [COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](../Topic/COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)