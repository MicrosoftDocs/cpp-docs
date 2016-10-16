---
title: "CBulkRowset Class"
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
|[AddRefRows](../data/cbulkrowset--addrefrows.md)|Increments the reference count.|  
|[CBulkRowset](../data/cbulkrowset--cbulkrowset.md)|Constructor.|  
|[MoveFirst](../data/cbulkrowset--movefirst.md)|Retrieves the first row of data, performing a new bulk fetch if necessary.|  
|[MoveLast](../data/cbulkrowset--movelast.md)|Moves to the last row.|  
|[MoveNext](../data/cbulkrowset--movenext.md)|Retrieves the next row of data.|  
|[MovePrev](../data/cbulkrowset--moveprev.md)|Moves to the previous row.|  
|[MoveToBookmark](../data/cbulkrowset--movetobookmark.md)|Fetches the row marked by a bookmark or the row at a specified offset from that bookmark.|  
|[MoveToRatio](../data/cbulkrowset--movetoratio.md)|Fetches rows starting from a fractional position in the rowset.|  
|[ReleaseRows](../data/cbulkrowset--releaserows.md)|Sets the current row (**m_nCurrentRow**) to zero and releases all rows.|  
|[SetRows](../data/cbulkrowset--setrows.md)|Sets the number of row handles to be retrieved by one call.|  
  
## Example  
 The following example demonstrates use of the `CBulkRowset` class.  
  
 [!code[NVC_OLEDB_Consumer#1](../data/codesnippet/CPP/cbulkrowset-class_1.cpp)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)