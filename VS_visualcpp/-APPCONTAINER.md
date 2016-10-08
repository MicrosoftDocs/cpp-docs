---
title: "-APPCONTAINER"
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
H1: /APPCONTAINER
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# -APPCONTAINER
Marks an executable that must run in an app container—for example, a Windows 8.x Store or Universal Windows app.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## Remarks  
 An executable that has the **/APPCONTAINER** option set can only be run in an app container, which is the process-isolation environment introduced in Windows 8. For Windows 8.x Store and Universal Windows apps, this option must be set.  
  
## See Also  
 [EDITBIN Options](../VS_visualcpp/EDITBIN-Options.md)   
 [What's a Universal Windows App?](http://go.microsoft.com/fwlink/p/?LinkID=522074)