---
title: "IRowsetInfoImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.IRowsetInfoImpl", "IRowsetInfoImpl", "ATL::IRowsetInfoImpl", "ATL.IRowsetInfoImpl.GetProperties", "IRowsetInfoImpl.GetProperties", "ATL::IRowsetInfoImpl::GetProperties", "IRowsetInfoImpl::GetProperties", "GetProperties", "ATL::IRowsetInfoImpl::GetReferencedRowset", "GetReferencedRowset", "ATL.IRowsetInfoImpl.GetReferencedRowset", "IRowsetInfoImpl.GetReferencedRowset", "IRowsetInfoImpl::GetReferencedRowset", "IRowsetInfoImpl::GetSpecification", "ATL.IRowsetInfoImpl.GetSpecification", "IRowsetInfoImpl.GetSpecification", "GetSpecification", "ATL::IRowsetInfoImpl::GetSpecification"]
dev_langs: ["C++"]
helpviewer_keywords: ["IRowsetInfoImpl class", "GetProperties method", "GetReferencedRowset method", "GetSpecification method"]
ms.assetid: 9c654155-7727-464e-bd31-143e68391a47
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetInfoImpl Class
Provides an implementation for the [IRowsetInfo](https://msdn.microsoft.com/library/ms724541.aspx) interface.  
  
## Syntax

```cpp
template <class T, class PropClass = T>  
class ATL_NO_VTABLE IRowsetInfoImpl :   
   public IRowsetInfo,    
   public CUtlProps<PropClass>  
```  
  
### Parameters  
 *T*  
 Your class, derived from `IRowsetInfoImpl`.  
  
 *PropClass*  
 A user-definable property class that defaults to *T*. 

## Requirements  
 **Header:** altdb.h   
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetProperties](#getproperties)|Returns the current settings of all properties supported by the rowset.|  
|[GetReferencedRowset](#getreferencedrowset)|Returns an interface pointer to the rowset to which a bookmark applies.|  
|[GetSpecification](#getspecification)|Returns an interface pointer on the object (command or session) that created this rowset.|  
  
## Remarks  
 A mandatory interface on rowsets. This class implements the rowset properties by using the [property set map](../../data/oledb/begin-propset-map.md) defined in your command class. Although the rowset class appears to be using the command class' property sets, the rowset is supplied with its own copy of the run-time properties, when it is created by a command or session object.  
  
## <a name="getproperties"></a> IRowsetInfoImpl::GetProperties
Returns the current settings for properties in the `DBPROPSET_ROWSET` group.  
  
### Syntax  
  
```cpp
STDMETHOD (GetProperties )(const ULONG cPropertyIDSets,  
   const DBPROPIDSET rgPropertyIDSets[],  
   ULONG* pcPropertySets,  
   DBPROPSET** prgPropertySets);  
```  
  
#### Parameters  
 See [IRowsetInfo::GetProperties](https://msdn.microsoft.com/library/ms719611.aspx) in the *OLE DB Programmer's Reference*. 

## <a name="getreferencedrowset"></a> IRowsetInfoImpl::GetReferencedRowset
Returns an interface pointer to the rowset to which a bookmark applies.  
  
### Syntax  
  
```cpp
STDMETHOD (GetReferencedRowset )(DBORDINAL iOrdinal,  
   REFIID riid,  
   IUnknown** ppReferencedRowset);  
```  
  
#### Parameters  
 See [IRowsetInfo::GetReferencedRowset](https://msdn.microsoft.com/library/ms721145.aspx) in the *OLE DB Programmer's Reference*. The *iOrdinal* parameter must be a bookmark column. 

## <a name="getspecification"></a> IRowsetInfoImpl::GetSpecification
Returns an interface pointer on the object (command or session) that created this rowset.  
  
### Syntax  
  
```cpp
STDMETHOD (GetSpecification )(REFIID riid,  
   IUnknown** ppSpecification);  
```  
  
#### Parameters  
 See [IRowsetInfo::GetSpecification](https://msdn.microsoft.com/library/ms716746.aspx) in the *OLE DB Programmer's Reference*.  
  
### Remarks  
 Use this method with [IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md) to retrieve properties from the data source object.  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)