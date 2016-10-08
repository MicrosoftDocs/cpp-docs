---
title: "CDataConnection::operator CSession*"
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
ms.assetid: 0b0feede-5c3e-4835-be5b-03651597014d
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
# CDataConnection::operator CSession*
Returns a pointer to the contained `CSession` object.  
  
## Syntax  
  
```  
  
operator const CSession*() throw( );  
  
```  
  
## Remarks  
 This operator returns a pointer to the contained `CSession` object, allowing you to pass a `CDataConnection` object where a `CSession` pointer is expected.  
  
## Example  
 See [operator CSession&](../VS_visualcpp/CDataConnection--operator-CSession-.md) for a usage example.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../VS_visualcpp/CDataConnection-Class.md)   
 [CDataConnection::operator CSession&](../VS_visualcpp/CDataConnection--operator-CSession-.md)