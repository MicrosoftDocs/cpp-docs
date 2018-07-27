---
title: "CRowset Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CRowset<TAccessor>", "CRowset", "ATL::CRowset", "ATL::CRowset<TAccessor>", "ATL.CRowset",
    "CRowset<TAccessor>.AddRefRows", "CRowset.AddRefRows", "ATL.CRowset.AddRefRows", "AddRefRows", "CRowset::AddRefRows", "CRowset<TAccessor>::AddRefRows", "ATL::CRowset::AddRefRows", "ATL.CRowset<TAccessor>.AddRefRows", "ATL::CRowset<TAccessor>::AddRefRows",
    "CRowset::Close", "ATL.CRowset.Close", "CRowset<TAccessor>::Close", "CRowset<TAccessor>.Close", "ATL.CRowset<TAccessor>.Close", "ATL::CRowset::Close", "ATL::CRowset<TAccessor>::Close", "CRowset.Close",
    "CRowset<TAccessor>.Compare", "CRowset<TAccessor>::Compare", "ATL.CRowset<TAccessor>.Compare", "ATL::CRowset<TAccessor>::Compare", "CRowset.Compare", "ATL::CRowset::Compare", "ATL.CRowset.Compare", "CRowset::Compare", "CRowset<TAccessor>::CRowset", "CRowset.CRowset", "ATL::CRowset::CRowset", "ATL::CRowset<TAccessor>::CRowset", "ATL.CRowset.CRowset", "CRowset", "CRowset<TAccessor>.CRowset", "CRowset::CRowset", "ATL.CRowset<TAccessor>.CRowset",
    "ATL::CRowset::Delete", "CRowset.Delete", "CRowset::Delete", "ATL.CRowset.Delete", "ATL::CRowset<TAccessor>::Delete", "CRowset<TAccessor>.Delete", "CRowset<TAccessor>::Delete", "ATL.CRowset<TAccessor>.Delete",
    "ATL.CRowset.FindNextRow", "CRowset<TAccessor>.FindNextRow", "ATL::CRowset::FindNextRow", "CRowset::FindNextRow", "CRowset<TAccessor>::FindNextRow", "CRowset.FindNextRow", "ATL.CRowset<TAccessor>.FindNextRow", "ATL::CRowset<TAccessor>::FindNextRow", "FindNextRow",
    "ATL::CRowset::GetApproximatePosition", "ATL::CRowset<TAccessor>::GetApproximatePosition", "CRowset.GetApproximatePosition", "CRowset::GetApproximatePosition", "GetApproximatePosition", "ATL.CRowset.GetApproximatePosition", "CRowset<TAccessor>::GetApproximatePosition",
    "CRowset<TAccessor>::GetData", "ATL::CRowset<TAccessor>::GetData", "ATL::CRowset::GetData", "ATL.CRowset<TAccessor>.GetData", "CRowset<TAccessor>.GetData", "CRowset::GetData", "CRowset.GetData", "ATL.CRowset.GetData",
    "CRowset<TAccessor>::GetDataHere", "CRowset<TAccessor>.GetDataHere", "CRowset.GetDataHere", "GetDataHere", "CRowset::GetDataHere", "ATL::CRowset::GetDataHere", "ATL::CRowset<TAccessor>::GetDataHere", "ATL.CRowset<TAccessor>.GetDataHere", "ATL.CRowset.GetDataHere",
    "ATL.CRowset<TAccessor>.GetOriginalData", "CRowset<TAccessor>::GetOriginalData", "GetOriginalData", "ATL::CRowset<TAccessor>::GetOriginalData", "ATL.CRowset.GetOriginalData", "CRowset::GetOriginalData", "ATL::CRowset::GetOriginalData", "CRowset.GetOriginalData",
    "CRowset.GetRowStatus", "ATL.CRowset<TAccessor>.GetRowStatus", "ATL::CRowset<TAccessor>::GetRowStatus", "CRowset::GetRowStatus", "ATL::CRowset::GetRowStatus", "CRowset<TAccessor>::GetRowStatus", "ATL.CRowset.GetRowStatus", "CRowset<TAccessor>.GetRowStatus", "GetRowStatus",
    "ATL.CRowset<TAccessor>.Insert", "CRowset.Insert", "CRowset<TAccessor>.Insert", "CRowset<TAccessor>::Insert", "ATL::CRowset<TAccessor>::Insert", "ATL.CRowset.Insert", "CRowset::Insert", "ATL::CRowset::Insert",
    "CRowset::IsSameRow", "CRowset.IsSameRow", "IsSameRow", "ATL::CRowset::IsSameRow", "ATL.CRowset.IsSameRow", "CRowset<TAccessor>::IsSameRow", "ATL.CRowset<TAccessor>.IsSameRow", "CRowset<TAccessor>.IsSameRow", "ATL::CRowset<TAccessor>::IsSameRow",
    "CRowset<TAccessor>::MoveFirst", "ATL::CRowset::MoveFirst", "CRowset<TAccessor>.MoveFirst", "CRowset::MoveFirst", "CRowset.MoveFirst", "ATL.CRowset.MoveFirst", "ATL.CRowset<TAccessor>.MoveFirst", "ATL::CRowset<TAccessor>::MoveFirst",
    "ATL::CRowset<TAccessor>::MoveLast", "CRowset<TAccessor>::MoveLast", "ATL.CRowset.MoveLast", "ATL::CRowset::MoveLast", "CRowset<TAccessor>.MoveLast", "MoveLast", "CRowset::MoveLast", "ATL.CRowset<TAccessor>.MoveLast", "CRowset.MoveLast",
    "ATL.CRowset<TAccessor>.MoveNext", "ATL.CRowset.MoveNext", "ATL::CRowset<TAccessor>::MoveNext", "CRowset<TAccessor>.MoveNext", "CRowset.MoveNext", "CRowset<TAccessor>::MoveNext", "CRowset::MoveNext", "ATL::CRowset::MoveNext",
    "CRowset<TAccessor>.MovePrev", "CRowset.MovePrev", "MovePrev", "CRowset::MovePrev", "ATL.CRowset.MovePrev", "ATL::CRowset<TAccessor>::MovePrev", "ATL::CRowset::MovePrev", "ATL.CRowset<TAccessor>.MovePrev", "CRowset<TAccessor>::MovePrev",
    "ATL::CRowset::MoveToBookmark", "ATL::CRowset<TAccessor>::MoveToBookmark", "ATL.CRowset.MoveToBookmark", "ATL.CRowset<TAccessor>.MoveToBookmark", "MoveToBookmark", "CRowset::MoveToBookmark", "CRowset.MoveToBookmark", "CRowset<TAccessor>::MoveToBookmark",
    "MoveToRatio", "CRowset<TAccessor>::MoveToRatio", "CRowset::MoveToRatio", "CRowset<TAccessor>.MoveToRatio", "ATL.CRowset.MoveToRatio", "ATL::CRowset::MoveToRatio", "CRowset.MoveToRatio", "ATL.CRowset<TAccessor>.MoveToRatio", "ATL::CRowset<TAccessor>::MoveToRatio",
    "ReleaseRows", "CRowset::ReleaseRows", "ATL::CRowset<TAccessor>::ReleaseRows", "CRowset<TAccessor>.ReleaseRows", "CRowset.ReleaseRows", "ATL.CRowset.ReleaseRows", "ATL.CRowset<TAccessor>.ReleaseRows", "CRowset<TAccessor>::ReleaseRows", "ATL::CRowset::ReleaseRows",
    "ATL.CRowset<TAccessor>.SetData", "SetData", "ATL::CRowset::SetData", "CRowset<TAccessor>.SetData", "CRowset::SetData", "ATL.CRowset.SetData", "CRowset.SetData", "CRowset<TAccessor>::SetData", "ATL::CRowset<TAccessor>::SetData",
    "CRowset.Undo", "ATL::CRowset<TAccessor>::Undo", "CRowset<TAccessor>::Undo", "ATL.CRowset.Undo", "ATL.CRowset<TAccessor>.Undo", "CRowset<TAccessor>.Undo", "ATL::CRowset::Undo", "CRowset::Undo", "Undo",
    "CRowset.Update", "ATL.CRowset.Update", "ATL.CRowset<TAccessor>.Update", "ATL::CRowset<TAccessor>::Update", "CRowset<TAccessor>::Update", "CRowset::Update", "CRowset<TAccessor>.Update", "ATL::CRowset::Update",
    "CRowset::UpdateAll", "ATL.CRowset.UpdateAll", "CRowset<TAccessor>.UpdateAll", "ATL.CRowset<TAccessor>.UpdateAll", "UpdateAll", "CRowset.UpdateAll", "ATL::CRowset<TAccessor>::UpdateAll", "CRowset<TAccessor>::UpdateAll", "ATL::CRowset::UpdateAll"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRowset class", "AddRefRows method", "Close method", "Compare method", "CRowset class, constructor", "Delete method", "FindNextRow method", "GetApproximatePosition method",
    "GetData method [OLE DB]", "GetDataHere method", "GetOriginalData method", "GetRowStatus method", "Insert method", "IsSameRow method", "MoveFirst method", "MoveLast method", "MoveNext method",
    "MovePrev method", "MoveToBookmark method", "MoveToRatio method", "ReleaseRows method", "SetData method", "Undo method", "Update method", "UpdateAll method"]
