---
title: "Edit and Continue Errors and Warnings (C#)"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.csharp.enc.error_4001"
  - "vs.csharp.enc.error_4034"
  - "vs.csharp.enc.error_4003"
  - "vs.csharp.enc.error_4026"
  - "vs.csharp.enc.error_4032"
  - "vs.csharp.enc.error_4017"
  - "vs.csharp.enc.error_4053"
  - "vs.csharp.enc.error_4024"
  - "vs.csharp.enc.error_4012"
  - "vs.csharp.enc.error_4066"
  - "vs.csharp.enc.error_4020"
  - "vs.csharp.enc.error_4008"
  - "vs.csharp.enc.error_4033"
  - "vs.csharp.enc.error_4014"
  - "vs.csharp.enc.error_4023"
  - "vs.csharp.enc.error_4011"
  - "vs.csharp.enc.error_4006"
  - "vs.csharp.enc.error_4059"
  - "vs.csharp.enc.error_4015"
  - "vs.csharp.enc.error_4018"
  - "vs.csharp.enc.error_4028"
  - "vs.csharp.enc.error_4013"
  - "vs.csharp.enc.error_4009"
  - "vs.csharp.enc.error_4021"
  - "vs.csharp.enc.error_4065"
  - "vs.csharp.enc.error_4029"
  - "vs.csharp.enc.error_4058"
  - "vs.csharp.enc.error_4019"
  - "vs.csharp.enc.error_4007"
  - "vs.csharp.enc.error_4052"
  - "vs.csharp.enc.error_4025"
  - "vs.csharp.enc.error_4055"
  - "vs.csharp.enc.error_4022"
  - "vs.csharp.enc.error_4002"
  - "vs.csharp.enc.error_4016"
  - "vs.csharp.enc.error_4043"
  - "vs.csharp.enc.error_4027"
  - "vs.csharp.enc.error_4054"
  - "vs.csharp.enc.error_4004"
  - "vs.csharp.enc.error_4010"
  - "vs.csharp.enc.error_4030"
  - "vs.csharp.enc.error_4005"
  - "vs.csharp.enc.error_4035"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "Edit and Continue [C#], errors and warnings"
  - "errors [C#], debugging"
  - "errors [debugger], Edit and Continue"
ms.assetid: c0e12b0a-8009-4a4a-979f-c804a91a5d9b
caps.latest.revision: 11
ms.author: "susanno"
manager: "douge"
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
# Edit and Continue Errors and Warnings (C#)
You have made an edit to a section of code that is not allowed in Visual C# Edit and Continue.  
  
 [!INCLUDE[csharp_current_short](../misc/includes/csharp_current_short_md.md)] Edit and Continue lets you stop program execution in Break mode, make changes to the executing code, and then resume program execution with the newly incorporated changes.  
  
 Declarative code edits that affect the public structure of a class are generally prohibited, and some edits that you might make to a method, property body, or private declarations within a class are not allowed. Whenever possible, Edit and Continue marks code that cannot be edited as light gray and displays an error message.  
  
 For more information about supported edits in Edit and Continue for [!INCLUDE[csharp_current_short](../misc/includes/csharp_current_short_md.md)], see [Supported Code Changes (C#)](../Topic/Supported%20Code%20Changes%20\(C%23\).md). If you need more information about a specific error or warning, you can search or post on the MSDN [Visual C# IDE forum](http://go.microsoft.com/fwlink/?LinkId=214693).  
  
### To correct this error  
  
1.  On the **Debug** menu, choose **Undo** to undo the change.  
  
     -or-  
  
2.  Stop the debugging session, make your edits, and start a new debugging session.  
  
## See Also  
 [Edit and Continue (Visual C#)](../Topic/Edit%20and%20Continue%20\(Visual%20C%23\).md)