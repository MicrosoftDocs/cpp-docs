---
title: "IConvertTypeImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.IConvertTypeImpl<T>", "IConvertTypeImpl", "ATL.IConvertTypeImpl", "ATL::IConvertTypeImpl", "ATL::IConvertTypeImpl<T>", "IConvertTypeImpl.CanConvert", "CanConvert", "IConvertTypeImpl::CanConvert"]
dev_langs: ["C++"]
helpviewer_keywords: ["IConvertTypeImpl class", "CanConvert method"]
ms.assetid: 7f81e79e-7d3f-4cbe-b93c-d632a94b15f6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IConvertTypeImpl Class

Provides an implementation of the [IConvertType](/previous-versions/windows/desktop/ms715926) interface.  
  
## Syntax

```cpp
template <class T>  
class ATL_NO_VTABLE IConvertTypeImpl   
   : public IConvertType, public CConvertHelper  
```  
  
### Parameters  

*T*<br/>
Your class, derived from `IConvertTypeImpl`.  

## Requirements  

**Header:** atldb.h  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[CanConvert](#canconvert)|Gives information on the availability of type conversions on a command or on a rowset.|  
  
## Remarks  

This interface is mandatory on commands, rowsets, and index rowsets. `IConvertTypeImpl` implements the interface by delegating to the conversion object supplied by OLE DB.  

## <a name="canconvert"></a> IConvertTypeImpl::CanConvert

Gives information on the availability of type conversions on a command or on a rowset.  
  
### Syntax  
  
```cpp
STDMETHOD(CanConvert)(DBTYPE wFromType,   
   DBTYPE wToType,   
   DBCONVERTFLAGS dwConvertFlags);  
```  
  
#### Parameters  

See [IConvertType::CanConvert](/previous-versions/windows/desktop/ms711224) in the *OLE DB Programmer's Reference*.  
  
### Remarks  

Uses OLE DB data conversion in `MSADC.DLL`.  
  
## See Also  

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)