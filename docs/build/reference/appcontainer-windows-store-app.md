---
title: "-APPCONTAINER (Windows Store App) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
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
# /APPCONTAINER (Windows Store App)
Specifies whether the linker creates an executable image that must be run in an app container.  
  
## Syntax  
  
```  
/APPCONTAINER[:NO]  
```  
  
## Remarks  
 By default, /APPCONTAINER is off.  
  
 This option modifies an executable to indicate whether the app must be run in the appcontainer process-isolation environment. Specify /APPCONTAINER for an app that must run in the appcontainer environment—for example, a [!INCLUDE[win8_appstore_long](../../build/reference/includes/win8_appstore_long_md.md)] app. (The option is set automatically in Visual Studio when you create a [!INCLUDE[win8_appstore_long](../../build/reference/includes/win8_appstore_long_md.md)] app from a template.) For a desktop app, specify /APPCONTAINER:NO or just omit the option.  
  
 The /APPCONTAINER option was introduced in [!INCLUDE[win8](../../build/reference/includes/win8_md.md)].  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Command Line** property page.  
  
5.  In **Additional Options**, enter `/APPCONTAINER` or `/APPCONTAINER:NO`.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)