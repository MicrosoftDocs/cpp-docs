---
title: "Command does not accept additional switches or arguments if the switch &quot;-stop&quot; has been specified. | Microsoft Docs"
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
  - "vs.message.0x800A00CD"
  - "vs.message.VS_E_NOTVALIDWITHSTOP"
ms.assetid: 1dea2450-034e-4a7f-b959-2060811329b6
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Command does not accept additional switches or arguments if the switch &quot;/stop&quot; has been specified.
This error generally occurs when the `/stop` switch has been entered, along with additional switches for the **Find in Files** or **Replace in Files** commands.  
  
### To correct this error  
  
1.  If you want to stop the current Find in Files operation, enter:  
  
    ```  
    Edit.FindinFiles /stop.  
    ```  
  
2.  If you want to stop the current Replace in Files operation, enter:  
  
    ```  
    Edit.ReplaceinFiles /stop  
    ```  
  
3.  If you want to start a new Find in Files or Replace in Files operation, re-enter the command, omitting `/stop`.  
  
## See Also  
 [Replace In Files Command](http://msdn.microsoft.com/library/f116066a-4f65-4f2c-94ef-12cbd8cfb598)   
 [Find in Files Command](http://msdn.microsoft.com/library/2fc78bfe-b339-4599-97f9-4cafd8a194d9)   
 [Visual Studio Commands](http://msdn.microsoft.com/library/76ffa394-ee89-4629-aba9-1a62b72e6cc1)