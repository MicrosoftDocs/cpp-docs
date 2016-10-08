---
title: "DEFINE_COMMAND_EX"
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
ms.assetid: d3e2ef20-1455-46d2-8499-8ab84bbb90a4
caps.latest.revision: 7
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
# DEFINE_COMMAND_EX
Specifies the command that will be used to create the rowset when using the [CCommand](../VS_visualcpp/CCommand-Class.md) class. Supports Unicode and ANSI applications.  
  
## Syntax  
  
```  
  
DEFINE_COMMAND_EX(  
x  
,   
wszCommand  
 )  
  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record (command) class.  
  
 `wszCommand`  
 [in] The command string that will be used to create the rowset when using [CCommand](../VS_visualcpp/CCommand-Class.md).  
  
## Remarks  
 The command string that you specify will be used as the default if you do not specify command text in the [CCommand::Open](../VS_visualcpp/CCommand--Open.md) method.  
  
 This macro accepts Unicode strings, regardless of the application type. This macro is preferred over [DEFINE_COMMAND](../VS_visualcpp/DEFINE_COMMAND.md) because it supports Unicode as well as ANSI applications.  
  
## Example  
 See [BOOKMARK_ENTRY](../VS_visualcpp/BOOKMARK_ENTRY.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)