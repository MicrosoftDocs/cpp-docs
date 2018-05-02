---
title: "ICommandImpl::GetDBSession | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ICommandImpl::GetDBSession", "GetDBSession", "ICommandImpl.GetDBSession"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetDBSession method"]
ms.assetid: e5b1cb13-453f-4698-90bf-f6bfe6814a54
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandImpl::GetDBSession
Returns an interface pointer to the session that created the command.  
  
## Syntax  
  
```cpp
      STDMETHOD (GetDBSession) (REFIID riid,  
   IUnknown** ppSession);  
```  
  
#### Parameters  
 See [ICommand::GetDBSession](https://msdn.microsoft.com/en-us/library/ms719622.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Useful for retrieving properties from the session.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandImpl Class](../../data/oledb/icommandimpl-class.md)