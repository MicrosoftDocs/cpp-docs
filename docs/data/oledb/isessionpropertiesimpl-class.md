---
title: "ISessionPropertiesImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ISessionPropertiesImpl", "ISessionPropertiesImpl::GetProperties", "ISessionPropertiesImpl.GetProperties", "GetProperties", "ISessionPropertiesImpl.SetProperties", "SetProperties", "ISessionPropertiesImpl::SetProperties"]
dev_langs: ["C++"]
helpviewer_keywords: ["ISessionPropertiesImpl class", "GetProperties method", "SetProperties method"]
ms.assetid: ca0ba254-c7dc-4c52-abec-cf895a0c6a63
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ISessionPropertiesImpl Class
Provides an implementation of the [ISessionProperties](https://msdn.microsoft.com/library/ms713721.aspx) interface.  
  
## Syntax

```cpp
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ISessionPropertiesImpl :  
   public ISessionProperties,    
   public CUtlProps<PropClass>  
```  
  
### Parameters  
 *T*  
 Your class, derived from `ISessionPropertiesImpl`.  
  
 *PropClass*  
 A user-definable property class that defaults to *T*.  

## Requirements  
 **Header:** atldb.h  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetProperties](#getproperties)|Returns the list of properties in the Session property group that are currently set on the session.|  
|[SetProperties](#setproperties)|Sets properties in the Session property group.|  
  
## Remarks  
 A mandatory interface on sessions. This class implements session properties by calling a static function defined by the [property set map](../../data/oledb/begin-propset-map.md). The property set map should be specified in your session class.  
  
## <a name="getproperties"></a> ISessionPropertiesImpl::GetProperties
Returns the list of properties in the `DBPROPSET_SESSION` property group that are currently set on the session.  
  
### Syntax  
  
```cpp
STDMETHOD(GetProperties)(ULONG cPropertyIDSets,   
   const DBPROPIDSET rgPropertyIDSets[],   
   ULONG * pcPropertySets,   
   DBPROPSET ** prgPropertySets);  
```  
  
#### Parameters  
 See [ISessionProperties::GetProperties](https://msdn.microsoft.com/library/ms723643.aspx) in the *OLE DB Programmer's Reference*. 

## <a name="setproperties"></a> ISessionPropertiesImpl::SetProperties
Sets properties in the `DBPROPSET_SESSION` property group.  
  
### Syntax  
  
```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]);  
```  
  
#### Parameters  
 See [ISessionProperties::SetProperties](https://msdn.microsoft.com/library/ms714405.aspx) in the *OLE DB Programmer's Reference*.  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)