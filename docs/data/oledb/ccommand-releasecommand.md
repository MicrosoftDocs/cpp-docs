---
title: "CCommand::ReleaseCommand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CCommand.ReleaseCommand", "ReleaseCommand", "CCommand::ReleaseCommand"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReleaseCommand method"]
ms.assetid: 3b58230c-13d5-45c5-b43e-bb013ecc3019
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CCommand::ReleaseCommand
Releases the parameter accessor, then releases the command itself.  
  
## Syntax  
  
```cpp
void CCommandBase::ReleaseCommand() throw();  
  
```  
  
## Remarks  
 `ReleaseCommand` is used in conjunction with **Close**. See [Close](../../data/oledb/ccommand-close.md) for usage details.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)   
 [CCommand::Close](../../data/oledb/ccommand-close.md)