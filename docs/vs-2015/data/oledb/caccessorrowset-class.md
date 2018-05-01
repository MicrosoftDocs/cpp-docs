---
title: "CAccessorRowset Class | Microsoft Docs"
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
  - "CAccessorRowset"
  - "ATL.CAccessorRowset"
  - "ATL::CAccessorRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessorRowset class"
ms.assetid: bd4f58ed-cebf-4d43-8985-1e5fcbf06953
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAccessorRowset Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CAccessorRowset Class](https://docs.microsoft.com/cpp/data/oledb/caccessorrowset-class).  
  
  
Encapsulates a rowset and its associated accessors in a single class.  
  
## Syntax  
  
```  
template <   
   class TAccessor = CNoAccessor,    
   template <typename T> class TRowset = CRowset    
>  
class CAccessorRowset :   
   public TAccessor,    
   public TRowset<TAccessor>  
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
|[Bind](../../data/oledb/caccessorrowset-bind.md)|Creates bindings (used when **bBind** is specified as false in [CCommand::Open](../../data/oledb/ccommand-open.md)).|  
|[CAccessorRowset](../../data/oledb/caccessorrowset-caccessorrowset.md)|Constructor.|  
|[Close](../../data/oledb/caccessorrowset-close.md)|Closes the rowset and any accessors.|  
|[FreeRecordMemory](../../data/oledb/caccessorrowset-freerecordmemory.md)|Frees any columns in the current record that need to be freed.|  
|[GetColumnInfo](../../data/oledb/caccessorrowset-getcolumninfo.md)|Implements [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/library/ms722704.aspx).|  
  
## Remarks  
 Class `TAccessor` manages the accessor. Class *TRowset* manages the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)

