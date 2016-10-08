---
title: "CBulkRowset Class"
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
ms.assetid: c6bde426-c543-4022-a98a-9519d9e2ae59
caps.latest.revision: 11
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
|[AddRefRows](../VS_visualcpp/CBulkRowset--AddRefRows.md)|Increments the reference count.|  
|[CBulkRowset](../VS_visualcpp/CBulkRowset--CBulkRowset.md)|Constructor.|  
|[MoveFirst](../VS_visualcpp/CBulkRowset--MoveFirst.md)|Retrieves the first row of data, performing a new bulk fetch if necessary.|  
|[MoveLast](../VS_visualcpp/CBulkRowset--MoveLast.md)|Moves to the last row.|  
|[MoveNext](../VS_visualcpp/CBulkRowset--MoveNext.md)|Retrieves the next row of data.|  
|[MovePrev](../VS_visualcpp/CBulkRowset--MovePrev.md)|Moves to the previous row.|  
|[MoveToBookmark](../VS_visualcpp/CBulkRowset--MoveToBookmark.md)|Fetches the row marked by a bookmark or the row at a specified offset from that bookmark.|  
|[MoveToRatio](../VS_visualcpp/CBulkRowset--MoveToRatio.md)|Fetches rows starting from a fractional position in the rowset.|  
|[ReleaseRows](../VS_visualcpp/CBulkRowset--ReleaseRows.md)|Sets the current row (**m_nCurrentRow**) to zero and releases all rows.|  
|[SetRows](../VS_visualcpp/CBulkRowset--SetRows.md)|Sets the number of row handles to be retrieved by one call.|  
  
## Example  
 The following example demonstrates use of the `CBulkRowset` class.  
  
 [!CODE [NVC_OLEDB_Consumer#1](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#1)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)