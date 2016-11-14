---
title: "Command requires one argument. | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_INCORRECTPARAMCOUNT1"
  - "vs.message.0x800A00C3"
ms.assetid: b4d98e6d-6970-42fb-b1de-43f2e952fb9d
caps.latest.revision: 7
author: "mikeblome"
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
# Command requires one argument.
This error generally occurs when not enough information has been entered for the command or because an incorrect combination of arguments was used.  
  
 For example, if `alias` `/delete sample1 sample2` has been entered for the `alias` command, this error will appear because alias `/delete` can only take one alias name, not two. Alias names do not contain spaces, so the **Find/Command** box and **Command** window interpret `sample1 sample2` as two different alias names.  
  
### To correct this error  
  
1.  Check the documentation for the correct syntax for the command and try again.  
  
## See Also  
 [Visual Studio Commands](/visual-studio/ide/reference/visual-studio-commands)