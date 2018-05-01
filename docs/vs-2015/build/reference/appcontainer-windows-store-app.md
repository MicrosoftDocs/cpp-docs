---
title: "-APPCONTAINER (Windows Store App) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /APPCONTAINER (Windows Store App)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-APPCONTAINER (Windows Store App)](https://docs.microsoft.com/cpp/build/reference/appcontainer-windows-store-app).  
  
  
Specifies whether the linker creates an executable image that must be run in an app container.  
  
## Syntax  
  
```  
/APPCONTAINER[:NO]  
```  
  
## Remarks  
 By default, /APPCONTAINER is off.  
  
 This option modifies an executable to indicate whether the app must be run in the appcontainer process-isolation environment. Specify /APPCONTAINER for an app that must run in the appcontainer environment—for example, a [!INCLUDE[win8_appstore_long](../../includes/win8-appstore-long-md.md)] app. (The option is set automatically in Visual Studio when you create a [!INCLUDE[win8_appstore_long](../../includes/win8-appstore-long-md.md)] app from a template.) For a desktop app, specify /APPCONTAINER:NO or just omit the option.  
  
 The /APPCONTAINER option was introduced in [!INCLUDE[win8](../../includes/win8-md.md)].  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../../misc/how-to-open-project-property-pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Command Line** property page.  
  
5.  In **Additional Options**, enter `/APPCONTAINER` or `/APPCONTAINER:NO`.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

