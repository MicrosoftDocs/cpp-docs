---
title: "IDBCreateCommandImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IDBCreateCommandImpl"
  - "IDBCreateCommandImpl"
  - "ATL.IDBCreateCommandImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDBCreateCommandImpl class"
ms.assetid: eac4755e-1668-42e1-958e-a35620c385ae
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDBCreateCommandImpl Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IDBCreateCommandImpl Class](https://docs.microsoft.com/cpp/data/oledb/idbcreatecommandimpl-class).  
  
  
Provides an implementation of the [IDBCreateCommand](https://msdn.microsoft.com/library/ms711625.aspx) interface.  
  
## Syntax  
  
```  
template <class T, class CommandClass >  
class ATL_NO_VTABLE IDBCreateCommandImpl   
   : public IDBCreateCommand  
```  
  
#### Parameters  
 `T`  
 The session object derived from `IDBCreateCommandImpl`.  
  
 `CommandClass`  
 Your command class.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[CreateCommand](../../data/oledb/idbcreatecommandimpl-createcommand.md)|Creates a new command.|  
  
## Remarks  
 An optional interface on the session object to obtain a new command.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)

