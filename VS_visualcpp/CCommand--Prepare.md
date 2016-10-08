---
title: "CCommand::Prepare"
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
ms.assetid: f0e473fc-2f7a-4d29-96c2-1328dc21e702
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
# CCommand::Prepare
Validates and optimizes the current command.  
  
## Syntax  
  
```  
  
      HRESULT CCommandBase::Prepare(  
   ULONG cExpectedRuns = 0   
) throw( );  
```  
  
#### Parameters  
 *cExpectedRuns*  
 [in] The number of times you expect to execute the command.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method wraps the OLE DB method [ICommandPrepare::Prepare](https://msdn.microsoft.com/en-us/library/ms718370.aspx).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../VS_visualcpp/CCommand-Class.md)