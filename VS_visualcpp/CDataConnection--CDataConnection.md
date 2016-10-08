---
title: "CDataConnection::CDataConnection"
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
ms.assetid: ac25c9a0-44d3-4083-b13f-76c07772e12d
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
# CDataConnection::CDataConnection
Instantiates and initializes a `CDataConnection` object.  
  
## Syntax  
  
```  
  
      CDataConnection();   
CDataConnection(  
   const CDataConnection &ds  
);  
```  
  
#### Parameters  
 `ds`  
 [in] A reference to an existing data connection.  
  
## Remarks  
 The first override creates a new `CDataConnection` object with default settings.  
  
 The second override creates a new `CDataConnection` object with settings equivalent to the data connection object you specify.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../VS_visualcpp/CDataConnection-Class.md)