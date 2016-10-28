---
title: "&#39;&lt;typename&gt;&#39; must be declared &#39;MustInherit&#39; because it contains methods declared &#39;MustOverride&#39;"
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
  - "vbc31411"
  - "bc31411"
helpviewer_keywords: 
  - "BC31411"
ms.assetid: 5a9f4c57-a4b8-45f5-8273-b7caa689a170
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
# &#39;&lt;typename&gt;&#39; must be declared &#39;MustInherit&#39; because it contains methods declared &#39;MustOverride&#39;
Types that contain `MustOverride` members must be declared `MustInherit`.  
  
 **Error ID:** BC31411  
  
### To correct this error  
  
-   Add the `MustInherit` modifier to the type.  
  
## See Also  
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)