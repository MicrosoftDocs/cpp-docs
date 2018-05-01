---
title: "CCommand::ReleaseCommand | Microsoft Docs"
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
  - "CCommand.ReleaseCommand"
  - "ReleaseCommand"
  - "CCommand::ReleaseCommand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseCommand method"
ms.assetid: 3b58230c-13d5-45c5-b43e-bb013ecc3019
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::ReleaseCommand
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CCommand::ReleaseCommand](https://docs.microsoft.com/cpp/data/oledb/ccommand-releasecommand).  
  
  
Releases the parameter accessor, then releases the command itself.  
  
## Syntax  
  
```  
  
void CCommandBase::ReleaseCommand( ) throw( );  
  
```  
  
## Remarks  
 `ReleaseCommand` is used in conjunction with **Close**. See [Close](../../data/oledb/ccommand-close.md) for usage details.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)   
 [CCommand::Close](../../data/oledb/ccommand-close.md)

