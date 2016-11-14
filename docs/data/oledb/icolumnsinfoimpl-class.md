---
title: "IColumnsInfoImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IColumnsInfoImpl<T>"
  - "ATL::IColumnsInfoImpl"
  - "IColumnsInfoImpl"
  - "ATL.IColumnsInfoImpl"
  - "ATL::IColumnsInfoImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IColumnsInfoImpl class"
ms.assetid: ba74c1c5-2eda-4452-8b57-84919fa0d066
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
# IColumnsInfoImpl Class
Provides an implementation of the [IColumnsInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx) interface.  
  
## Syntax  
  
```  
template <class T>  
class ATL_NO_VTABLE IColumnsInfoImpl :   
   public IColumnsInfo,    
   public CDBIDOps  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IColumnsInfoImpl`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetColumnInfo](../../data/oledb/icolumnsinfoimpl-getcolumninfo.md)|Returns the column metadata needed by most consumers.|  
|[MapColumnIDs](../../data/oledb/icolumnsinfoimpl-mapcolumnids.md)|Returns an array of ordinals of the columns in a rowset that are identified by the specified column IDs.|  
  
## Remarks  
 A mandatory interface on rowsets and commands. To modify the behavior of your provider's `IColumnsInfo` implementation, you need to modify the provider column map.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)