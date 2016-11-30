---
title: "CBulkRowset Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CBulkRowset"
  - "ATL.CBulkRowset"
  - "ATL::CBulkRowset<TAccessor>"
  - "CBulkRowset"
  - "ATL.CBulkRowset<TAccessor>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBulkRowset class"
ms.assetid: c6bde426-c543-4022-a98a-9519d9e2ae59
caps.latest.revision: 11
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
# CBulkRowset Class
Fetches and manipulates rows to work on data in bulk by retrieving multiple row handles with a single call.  
  
## Syntax  
  
```  
template <class TAccessor>  
class CBulkRowset : public CRowset<TAccessor>  
```  
  
#### Parameters  
 `TAccessor`  
 An accessor class.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddRefRows](../../data/oledb/cbulkrowset-addrefrows.md)|Increments the reference count.|  
|[CBulkRowset](../../data/oledb/cbulkrowset-cbulkrowset.md)|Constructor.|  
|[MoveFirst](../../data/oledb/cbulkrowset-movefirst.md)|Retrieves the first row of data, performing a new bulk fetch if necessary.|  
|[MoveLast](../../data/oledb/cbulkrowset-movelast.md)|Moves to the last row.|  
|[MoveNext](../../data/oledb/cbulkrowset-movenext.md)|Retrieves the next row of data.|  
|[MovePrev](../../data/oledb/cbulkrowset-moveprev.md)|Moves to the previous row.|  
|[MoveToBookmark](../../data/oledb/cbulkrowset-movetobookmark.md)|Fetches the row marked by a bookmark or the row at a specified offset from that bookmark.|  
|[MoveToRatio](../../data/oledb/cbulkrowset-movetoratio.md)|Fetches rows starting from a fractional position in the rowset.|  
|[ReleaseRows](../../data/oledb/cbulkrowset-releaserows.md)|Sets the current row (**m_nCurrentRow**) to zero and releases all rows.|  
|[SetRows](../../data/oledb/cbulkrowset-setrows.md)|Sets the number of row handles to be retrieved by one call.|  
  
## Example  
 The following example demonstrates use of the `CBulkRowset` class.  
  
 [!code-cpp[NVC_OLEDB_Consumer#1](../../data/oledb/codesnippet/cpp/cbulkrowset-class_1.cpp)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)