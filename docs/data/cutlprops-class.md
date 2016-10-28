---
title: "CUtlProps Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CUtlProps"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CUtlProps class"
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
caps.latest.revision: 9
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[GetPropValue](../data/cutlprops--getpropvalue.md)|Gets a property from a property set.|  
|[IsValidValue](../data/cutlprops--isvalidvalue.md)|Used to validate a value before setting a property.|  
|[OnInterfaceRequested](../data/cutlprops--oninterfacerequested.md)|Handles requests for an optional interface when a consumer calls a method on an object creation interface.|  
|[OnPropertyChanged](../data/cutlprops--onpropertychanged.md)|Called after setting a property to handle chained properties.|  
|[SetPropValue](../data/cutlprops--setpropvalue.md)|Sets a property in a property set.|  
  
## Remarks  
 Most of this class is an implementation detail.  
  
 `CUtlProps` contains two members for setting properties internally: [GetPropValue](../data/cutlprops--getpropvalue.md) and [SetPropValue](../data/cutlprops--setpropvalue.md).  
  
 For more information on the macros used in a property set map, see [BEGIN_PROPSET_MAP](../data/begin_propset_map.md) and [END_PROPSET_MAP](../data/end_propset_map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)