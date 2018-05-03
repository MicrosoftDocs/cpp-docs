---
title: "IDBCreateCommandImpl::CreateCommand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IDBCreateCommandImpl.CreateCommand", "CreateCommand", "IDBCreateCommandImpl::CreateCommand"]
dev_langs: ["C++"]
helpviewer_keywords: ["CreateCommand method"]
ms.assetid: 50ffbf8b-2c07-4bcb-96c5-ffce4519c7f7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IDBCreateCommandImpl::CreateCommand
Creates a new command and returns the requested interface.  
  
## Syntax  
  
```cpp
      STDMETHOD(CreateCommand)(IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppvCommand);  
```  
  
#### Parameters  
 See [IDBCreateCommand::CreateCommand](https://msdn.microsoft.com/en-us/library/ms709772.aspx) in the *OLE DB Programmer's Reference*.  
  
 Some parameters correspond to *OLE DB Programmer's Reference* parameters of different names, which are described in **IDBCreateCommand::CreateCommand**:  
  
|OLE DB Template parameters|*OLE DB Programmer's Reference* parameters|  
|--------------------------------|------------------------------------------------|  
|*ppvCommand*|*ppCommand*|  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBCreateCommandImpl Class](../../data/oledb/idbcreatecommandimpl-class.md)