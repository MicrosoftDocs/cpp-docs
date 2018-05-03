---
title: "CCommand::Unprepare | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["Unprepare", "CCommand.Unprepare", "CCommand::Unprepare"]
dev_langs: ["C++"]
helpviewer_keywords: ["Unprepare method"]
ms.assetid: 4fe59988-fe51-4c7c-a156-72b68e3d642b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CCommand::Unprepare
Discards the current command execution plan.  
  
## Syntax  
  
```cpp
HRESULT CCommandBase::Unprepare() throw();  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method wraps the OLE DB method [ICommandPrepare::Unprepare](https://msdn.microsoft.com/en-us/library/ms719635.aspx).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)