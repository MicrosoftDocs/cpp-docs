---
title: "ICommandPropertiesImpl::GetProperties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ICommandPropertiesImpl::GetProperties", "ICommandPropertiesImpl.GetProperties", "GetProperties"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetProperties method"]
ms.assetid: 1bee5f1b-bd08-435a-956a-e4cebcdf5d5e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandPropertiesImpl::GetProperties
Returns all the requested property sets using the command's property map.  
  
## Syntax  
  
```cpp
      STDMETHOD(GetProperties)(const ULONG cPropertyIDSets,   
   const DBPROPIDSET rgPropertyIDSets[],   
   ULONG * pcPropertySets,   
   DBPROPSET ** prgPropertySets);  
```  
  
#### Parameters  
 See [ICommandProperties::GetProperties](https://msdn.microsoft.com/en-us/library/ms723119.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 See [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandPropertiesImpl Class](../../data/oledb/icommandpropertiesimpl-class.md)   
 [ICommandPropertiesImpl::SetProperties](../../data/oledb/icommandpropertiesimpl-setproperties.md)