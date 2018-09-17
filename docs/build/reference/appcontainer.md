---
title: "-APPCONTAINER | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/APPCONTAINER"]
dev_langs: ["C++"]
helpviewer_keywords: ["APPCONTAINER editbin option", "-APPCONTAINER editbin option", "/APPCONTAINER editbin option"]
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /APPCONTAINER
Marks an executable that must run in an app container—for example, a Microsoft Store or Universal Windows app.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## Remarks  
 An executable that has the **/APPCONTAINER** option set can only be run in an app container, which is the process-isolation environment introduced in Windows 8. For Microsoft Store and Universal Windows apps, this option must be set.  
  
## See Also  
[EDITBIN Options](../../build/reference/editbin-options.md)<br/>
[What's a Universal Windows App?](/windows/uwp/get-started/universal-application-platform-guide)