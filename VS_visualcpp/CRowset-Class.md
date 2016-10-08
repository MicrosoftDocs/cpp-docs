---
title: "CRowset Class"
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
ms.assetid: b0228a90-b8dd-47cc-b397-8d4c15c1e7f4
caps.latest.revision: 15
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
# CRowset Class
Encapsulates an OLE DB rowset object and several related interfaces and provides manipulation methods for rowset data.  
  
## Syntax  
  
```  
template <class TAccessor = CAccessorBase>  
class CRowset  
```  
  
#### Parameters  
 `TAccessor`  
 An accessor class. The default is `CAccessorBase`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddRefRows](../VS_visualcpp/CRowset--AddRefRows.md)|Increments the reference count associated with the current row.|  
|[Close](../VS_visualcpp/CRowset--Close.md)|Releases rows and the current `IRowset` interface.|  
|[Compare](../VS_visualcpp/CRowset--Compare.md)|Compares two bookmarks using [IRowsetLocate::Compare](https://msdn.microsoft.com/en-us/library/ms709539.aspx).|  
|[CRowset](../VS_visualcpp/CRowset--CRowset.md)|Creates a new `CRowset` object and (optionally) associates it with an **IRowset** interface supplied as a parameter.|  
|[Delete](../VS_visualcpp/CRowset--Delete.md)|Deletes rows from the rowset using [IRowsetChange:DeleteRows](https://msdn.microsoft.com/en-us/library/ms724362.aspx).|  
|[FindNextRow](../VS_visualcpp/CRowset--FindNextRow.md)|Finds the next matching row after the specified bookmark.|  
|[GetApproximatePosition](../VS_visualcpp/CRowset--GetApproximatePosition.md)|Returns the approximate position of a row corresponding to a bookmark.|  
|[GetData](../VS_visualcpp/CRowset--GetData.md)|Retrieves data from the rowset's copy of the row.|  
|[GetDataHere](../VS_visualcpp/CRowset--GetDataHere.md)|Retrieves data from the specified buffer.|  
|[GetOriginalData](../VS_visualcpp/CRowset--GetOriginalData.md)|Retrieves the data most recently fetched from or transmitted to the data source, ignoring pending changes.|  
|[GetRowStatus](../VS_visualcpp/CRowset--GetRowStatus.md)|Returns the status of all rows.|  
|[Insert](../VS_visualcpp/CRowset--Insert.md)|Creates and inserts a new row using [IRowsetChange:InsertRow](https://msdn.microsoft.com/en-us/library/ms716921.aspx).|  
|[IsSameRow](../VS_visualcpp/CRowset--IsSameRow.md)|Compares the specified row with the current row.|  
|[MoveFirst](../VS_visualcpp/CRowset--MoveFirst.md)|Repositions the next-fetch location to the initial position.|  
|[MoveLast](../VS_visualcpp/CRowset--MoveLast.md)|Moves to the last record.|  
|[MoveNext](../VS_visualcpp/CRowset--MoveNext.md)|Fetches data from the next sequential row or a specified number of positions beyond the next row.|  
|[MovePrev](../VS_visualcpp/CRowset--MovePrev.md)|Moves to the previous record.|  
|[MoveToBookmark](../VS_visualcpp/CRowset--MoveToBookmark.md)|Fetches the row marked by a bookmark or the row at a specified offset from that bookmark.|  
|[MoveToRatio](../VS_visualcpp/CRowset--MoveToRatio.md)|Fetches rows starting from a fractional position in the rowset.|  
|[ReleaseRows](../VS_visualcpp/CRowset--ReleaseRows.md)|Calls [IRowset::ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) to release the current row handle.|  
|[SetData](../VS_visualcpp/CRowset--SetData.md)|Sets data values in one or more columns of a row using [IRowsetChange:SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx).|  
|[Undo](../VS_visualcpp/CRowset--Undo.md)|Undoes any changes made to a row since the last fetch or [Update](../VS_visualcpp/CRowset--Update.md).|  
|[Update](../VS_visualcpp/CRowset--Update.md)|Transmits any pending changes made to the current row since the last fetch or update.|  
|[UpdateAll](../VS_visualcpp/CRowset--UpdateAll.md)|Transmits any pending changes made to all rows since the last fetch or update.|  
  
## Remarks  
 In OLE DB, a rowset is the object through which a program sets and retrieves data.  
  
 This class is not meant to be instantiated but rather passed as a template parameter to `CTable` or `CCommand` (`CRowset` is the default).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [DBViewer Sample](../VS_visualcpp/Visual-C---Samples.md)   
 [MultiRead Sample](../VS_visualcpp/Visual-C---Samples.md)   
 [MultiRead Attributes Sample](../VS_visualcpp/Visual-C---Samples.md)   
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)