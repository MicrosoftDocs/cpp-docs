---
title: "ICommandPropertiesImpl::SetProperties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ICommandPropertiesImpl.SetProperties", "ICommandPropertiesImpl::SetProperties", "SetProperties"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetProperties method"]
ms.assetid: c42132bb-16a9-4e00-aba6-dee785a98488
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandPropertiesImpl::SetProperties
Sets properties for the command object.  
  
## Syntax  
  
```cpp
      STDMETHOD(SetProperties)(ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]);  
```  
  
#### Parameters  
 See [ICommandProperties::SetProperties](https://msdn.microsoft.com/en-us/library/ms711497.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandPropertiesImpl Class](../../data/oledb/icommandpropertiesimpl-class.md)   
 [ICommandPropertiesImpl::GetProperties](../../data/oledb/icommandpropertiesimpl-getproperties.md)