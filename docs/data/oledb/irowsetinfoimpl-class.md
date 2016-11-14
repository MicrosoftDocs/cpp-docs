---
title: "IRowsetInfoImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetInfoImpl"
  - "IRowsetInfoImpl"
  - "ATL::IRowsetInfoImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetInfoImpl class"
ms.assetid: 9c654155-7727-464e-bd31-143e68391a47
caps.latest.revision: 9
author: "mikeblome"
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
# IRowsetInfoImpl Class
Provides an implementation for the [IRowsetInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx) interface.  
  
## Syntax  
  
```  
template <class T, class PropClass = T>  
class ATL_NO_VTABLE IRowsetInfoImpl :   
   public IRowsetInfo,    
   public CUtlProps<PropClass>  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IRowsetInfoImpl`.  
  
 `PropClass`  
 A user-definable property class that defaults to `T`.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/irowsetinfoimpl-getproperties.md)|Returns the current settings of all properties supported by the rowset.|  
|[GetReferencedRowset](../../data/oledb/irowsetinfoimpl-getreferencedrowset.md)|Returns an interface pointer to the rowset to which a bookmark applies.|  
|[GetSpecification](../../data/oledb/irowsetinfoimpl-getspecification.md)|Returns an interface pointer on the object (command or session) that created this rowset.|  
  
## Remarks  
 A mandatory interface on rowsets. This class implements the rowset properties by using the [property set map](../../data/oledb/begin-propset-map.md) defined in your command class. Although the rowset class appears to be using the command class' property sets, the rowset is supplied with its own copy of the run-time properties, when it is created by a command or session object.  
  
## Requirements  
 **Header:** altdb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)