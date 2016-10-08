---
title: "CDataConnection::operator bool (OLE DB)"
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
ms.assetid: e0791faf-2ed2-4dbb-9e68-3b9b5da2b7a7
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
# CDataConnection::operator bool (OLE DB)
Determines whether the current session is open or not.  
  
## Syntax  
  
```  
  
operator bool( ) throw( );  
  
```  
  
## Remarks  
 Returns a `bool` (C++ data type) value. **true** means the current session is open; **false** means the current session is closed.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../VS_visualcpp/CDataConnection-Class.md)   
 [CDataConnection::operator BOOL](../VS_visualcpp/CDataConnection--operator-BOOL.md)