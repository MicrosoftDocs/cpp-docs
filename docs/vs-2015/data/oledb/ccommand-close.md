---
title: "CCommand::Close | Microsoft Docs"
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
  - "CCommand.Close"
  - "CCommand::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close method"
ms.assetid: 4da9c02c-7082-4e47-a0fa-78b546f0f7d2
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::Close
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CCommand::Close](https://docs.microsoft.com/cpp/data/oledb/ccommand-close).  
  
  
Releases the accessor rowset associated with the command.  
  
## Syntax  
  
```  
void Close( );  
```  
  
## Remarks  
 A command uses a rowset, result set accessor, and (optionally) a parameter accessor (unlike tables, which do not support parameters and do not need a parameter accessor).  
  
 When you execute a command, you should call both `Close` and [ReleaseCommand](../../data/oledb/ccommand-releasecommand.md) after the command.  
  
 When you want to execute the same command repeatedly, you should release each result set accessor by calling `Close` before calling `Execute`. At the end of the series, you should release the parameter accessor by calling `ReleaseCommand`. Another common scenario is calling a stored procedure that has output parameters. On many providers (such as the OLE DB provider for SQL Server) the output parameter values will not be accessible until you close the result set accessor. Call `Close` to close the returned rowset and result set accessor, but not the parameter accessor, thus allowing you to retrieve the output parameter values.  
  
## Example  
 The following example shows how you can call `Close` and `ReleaseCommand` when you execute the same command repeatedly.  
  
 [!code-cpp[NVC_OLEDB_Consumer#2](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#2)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)   
 [CCommand::ReleaseCommand](../../data/oledb/ccommand-releasecommand.md)

