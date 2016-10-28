---
title: "Constant &#39;&lt;constantname&gt;&#39; cannot depend on its own value"
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
  - "bc30500"
  - "vbc30500"
helpviewer_keywords: 
  - "BC30500"
ms.assetid: 0dad89bc-9196-492f-acd9-7777757362f7
caps.latest.revision: 8
ms.author: "billchi"
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
# Constant &#39;&lt;constantname&gt;&#39; cannot depend on its own value
You created a circular dependency in your code, where a constant depends on its own value. For example, `Const a = Const b; Const b = Const a`.  
  
 **Error ID:** BC30500  
  
### To correct this error  
  
1.  Check your code to see where the constant is being evaluated, and modify it accordingly.  
  
## See Also  
 [NOTINBUILD Constants Overview](assetId:///5c7f57fb-48b2-4a2f-afee-79d8e3adf15b)