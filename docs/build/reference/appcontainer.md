---
title: "-APPCONTAINER | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/APPCONTAINER"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "APPCONTAINER editbin option"
  - "-APPCONTAINER editbin option"
  - "/APPCONTAINER editbin option"
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /APPCONTAINER
Marks an executable that must run in an app container—for example, a [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] or Universal Windows app.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## Remarks  
 An executable that has the **/APPCONTAINER** option set can only be run in an app container, which is the process-isolation environment introduced in Windows 8. For [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] and Universal Windows apps, this option must be set.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)   
 [What's a Universal Windows App?](http://go.microsoft.com/fwlink/p/?LinkID=522074)