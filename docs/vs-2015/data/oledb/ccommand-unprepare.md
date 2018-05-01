---
title: "CCommand::Unprepare | Microsoft Docs"
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
  - "Unprepare"
  - "CCommand.Unprepare"
  - "CCommand::Unprepare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unprepare method"
ms.assetid: 4fe59988-fe51-4c7c-a156-72b68e3d642b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::Unprepare
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CCommand::Unprepare](https://docs.microsoft.com/cpp/data/oledb/ccommand-unprepare).  
  
  
Discards the current command execution plan.  
  
## Syntax  
  
```  
  
HRESULT CCommandBase::Unprepare( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method wraps the OLE DB method [ICommandPrepare::Unprepare](https://msdn.microsoft.com/library/ms719635.aspx).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)

