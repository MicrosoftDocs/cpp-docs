---
title: "CDataConnection::operator CDataSource&amp;"
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
ms.assetid: 852faeee-f1b1-4465-9828-b261d1edf022
caps.latest.revision: 9
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
# CDataConnection::operator CDataSource&amp;
Returns a reference to the contained `CDataSource` object.  
  
## Syntax  
  
```  
  
operator const CDataSource&() throw( );  
  
```  
  
## Remarks  
 This operator returns a reference to the contained `CDataSource` object, allowing you to pass a `CDataConnection` object where a `CDataSource` reference is expected.  
  
## Example  
 If you have a function (such as `func` below) that takes a `CDataSource` reference, you can use **CDataSource&** to pass a `CDataConnection` object instead.  
  
 [!CODE [NVC_OLEDB_Consumer#3](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#3)]  
  
 [!CODE [NVC_OLEDB_Consumer#4](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#4)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../VS_visualcpp/CDataConnection-Class.md)   
 [CDataConnection::operator CDataSource*](../VS_visualcpp/CDataConnection--operator-CDataSource-.md)