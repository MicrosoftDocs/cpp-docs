---
title: "CUtlProps Class"
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
ms.topic: article
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
caps.latest.revision: 9
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
# CUtlProps Class
Implements properties for a variety of OLE DB property interfaces (for example, `IDBProperties`, `IDBProperties`, and `IRowsetInfo`).  
  
## Syntax  
  
```  
template < class T >  
class ATL_NO_VTABLE CUtlProps : public CUtlPropsBase  
```  
  
#### Parameters  
 `T`  
 The class that contains the `BEGIN_PROPSET_MAP`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetPropValue](../VS_visualcpp/CUtlProps--GetPropValue.md)|Gets a property from a property set.|  
|[IsValidValue](../VS_visualcpp/CUtlProps--IsValidValue.md)|Used to validate a value before setting a property.|  
|[OnInterfaceRequested](../VS_visualcpp/CUtlProps--OnInterfaceRequested.md)|Handles requests for an optional interface when a consumer calls a method on an object creation interface.|  
|[OnPropertyChanged](../VS_visualcpp/CUtlProps--OnPropertyChanged.md)|Called after setting a property to handle chained properties.|  
|[SetPropValue](../VS_visualcpp/CUtlProps--SetPropValue.md)|Sets a property in a property set.|  
  
## Remarks  
 Most of this class is an implementation detail.  
  
 `CUtlProps` contains two members for setting properties internally: [GetPropValue](../VS_visualcpp/CUtlProps--GetPropValue.md) and [SetPropValue](../VS_visualcpp/CUtlProps--SetPropValue.md).  
  
 For more information on the macros used in a property set map, see [BEGIN_PROPSET_MAP](../VS_visualcpp/BEGIN_PROPSET_MAP.md) and [END_PROPSET_MAP](../VS_visualcpp/END_PROPSET_MAP.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)