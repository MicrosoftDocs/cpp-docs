---
title: "MSBuild Error MSB3125 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GenerateManifest.FileAssociationsNoEntryPoint"
helpviewer_keywords: 
  - "MSB3125"
ms.assetid: f8a08b05-1946-4788-8577-ceefde785e95
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3125
**MSB3125: The application is using file associations but has no EntryPoint build parameter.**  
  
 This error occurs when no entryPoint build parameter is present. When you configure an application to use file associations, there must be an entryPoint build parameter in the application manifest. The \<entryPoint> element identifies the assembly that should be executed when the application is run.  
  
### To correct this error  
  
-   Set the [\<entryPoint> Element](http://msdn.microsoft.com/library/10ad3083-10c1-4189-a870-9bba2eab244f) to a valid value. For more information, see [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243).  
  
## See Also  
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)   
 [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243)