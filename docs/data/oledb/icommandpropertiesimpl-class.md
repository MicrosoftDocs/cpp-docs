---
title: "ICommandPropertiesImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ICommandPropertiesImpl", "ATL.ICommandPropertiesImpl", "ATL::ICommandPropertiesImpl", "ICommandPropertiesImpl::GetProperties", "ICommandPropertiesImpl.GetProperties", "GetProperties", "ICommandPropertiesImpl.SetProperties", "ICommandPropertiesImpl::SetProperties", "SetProperties"]
dev_langs: ["C++"]
helpviewer_keywords: ["ICommandPropertiesImpl class", "GetProperties method", "SetProperties method"]
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandPropertiesImpl Class
Provides an implementation of the [ICommandProperties](https://msdn.microsoft.com/library/ms723044.aspx) interface.  
  
## Syntax

```cpp
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ICommandPropertiesImpl   
   : public ICommandProperties, public CUtlProps<PropClass>  
```  
  
### Parameters  
 *T*  
 Your class, derived from  
  
 *PropClass*  
 Your properties class.  

## Requirements  
 **Header:** atldb.h  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetProperties](#getproperties)|Returns the list of properties in the Rowset property group that are currently requested for the rowset.|  
|[SetProperties](#setproperties)|Sets properties in the Rowset property group.|  
  
## Remarks  
 This is mandatory on commands. The implementation is provided by a static function defined by the [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) macro.  

## <a name="getproperties"></a> ICommandPropertiesImpl::GetProperties
Returns all the requested property sets using the command's property map.  
  
### Syntax  
  
```cpp
STDMETHOD(GetProperties)(const ULONG cPropertyIDSets,   
   const DBPROPIDSET rgPropertyIDSets[],   
   ULONG * pcPropertySets,   
   DBPROPSET ** prgPropertySets);  
```  
  
#### Parameters  
 See [ICommandProperties::GetProperties](https://msdn.microsoft.com/library/ms723119.aspx) in the *OLE DB Programmer's Reference*.  
  
### Remarks  
 See [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## <a name="setproperties"></a> ICommandPropertiesImpl::SetProperties
Sets properties for the command object.  
  
### Syntax  
  
```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]);  
```  
  
#### Parameters  
 See [ICommandProperties::SetProperties](https://msdn.microsoft.com/library/ms711497.aspx) in the *OLE DB Programmer's Reference*.  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)