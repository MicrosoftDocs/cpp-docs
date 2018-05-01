---
title: "-APPCONTAINER | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /APPCONTAINER
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-APPCONTAINER](https://docs.microsoft.com/cpp/build/reference/appcontainer).  
  
  
Marks an executable that must run in an app container—for example, a [!INCLUDE[win8_appname_long](../../includes/win8-appname-long-md.md)] or Universal Windows app.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## Remarks  
 An executable that has the **/APPCONTAINER** option set can only be run in an app container, which is the process-isolation environment introduced in Windows 8. For [!INCLUDE[win8_appname_long](../../includes/win8-appname-long-md.md)] and Universal Windows apps, this option must be set.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)   
 [What's a Universal Windows App?](http://go.microsoft.com/fwlink/p/?LinkID=522074)