ms.assetid: b0228a90-b8dd-47cc-b397-8d4c15c1e7f4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset Class
Encapsulates an OLE DB rowset object and several related interfaces and provides manipulation methods for rowset data.  
  
## Syntax

```cpp
template <class TAccessor = CAccessorBase>  
class CRowset  
```  
  
#### Parameters  
 *TAccessor*  
 An accessor class. The default is `CAccessorBase`.  
  
## Requirements  
 **Header:** atldbcli.h  

## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddRefRows](#addrefrows)|Increments the reference count associated with the current row.|  
|[Close](#close)|Releases rows and the current `IRowset` interface.|  
|[Compare](#compare)|Compares two bookmarks using [IRowsetLocate::Compare](https://msdn.microsoft.com/library/ms709539.aspx).|  
|[CRowset](#crowset)|Creates a new `CRowset` object and (optionally) associates it with an `IRowset` interface supplied as a parameter.|  
|[Delete](#delete)|Deletes rows from the rowset using [IRowsetChange:DeleteRows](https://msdn.microsoft.com/library/ms724362.aspx).|  
|[FindNextRow](#findnextrow)|Finds the next matching row after the specified bookmark.|  
|[GetApproximatePosition](#getapproximateposition)|Returns the approximate position of a row corresponding to a bookmark.|  
|[GetData](#getdata)|Retrieves data from the rowset's copy of the row.|  
|[GetDataHere](#getdatahere)|Retrieves data from the specified buffer.|  
|[GetOriginalData](#getoriginaldata)|Retrieves the data most recently fetched from or transmitted to the data source, ignoring pending changes.|  
|[GetRowStatus](#getrowstatus)|Returns the status of all rows.|  
|[Insert](#insert)|Creates and inserts a new row using [IRowsetChange:InsertRow](https://msdn.microsoft.com/library/ms716921.aspx).|  
|[IsSameRow](#issamerow)|Compares the specified row with the current row.|  
|[MoveFirst](#movefirst)|Repositions the next-fetch location to the initial position.|  
|[MoveLast](#movelast)|Moves to the last record.|  
|[MoveNext](#movenext)|Fetches data from the next sequential row or a specified number of positions beyond the next row.|  
|[MovePrev](#moveprev)|Moves to the previous record.|  
|[MoveToBookmark](#movetobookmark)|Fetches the row marked by a bookmark or the row at a specified offset from that bookmark.|  
|[MoveToRatio](#movetoratio)|Fetches rows starting from a fractional position in the rowset.|  
|[ReleaseRows](#releaserows)|Calls [IRowset::ReleaseRows](https://msdn.microsoft.com/library/ms719771.aspx) to release the current row handle.|  
|[SetData](#setdata)|Sets data values in one or more columns of a row using [IRowsetChange:SetData](https://msdn.microsoft.com/library/ms721232.aspx).|  
|[Undo](#undo)|Undoes any changes made to a row since the last fetch or [Update](../../data/oledb/crowset-update.md).|  
|[Update](#update)|Transmits any pending changes made to the current row since the last fetch or update.|  
|[UpdateAll](#updateall)|Transmits any pending changes made to all rows since the last fetch or update.|  
  
## Remarks  
 In OLE DB, a rowset is the object through which a program sets and retrieves data.  
  
 This class is not meant to be instantiated but rather passed as a template parameter to `CTable` or `CCommand` (`CRowset` is the default).  

## <a name="addrefrows"></a> CRowset::AddRefRows
Calls [IRowset::AddRefRows](https://msdn.microsoft.com/library/ms719619.aspx) to increment (by one) the reference count associated with the current row handle.  
  
### Syntax  
  
```cpp
HRESULT AddRefRows() throw();  
  
```  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method increments the reference count for the current row handle. Call [ReleaseRows](../../data/oledb/crowset-releaserows.md) to decrement the count. Rows returned by the move methods have a reference count of one.  

## <a name="close"></a> CRowset::Close
Releases rows and the current [IRowset](https://msdn.microsoft.com/library/ms720986.aspx) interface.  
  
### Syntax  
  
```cpp
void Close() throw();  
  
```  
  
### Remarks  
 This method releases all rows currently in the rowset.  

## <a name="compare"></a> CRowset::Compare
Compares two bookmarks using [IRowsetLocate::Compare](https://msdn.microsoft.com/library/ms709539.aspx).  
  
### Syntax  
  
```cpp
HRESULT Compare(const CBookmarkBase& bookmark1,   
   const CBookmarkBase& bookmark2,   
   DBCOMPARE* pComparison) const throw();  
```  
  
#### Parameters  
 *Bookmark1*  
 [in] The first bookmark to compare.  
  
 *Bookmark2*  
 [in] The second bookmark to compare.  
  
 *pComparison*  
 [out] A pointer to the result of the comparison.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires the optional interface `IRowsetLocate`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetLocate` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  
  
 For information about using bookmarks in consumers, see [Using Bookmarks](../../data/oledb/using-bookmarks.md).  

## <a name="crowset"></a> CRowset::CRowset
Creates a new `CRowset` object and (optionally) associates it with an [IRowset](https://msdn.microsoft.com/library/ms720986.aspx) interface supplied as a parameter.  
  
### Syntax  
  
```cpp
      CRowset();   

CRowset(IRowset* pRowset);  
```  
  
#### Parameters  
 *pRowset*  
 [in] A pointer to an `IRowset` interface to be associated with this class.  

## <a name="delete"></a> CRowset::Delete
Calls [IRowsetChange::DeleteRows](https://msdn.microsoft.com/library/ms724362.aspx) to delete the current row from the rowset.  
  
### Syntax  
  
```cpp
HRESULT Delete() const throw();  
  
```  
  
### Return Value  
 A standard HRESULT.  

## <a name="findnextrow"></a> CRowset::FindNextRow
Finds the next matching row after the specified bookmark.  
  
### Syntax  
  
```cpp
HRESULT FindNextRow(DBCOMPAREOP op,   
  BYTE* pData,   
   DBTYPE wType,   
   DBLENGTH nLength,   
   BYTE bPrecision,   
   BYTE bScale,   
   BOOL bSkipCurrent = TRUE,   
   CBookmarkBase* pBookmark = NULL) throw();  
```  
  
#### Parameters  
 *op*  
 [in] The operation to use in comparing row values. For values, see [IRowsetFind::FindNextRow](https://msdn.microsoft.com/library/ms723091.aspx).  
  
 *pData*  
 [in] A pointer to the value to be matched.  
  
 *wType*  
 [in] Indicates the data type of the value part of the buffer. For information about type indicators, see [Data Types](https://msdn.microsoft.com/library/ms723969.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK.  
  
 *nLength*  
 [in] The length, in bytes, of the consumer data structure allocated for the data value. For details, see the description of `cbMaxLen` in [DBBINDING Structures](https://msdn.microsoft.com/library/ms716845.aspx) in the *OLE DB Programmer's Reference.*  
  
 *bPrecision*  
 [in] The maximum precision used when getting data. Used only if *wType* is DBTYPE_NUMERIC. For more information, see [Conversions involving DBTYPE_NUMERIC or DBTYPE_DECIMAL](https://msdn.microsoft.com/library/ms719714.aspx) in the *OLE DB Programmer's Reference*.  
  
 *bScale*  
 [in] The scale used when getting data. Used only if *wType* is DBTYPE_NUMERIC or DBTYPE_DECIMAL. For more information, see [Conversions involving DBTYPE_NUMERIC or DBTYPE_DECIMAL](https://msdn.microsoft.com/library/ms719714.aspx) in the *OLE DB Programmer's Reference*.  
  
 *bSkipCurrent*  
 [in] The number of rows from the bookmark at which to start a search.  
  
 *pBookmark*  
 [in] The bookmark for position at which to start a search.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires the optional interface `IRowsetFind`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetFind` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  
  
 For information about using bookmarks in consumers, see [Using Bookmarks](../../data/oledb/using-bookmarks.md).  

## <a name="getapproximateposition"></a> CRowset::GetApproximatePosition
Returns the approximate position of a row corresponding to a bookmark.  
  
### Syntax  
  
```cpp
HRESULT GetApproximatePosition(const CBookmarkBase* pBookmark,   
   DBCOUNTITEM* pPosition,   
   DBCOUNTITEM* pcRows) throw();  
```  
  
#### Parameters  
 *pBookmark*  
 [in] A pointer to a bookmark that identifies the row whose position is to be found. NULL if only the row count is required.  
  
 *pPosition*  
 [out] A pointer to the location where `GetApproximatePosition` returns the position of the row. NULL if the position is not required.  
  
 *pcRows*  
 [out] A pointer to the location where `GetApproximatePosition` returns the total number of rows. NULL if the row count is not required.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires the optional interface `IRowsetScroll`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetScroll` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  
  
 For information about using bookmarks in consumers, see [Using Bookmarks](../../data/oledb/using-bookmarks.md).  

## <a name="getdata"></a> CRowset::GetData
Retrieves data from the rowset's copy of the row.  
  
### Syntax  
  
```cpp
HRESULT GetData() throw();   


HRESULT GetData(int nAccessor) throw();  
```  
  
#### Parameters  
 *nAccessor*  
 [in] The (zero-offset) index number of the accessor to use for accessing the data.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 If you specify an accessor that is not an autoaccessor in [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md), use this method to explicitly get the data by passing the accessor number.  

## <a name="getdatahere"></a> CRowset::GetDataHere
Retrieves data from the current row and places it into the specified buffer.  
  
### Syntax  
  
```cpp
HRESULT GetDataHere(int nAccessor,   
  void* pBuffer) throw();  
```  
  
#### Parameters  
 *nAccessor*  
 [in] The index number of the accessor to use for accessing the data.  
  
 *pBuffer*  
 [out] A buffer into which to place the data for the current record.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 For an example of how to use this function, see the [MultiRead sample](../../visual-cpp-samples.md).

## <a name="getoriginaldata"></a> CRowset::GetOriginalData
Calls `IRowsetUpdate::GetOriginalData` to retrieve the data most recently fetched from or transmitted to the data source.  
  
### Syntax  
  
```cpp
HRESULT GetOriginalData() throw();  
  
```  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method retrieves the data most recently fetched from or transmitted to the data source; it does not retrieve values based on pending changes.  
  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetUpdate` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset. 

## <a name="getrowstatus"></a> CRowset::GetRowStatus
Returns the status of all rows.  
  
### Syntax  
  
```cpp
HRESULT GetRowStatus(DBPENDINGSTATUS* pStatus) const throw();  
```  
  
#### Parameters  
 *pStatus*  
 [out] A pointer to a location where `GetRowStatus` returns the status value. See DBPENDINGSTATUS in the OLE DB Programmer's Reference.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetUpdate` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.   

## <a name="insert"></a> CRowset::Insert
Creates and initializes a new row using data from the accessor.  
  
### Syntax  
  
```cpp
HRESULT Insert(int nAccessor = 0,   
   bool bGetHRow = false) throw();  
```  
  
#### Parameters  
 *nAccessor*  
 [in] The number of the accessor to use for inserting the data.  
  
 *bGetHRow*  
 [in] Indicates whether the handle for the inserted row is retrieved.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires the optional interface `IRowsetChange`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetChange` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  
  
 Insert might fail if one or more columns is not writable. Modify your cursor map to correct this.  
  
### Example  
 The following example shows how to access a data source through a rowset and then insert a string using a table in that rowset.  
  
 First, create a table class by inserting a New ATL Object into your project. For example, right-click the project in the Workspace pane and select **New ATL Object**. From the **Data Access** category, select **Consumer**. Create a consumer object of type **Table**. (Selecting **Table** creates a rowset directly from the table; selecting **Command** creates a rowset through a SQL command.) Select a data source, specifying a table through which to access that data source. If you call your consumer object **CCustomerTable**, you would then implement your insertion code as follows:  
  
 [!code-cpp[NVC_OLEDB_Consumer#10](../../data/oledb/codesnippet/cpp/crowset-insert_1.cpp)]  

## <a name="issamerow"></a> CRowset::IsSameRow
Compares the specified row with the current row.  
  
### Syntax  
  
```cpp
HRESULT IsSameRow(HROW hRow) const throw();  
```  
  
#### Parameters  
 *hRow*  
 [in] A handle to the row to compare to the current row.  
  
### Return Value  
 A standard HRESULT. S_OK indicates the rows are the same. For other values, see [IRowsetIndentity::IsSameRow](https://msdn.microsoft.com/library/ms719629.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK.  

## <a name="movefirst"></a> CRowset::MoveFirst
Moves the cursor to the initial position and retrieves the initial row.  
  
### Syntax  
  
```cpp
HRESULT MoveFirst() throw();  
  
```  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 Calls [IRowset::RestartPosition](https://msdn.microsoft.com/library/ms712877.aspx) to reposition the next-fetch location to the initial position (the position that was the next-fetch location when the rowset was created) and retrieves the initial row.  

## <a name="movelast"></a> CRowset::MoveLast
Moves the cursor to the last row.  
  
### Syntax  
  
```cpp
HRESULT MoveLast() throw();  
  
```  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 Calls [IRowset::RestartPosition](https://msdn.microsoft.com/library/ms712877.aspx) to reposition the next-fetch location to the last position and retrieves the last row.  
  
 This method requires that you set `DBPROP_CANSCROLLBACKWARDS` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset. (For better performance, you might also set `DBPROP_QUICKRESTART` to VARIANT_TRUE.)  

## <a name="movenext"></a> CRowset::MoveNext
Moves the cursor to the next record.  
  
### Syntax  
  
```cpp
HRESULT MoveNext() throw();HRESULT MoveNext(LONG lSkip,   
   bool bForward= true) throw();  
```  
  
#### Parameters  
 *lSkip*  
 [in] The number of rows to skip before fetching.  
  
 *bForward*  
 [in] Pass **true** to move forward to the next record, **false** to move backward.  
  
### Return Value  
 A standard HRESULT. When the end of the rowset has been reached, returns DB_S_ENDOFROWSET.  
  
### Remarks  
 Fetches the next sequential row from the `CRowset` object, remembering the previous position. Optionally, you can choose to skip ahead *lSkip* rows or move backward.  
  
 This method requires that you set the following properties before calling `Open` on the table or command containing the rowset:  
  
-   `DBPROP_CANSCROLLBACKWARDS` must be VARIANT_TRUE if *lSkip* < 0  
  
-   `DBPROP_CANFETCHBACKWARDS` must be VARIANT_TRUE if *bForward* = false  
  
 Otherwise (if *lSkip* >= 0 and *bForward* = true), you do not need to set any additional properties.  

## <a name="moveprev"></a> CRowset::MovePrev
Moves the cursor to the previous record.  
  
### Syntax  
  
```cpp
HRESULT MovePrev() throw();  
  
```  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires that you set either `DBPROP_CANFETCHBACKWARDS` or `DBPROP_CANSCROLLBACKWARDS` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset. 

## <a name="movetobookmark"></a> CRowset::MoveToBookmark
Fetches the row marked by a bookmark or the row at a specified offset (*lSkip*) from that bookmark.  
  
### Syntax  
  
```cpp
HRESULT MoveToBookmark(const CBookmarkBase& bookmark,   
   LONG lSkip = 0) throw();  
```  
  
#### Parameters  
 *bookmark*  
 [in] A bookmark marking the location from which you want to fetch data.  
  
 *lSkip*  
 [in] The number count of rows from the bookmark to the target row. If *lSkip* is zero, the first row fetched is the bookmarked row. If *lSkip* is 1, the first row fetched is the row after the bookmarked row. If *lSkip* is -1, the first row fetched is the row before the bookmarked row.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires the optional interface `IRowsetLocate`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetLocate` to VARIANT_TRUE and set `DBPROP_CANFETCHBACKWARDS` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  
  
 For information about using bookmarks in consumers, see [Using Bookmarks](../../data/oledb/using-bookmarks.md).  
  
## <a name="movetoratio"></a> CRowset::MoveToRatio
Fetches rows starting from a fractional position in the rowset.  
  
### Syntax  
  
```cpp
HRESULT MoveToRatio(DBCOUNTITEM nNumerator,   
   DBCOUNTITEM nDenominator,bool bForward = true) throw();  
```  
  
#### Parameters  
 *nNumerator*  
 [in] The numerator used to determine the fractional positional from which to fetch data.  
  
 *nDenominator*  
 [in] The denominator used to determine the fractional positional from which to fetch data.  
  
 *bForward*  
 [in] Indicates whether to move forward or backward. The default is forward.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 `MoveToRatio` fetches rows according roughly to the following formula:  
  
 `(nNumerator *  RowsetSize ) / nDenominator`  
  
 where `RowsetSize` is the size of the rowset, measured in rows. The accuracy of this formula depends on the specific provider. For details, see [IRowsetScroll::GetRowsAtRatio](https://msdn.microsoft.com/library/ms709602.aspx).  
  
 This method requires the optional interface `IRowsetScroll`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetScroll` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  

## <a name="releaserows"></a> CRowset::ReleaseRows
Calls [IRowset::ReleaseRows](https://msdn.microsoft.com/library/ms719771.aspx) to release the current row handle.  
  
### Syntax  
  
```cpp
HRESULT ReleaseRows() throw();  
  
```  
  
### Return Value  
 A standard HRESULT.  

## <a name="setdata"></a> CRowset::SetData
Sets data values in one or more columns of a row.  
  
### Syntax  
  
```cpp
HRESULT SetData() const throw();   


HRESULT SetData(int nAccessor) const throw();  
```  
  
#### Parameters  
 *nAccessor*  
 [in] The number of the accessor to use for accessing the data.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 For the `SetData` form that accepts no arguments, all accessors are used for updating. You typically call `SetData` to set data values in columns in a row, then call [Update](../../data/oledb/crowset-update.md) to transmit those changes.  
  
 This method requires the optional interface `IRowsetChange`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetChange` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  
  
 The setting operation might fail if one or more columns is not writable. Modify your cursor map to correct this. 
  
## <a name="undo"></a> CRowset::Undo
Undoes any changes made to a row since the last fetch or [Update](../../data/oledb/crowset-update.md).  
  
### Syntax  
  
```cpp
HRESULT Undo(DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL) throw();  
```  
  
#### Parameters  
 *pcRows*  
 [out] A pointer to the location where `Undo` returns the number of rows it attempted to undo if required.  
  
 *phRow*  
 [out] A pointer to the location where `Undo` returns an array of handles to all rows it attempted to undo if required.  
  
 *pStatus*  
 [out] A pointer to the location where `Undo` returns the row status value. No status is returned if *pStatus* is null.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetUpdate` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  

## <a name="update"></a> CRowset::Update
Transmits any pending changes made to the current row since the last fetch or `Update` call on it.  
  
### Syntax  
  
```cpp
HRESULT Update(DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL) throw();  
```  
  
#### Parameters  
 *pcRows*  
 [out] A pointer to the location where `Update` returns the number of rows it attempted to update, if required.  
  
 *phRow*  
 [out] A pointer to the location where `Update` returns the handle of the row it attempted to update. No handle is returned if *phRow* is null.  
  
 *pStatus*  
 [out] A pointer to the location where `Update` returns the row status value. No status is returned if *pStatus* is null.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 Transmits any pending changes made to the current row since that row was last fetched or updated (using `Update` or [UpdateAll](../../data/oledb/crowset-updateall.md)). You typically call [SetData](../../data/oledb/crowset-setdata.md) to set data values in columns in a row, and then call `Update` to transmit those changes.  
  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetUpdate` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  

## <a name="updateall"></a> CRowset::UpdateAll
Transmits any pending changes made to all rows since the last fetch or `Update` call on it.  
  
### Syntax  
  
```cpp
HRESULT UpdateAll(DBCOUNTITEM* pcRows = NULL,   
   HROW** pphRow = NULL,   
   DBROWSTATUS** ppStatus = NULL) throw();  
```  
  
#### Parameters  
 *pcRows*  
 [out] A pointer to the location where `UpdateAll` returns the number of rows it attempted to update, if required.  
  
 *pphRow*  
 [out] A pointer to memory in which `UpdateAll` returns the handle of the row it attempted to update. No handle is returned if *pphRow* is null.  
  
 *ppStatus*  
 [out] A pointer to the location where `Update` returns the row status value. No status is returned if *ppStatus* is null.  
  
### Remarks  
 Transmits any pending changes made to all rows since those rows were last fetched or updated using [Update](../../data/oledb/crowset-update.md) or `UpdateAll`. `UpdateAll` will update every row that has been modified, regardless of whether you still have the handle for them (see *pphRow*) or not.  
  
 For example, if you used `Insert` to insert five rows in a rowset, you could either call `Update` five times or call `UpdateAll` once to update them all.  
  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns E_NOINTERFACE. You must also set `DBPROP_IRowsetUpdate` to VARIANT_TRUE before calling `Open` on the table or command containing the rowset.  
  
### Return Value  
 A standard HRESULT.  

## See Also  
 [DBViewer Sample](../../visual-cpp-samples.md)   
 [MultiRead Sample](../../visual-cpp-samples.md)   
 [MultiRead Attributes Sample](../../visual-cpp-samples.md)   
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)