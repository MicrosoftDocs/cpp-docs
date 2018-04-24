---
title: "CCommand::Create | Microsoft Docs"
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
  - "CCommand.Create"
  - "CCommand::Create"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Create method [C++]"
ms.assetid: e4bede7a-68bd-491a-97f4-89b03d45cd24
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::Create
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CCommand::Create](https://docs.microsoft.com/cpp/data/oledb/ccommand-create).  
  
  
Calls [CCommand::CreateCommand](../../data/oledb/ccommand-createcommand.md) to create a command for the specified session, then calls [ICommandText::SetCommandText](https://msdn.microsoft.com/library/ms709825.aspx) to specify the command text.  
  
## Syntax  
  
```  
  
      HRESULT CCommandBase::Create(  
   const CSession& session,   
   LPCWSTR wszCommand,   
   REFGUID guidCommand = DBGUID_DEFAULT  
) throw ( );  
HRESULT CCommandBase::Create(  
   const CSession& session,   
   LPCSTR szCommand,   
   REFGUID guidCommand = DBGUID_DEFAULT  
) throw ( );  
```  
  
#### Parameters  
 `session`  
 [in] A session on which to create the command.  
  
 `wszCommand`  
 [in] A pointer to the Unicode text of the command string.  
  
 `szCommand`  
 [in] A pointer to the ANSI text of the command string.  
  
 `guidCommand`  
 [in] A GUID that specifies the syntax and general rules for the provider to use in parsing the command text. For a description of dialects, see [ICommandText::GetCommandText](https://msdn.microsoft.com/library/ms709825.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 The first form of **Create** takes a Unicode command string. The second form of **Create** takes an ANSI command string (provided for backward compatibility with existing ANSI applications).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)

