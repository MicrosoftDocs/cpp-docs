---
title: "IDBInitializeImpl::Uninitialize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IDBInitializeImpl.Uninitialize", "Uninitialize", "IDBInitializeImpl::Uninitialize"]
dev_langs: ["C++"]
helpviewer_keywords: ["Uninitialize method"]
ms.assetid: ba37fc74-f84e-40b0-abb6-41bddd505269
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IDBInitializeImpl::Uninitialize
Places the data source object in an uninitialized state by freeing internal resources such as the property support.  
  
## Syntax  
  
```cpp
      STDMETHOD(Uninitialize)(void);  
```  
  
## Remarks  
 See [IDBInitialize::Uninitialize](https://msdn.microsoft.com/en-us/library/ms719648.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBInitializeImpl Class](../../data/oledb/idbinitializeimpl-class.md)   
 [IDBInitializeImpl::Initialize](../../data/oledb/idbinitializeimpl-initialize.md)