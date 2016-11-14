---
title: "IOpenRowsetImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IOpenRowsetImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IOpenRowsetImpl class"
ms.assetid: d259cedc-1db4-41cf-bc9f-5030907ab486
caps.latest.revision: 10
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
# IOpenRowsetImpl Class
Provides implementation for the `IOpenRowset` interface.  
  
## Syntax  
  
```  
template <class SessionClass>  
class IOpenRowsetImpl : public IOpenRowset  
```  
  
#### Parameters  
 `SessionClass`  
 Your class, derived from `IOpenRowsetImpl`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CreateRowset](../../data/oledb/iopenrowsetimpl-createrowset.md)|Creates a rowset object. Not called directly by user.|  
|[OpenRowset](../../data/oledb/iopenrowsetimpl-openrowset.md)|Opens and returns a rowset that includes all rows from a single base table or index. (Not in ATLDB.H)|  
  
## Remarks  
 The [IOpenRowset](https://msdn.microsoft.com/en-us/library/ms716946.aspx) interface is mandatory for a session object. It opens and returns a rowset that includes all rows from a single base table or index.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)