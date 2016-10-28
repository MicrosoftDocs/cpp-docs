---
title: "The &#39;?&#39; character cannot be used here"
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
  - "bc36637"
  - "vbc36637"
helpviewer_keywords: 
  - "BC36637"
ms.assetid: a54c46e7-8fd8-4941-9fce-72f2b41b5e24
caps.latest.revision: 6
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
# The &#39;?&#39; character cannot be used here
The '?' character can be used to specify that a value type or structure is nullable. Its use in other circumstances is limited. For example, the following code will cause this exception.  
  
```  
' Not valid.  
' #Const found = True?  
```  
  
 **Error ID:** BC36637  
  
### To correct this error  
  
-   Remove the '?' character from the declaration.  
  
## See Also  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)