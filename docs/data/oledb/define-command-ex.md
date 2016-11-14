---
title: "DEFINE_COMMAND_EX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DEFINE_COMMAND_EX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DEFINE_COMMAND_EX macro"
ms.assetid: d3e2ef20-1455-46d2-8499-8ab84bbb90a4
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# DEFINE_COMMAND_EX
Specifies the command that will be used to create the rowset when using the [CCommand](../../data/oledb/ccommand-class.md) class. Supports Unicode and ANSI applications.  
  
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
 [in] The command string that will be used to create the rowset when using [CCommand](../../data/oledb/ccommand-class.md).  
  
## Remarks  
 The command string that you specify will be used as the default if you do not specify command text in the [CCommand::Open](../../data/oledb/ccommand-open.md) method.  
  
 This macro accepts Unicode strings, regardless of the application type. This macro is preferred over [DEFINE_COMMAND](../../data/oledb/define-command.md) because it supports Unicode as well as ANSI applications.  
  
## Example  
 See [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)