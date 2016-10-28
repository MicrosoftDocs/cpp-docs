---
title: "&lt;name&gt; is not a valid project name."
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_INVALIDPROJECTNAME"
  - "vs.message.0x800A00D2"
ms.assetid: 2e8f3e58-f5f0-4f12-bae9-3acc58c0dca6
caps.latest.revision: 7
ms.author: "mblome"
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
# &lt;name&gt; is not a valid project name.
This error generally occurs when the `File.NewProject` command is issued from the **Command** window or **Find/Command** box and an incorrect project name is entered for *projectname*.  
  
### To correct this error  
  
1.  Verify that the project name does not contain extra spaces and is not a reserved word such as NUL, CON, or AUX.  
  
     —or—  
  
     Re-type the command, omitting the project name.  
  
## See Also  
 [Command Window](../Topic/Command%20Window.md)