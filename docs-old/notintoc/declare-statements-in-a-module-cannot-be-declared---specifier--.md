---
title: "Declare statements in a Module cannot be declared &#39;&lt;specifier&gt;&#39;"
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
  - "vbc30786"
  - "bc30786"
helpviewer_keywords: 
  - "BC30786"
ms.assetid: 488b855f-72ea-414b-bffc-a5b63e97d289
caps.latest.revision: 11
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
# Declare statements in a Module cannot be declared &#39;&lt;specifier&gt;&#39;
A `Declare` declaration has a specifier that is not valid within a `Module` declaration. Modules can never be instantiated, do not support inheritance, and cannot implement interfaces.  
  
 **Error ID:** BC30786  
  
### To correct this error  
  
-   Remove the specifier.  
  
## See Also  
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [Module Statement](../Topic/Module%20Statement.md)