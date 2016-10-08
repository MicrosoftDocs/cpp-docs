---
title: "-APPCONTAINER (Windows Store App)"
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
H1: /APPCONTAINER (Windows Store App)
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
caps.latest.revision: 6
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
# -APPCONTAINER (Windows Store App)
Specifies whether the linker creates an executable image that must be run in an app container.  
  
## Syntax  
  
```  
/APPCONTAINER[:NO]  
```  
  
## Remarks  
 By default, /APPCONTAINER is off.  
  
 This option modifies an executable to indicate whether the app must be run in the appcontainer process-isolation environment. Specify /APPCONTAINER for an app that must run in the appcontainer environment—for example, a Windows Store app. (The option is set automatically in Visual Studio when you create a Windows Store app from a template.) For a desktop app, specify /APPCONTAINER:NO or just omit the option.  
  
 The /APPCONTAINER option was introduced in Windows 8.  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Command Line** property page.  
  
5.  In **Additional Options**, enter `/APPCONTAINER` or `/APPCONTAINER:NO`.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)