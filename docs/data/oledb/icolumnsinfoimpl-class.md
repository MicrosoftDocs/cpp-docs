---
title: "IColumnsInfoImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.IColumnsInfoImpl<T>", "ATL::IColumnsInfoImpl", "IColumnsInfoImpl", "ATL.IColumnsInfoImpl", "ATL::IColumnsInfoImpl<T>", "GetColumnInfo", "ATL::IColumnsInfoImpl::GetColumnInfo", "ATL.IColumnsInfoImpl.GetColumnInfo", "ATL::IColumnsInfoImpl<T>::GetColumnInfo", "IColumnsInfoImpl::GetColumnInfo", "IColumnsInfoImpl<T>::GetColumnInfo", "IColumnsInfoImpl.GetColumnInfo", "IColumnsInfoImpl<T>::MapColumnIDs", "MapColumnIDs", "ATL::IColumnsInfoImpl::MapColumnIDs", "IColumnsInfoImpl.MapColumnIDs", "ATL::IColumnsInfoImpl<T>::MapColumnIDs", "IColumnsInfoImpl::MapColumnIDs", "ATL.IColumnsInfoImpl<T>.MapColumnIDs", "ATL.IColumnsInfoImpl.MapColumnIDs"]
dev_langs: ["C++"]
helpviewer_keywords: ["IColumnsInfoImpl class", "GetColumnInfo method", "MapColumnIDs method"]
ms.assetid: ba74c1c5-2eda-4452-8b57-84919fa0d066
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IColumnsInfoImpl Class
Provides an implementation of the [IColumnsInfo](https://msdn.microsoft.com/library/ms724541.aspx) interface.  
  
## Syntax

```cpp
template <class T>  
class ATL_NO_VTABLE IColumnsInfoImpl :   
   public IColumnsInfo,    
   public CDBIDOps  
```  
  
### Parameters  
 *T*  
 Your class, derived from `IColumnsInfoImpl`.  

## Requirements  
 **Header:** atldb.h  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetColumnInfo](#getcolumninfo)|Returns the column metadata needed by most consumers.|  
|[MapColumnIDs](#mapcolumnids)|Returns an array of ordinals of the columns in a rowset that are identified by the specified column IDs.|  
  
## Remarks  
 A mandatory interface on rowsets and commands. To modify the behavior of your provider's `IColumnsInfo` implementation, you need to modify the provider column map.  

## <a name="getcolumninfo"></a> IColumnsInfoImpl::GetColumnInfo
Returns the column metadata needed by most consumers.  
  
### Syntax  
  
```cpp
STDMETHOD (GetColumnInfo)(DBORDINAL* pcColumns,  
   DBCOLUMNINFO** prgInfo,  
   OLECHAR** ppStringsBuffer);  
```  
  
#### Parameters  
 See [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/library/ms722704.aspx) in the *OLE DB Programmer's Reference*.  

## <a name="mapcolumnids"></a> IColumnsInfoImpl::MapColumnIDs
Returns an array of ordinals of the columns in a rowset that are identified by the specified column IDs.  
  
### Syntax  
  
```cpp
STDMETHOD (MapColumnIDs)(DBORDINAL cColumnIDs,  
   const DBID rgColumnIDs[],  
   DBORDINAL rgColumns[]);  
```  
  
#### Parameters  
 See [IColumnsInfo::MapColumnIDs](https://msdn.microsoft.com/library/ms714200.aspx) in the *OLE DB Programmer's Reference*.  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)