---
title: "CCommand::ReleaseCommand"
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
ms.assetid: 3b58230c-13d5-45c5-b43e-bb013ecc3019
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
# CCommand::ReleaseCommand
Releases the parameter accessor, then releases the command itself.  
  
## Syntax  
  
```  
  
void CCommandBase::ReleaseCommand( ) throw( );  
  
```  
  
## Remarks  
 `ReleaseCommand` is used in conjunction with **Close**. See [Close](../VS_visualcpp/CCommand--Close.md) for usage details.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../VS_visualcpp/CCommand-Class.md)   
 [CCommand::Close](../VS_visualcpp/CCommand--Close.md)