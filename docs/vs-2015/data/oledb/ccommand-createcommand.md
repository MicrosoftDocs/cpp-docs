---
title: "CCommand::CreateCommand | Microsoft Docs"
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
  - "CCommand.CreateCommand"
  - "CreateCommand"
  - "CCommand::CreateCommand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateCommand method"
ms.assetid: 3652a313-07a1-40ec-82d6-fc7182f2a6f6
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::CreateCommand
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CCommand::CreateCommand](https://docs.microsoft.com/cpp/data/oledb/ccommand-createcommand).  
  
  
Creates a new command.  
  
## Syntax  
  
```  
  
      HRESULT CCommandBase::CreateCommand(  
   const CSession& session   
) throw ( );  
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

