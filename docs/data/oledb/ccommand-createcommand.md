---
title: "CCommand::CreateCommand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CCommand.CreateCommand", "CreateCommand", "CCommand::CreateCommand"]
dev_langs: ["C++"]
helpviewer_keywords: ["CreateCommand method"]
ms.assetid: 3652a313-07a1-40ec-82d6-fc7182f2a6f6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CCommand::CreateCommand
Creates a new command.  
  
## Syntax  
  
```cpp
HRESULT CCommandBase::CreateCommand(const CSession& session) throw ();  
```  
  
#### Parameters  
 `session`  
 [in] A `CSession` object to be associated with the new command.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method creates a command using the specified session object.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)