---
title: "CDataConnection::Copy"
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
ms.assetid: a3dbd70d-36be-49e0-a527-00e3910a7a56
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
# CDataConnection::Copy
Creates a copy of an existing data connection.  
  
## Syntax  
  
```  
  
      CDataConnection& Copy(   
   const CDataConnection & ds    
) throw( );  
```  
  
#### Parameters  
 `ds`  
 [in] A reference to an existing data connection to copy.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../VS_visualcpp/CDataConnection-Class.md)