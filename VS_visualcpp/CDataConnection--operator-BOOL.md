---
title: "CDataConnection::operator BOOL"
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
ms.assetid: ad0bea7f-61ff-47f7-8127-32a31e3e9b9d
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
# CDataConnection::operator BOOL
Determines whether the current session is open or not.  
  
## Syntax  
  
```  
  
operator BOOL( ) throw( );  
  
```  
  
## Remarks  
 Returns **BOOL** (MFC typedef) value. **TRUE** means the current session is open; **FALSE** means the current session is closed.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../VS_visualcpp/CDataConnection-Class.md)   
 [CDataConnection::operator bool](../VS_visualcpp/CDataConnection--operator-bool--OLE-DB-.md)