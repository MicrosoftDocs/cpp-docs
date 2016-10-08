---
title: "CCommand::Unprepare"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 4fe59988-fe51-4c7c-a156-72b68e3d642b
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CCommand::Unprepare
Discards the current command execution plan.  
  
## Syntax  
  
```  
  
HRESULT CCommandBase::Unprepare( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method wraps the OLE DB method [ICommandPrepare::Unprepare](https://msdn.microsoft.com/en-us/library/ms719635.aspx).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../VS_visualcpp/CCommand-Class.md)