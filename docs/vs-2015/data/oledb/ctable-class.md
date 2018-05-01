---
title: "CTable Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CTable"
  - "ATL.CTable"
  - "CTable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTable class"
ms.assetid: f13fdaa3-e198-4557-977d-54b0bbc3454d
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTable Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CTable Class](https://docs.microsoft.com/cpp/data/oledb/ctable-class).  
  
  
Provides a means to directly access a simple rowset (one with no parameters).  
  
## Syntax  
  
```  
template <   
   class TAccessor = CNoAccessor,    
   template <typename T> class TRowset = CRowset    
>  
class CTable :    
   public CAccessorRowset <   
      TAccessor,    
      TRowset    
   >  
```  
  
#### Parameters  
 `TAccessor`  
 An accessor class.  
  
 `TRowset`  
 A rowset class.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Open](../../data/oledb/ctable-open.md)|Opens the table.|  
  
## Remarks  
 See [CCommand](../../data/oledb/ccommand-class.md) for information on how to execute a command to access a rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [IOpenRowset::OpenRowset](https://msdn.microsoft.com/library/ms716724.aspx)

