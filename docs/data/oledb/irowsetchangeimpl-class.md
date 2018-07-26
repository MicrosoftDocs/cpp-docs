---
title: "IRowsetChangeImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::IRowsetChangeImpl", "IRowsetChangeImpl", "ATL.IRowsetChangeImpl", "ATL.IRowsetChangeImpl.DeleteRows", "ATL::IRowsetChangeImpl::DeleteRows", "IRowsetChangeImpl.DeleteRows", "DeleteRows",               "IRowsetChangeImpl::DeleteRows", "ATL.IRowsetChangeImpl.InsertRow", "InsertRow", "IRowsetChangeImpl.InsertRow", "ATL::IRowsetChangeImpl::InsertRow", "IRowsetChangeImpl::InsertRow", "SetData",                         "IRowsetChangeImpl::SetData", "ATL.IRowsetChangeImpl.SetData", "IRowsetChangeImpl.SetData", "ATL::IRowsetChangeImpl::SetData", "IRowsetChangeImpl::FlushData", "IRowsetChangeImpl.FlushData", "FlushData"]
dev_langs: ["C++"]
helpviewer_keywords: ["providers, updatable", "updatable providers, immediate update", "IRowsetChangeImpl class", "DeleteRows method", "InsertRow method", "SetData method", "FlushData method"]
ms.assetid: 1e9fee15-ed9e-4387-af8f-215569beca6c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetChangeImpl Class
The OLE DB Templates implementation of the [IRowsetChange](https://msdn.microsoft.com/library/ms715790.aspx) interface in the OLE DB specification.  
  
## Syntax

```cpp
template <  
   class T,   
   class Storage,   
   class BaseInterface = IRowsetChange,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>>  
class ATL_NO_VTABLE IRowsetChangeImpl : public BaseInterface  
```  
  
### Parameters  
 *T*  
 A class derived from `IRowsetChangeImpl`.  
  
 *Storage*  
 The user record.  
  
 *BaseInterface*  
 The base class for the interface, such as `IRowsetChange`.  
  
 *RowClass*  
 The storage unit for the row handle.  
  
 *MapClass*  
 The storage unit for all row handles held by the provider.  

## Requirements  
 **Header:** atldb.h  
  
## Members  
  
### Interface Methods (Used with IRowsetChange)  
  
|||  
|-|-|  
|[DeleteRows](#deleterows)|Deletes rows from the rowset.|  
|[InsertRow](#insertrows)|Inserts a row into the rowset.|  
|[SetData](#setdata)|Sets data values in one or more columns.|  
  
### Implementation Method (Callback)  
  
|||  
|-|-|  
|[FlushData](#flushdata)|Overidden by provider to commit data to its store.|  
  
## Remarks  
 This interface is responsible for immediate write operations to a data store. "Immediate" means that when the end user (the person using the consumer) makes any changes, those changes are immediately transmitted to the data store (and cannot be undone).  
  
 `IRowsetChangeImpl` implements the OLE DB `IRowsetChange` interface, which enables updating of values of columns in existing rows, deleting rows, and inserting new rows.  
  
 The OLE DB Templates implementation supports all the base methods (`SetData`, `InsertRow`, and `DeleteRows`).  
  
> [!IMPORTANT]
>  It is strongly recommended that you read the following documentation BEFORE attempting to implement your provider:  
  
-   [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)  
  
-   Chapter 6 of the *OLE DB Programmer's Reference*  
  
-   Also see how the `RUpdateRowset` class is used in the UpdatePV sample  
  
## <a name="deleterows"></a> IRowsetChangeImpl::DeleteRows
Deletes rows from the rowset.  
  
### Syntax  
  
```cpp
      STDMETHOD (DeleteRows )(HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBROWSTATUS rgRowStatus[]);  
```  
  
#### Parameters  
 See [IRowsetChange::DeleteRows](https://msdn.microsoft.com/library/ms724362.aspx) in the *OLE DB Programmer's Reference*. 

## <a name="insertrow"></a> IRowsetChangeImpl::InsertRow
Creates and initializes a new row in the rowset.  
  
### Syntax  
  
```cpp
      STDMETHOD (InsertRow )(HCHAPTER /* hReserved */,  
   HACCESSOR hAccessor,  
   void* pData,  
   HROW* phRow);  
```  
  
#### Parameters  
 See [IRowsetChange::InsertRow](https://msdn.microsoft.com/library/ms716921.aspx) in the *OLE DB Programmer's Reference*. 

## <a name="setdata"></a> IRowsetChangeImpl::SetData
Sets data values in one or more columns.  
  
### Syntax  
  
```cpp
      STDMETHOD (SetData )(HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData);  
```  
  
#### Parameters  
 See [IRowsetChange::SetData](https://msdn.microsoft.com/library/ms721232.aspx) in the *OLE DB Programmer's Reference*. 

## <a name="flushdata"></a> IRowsetChangeImpl::FlushData
Overidden by provider to commit data to its store.  
  
### Syntax  
  
```cpp
HRESULT FlushData(HROW hRowToFlush,  
   HACCESSOR hAccessorToFlush);  
```  
  
#### Parameters  
 *hRowToFlush*  
 [in] Handle to the rows for the data. The type of this row is determined from the *RowClass* template argument of the `IRowsetImpl` class (`CSimpleRow` by default).  
  
 *hAccessorToFlush*  
 [in] Handle to the accessor, which contains binding information and type information in its `PROVIDER_MAP` (see [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)).  
  
### Return Value  
 A standard HRESULT.  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
