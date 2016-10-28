---
title: "XML comment has a tag with a &#39;cref&#39; attribute &#39;&lt;attribute&gt;&#39; that could not be resolved"
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
  - "bc42309"
  - "vbc42309"
helpviewer_keywords: 
  - "BC42309"
ms.assetid: c9f3cfa5-565f-48bf-8616-cfb25d24f89e
caps.latest.revision: 19
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
# XML comment has a tag with a &#39;cref&#39; attribute &#39;&lt;attribute&gt;&#39; that could not be resolved
XML comment has a tag with a 'cref' attribute \<attribute> that could not be resolved. XML comment will be ignored.  
  
 Tags can have a `cref` attribute that designates a link to another element of the XML by specifying the relative name of the identifier. At compile time, the compiler replaces the value with the qualified XML identifier for the value pointed at by the user. The compiler uses its normal resolution rules for finding the type or member.  
  
 **Error ID:** BC42309  
  
### To correct this error  
  
-   Validate the `cref` attribute so that it points to a valid code element.  
  
## See Also  
 [How to: Create XML Documentation](../Topic/How%20to:%20Create%20XML%20Documentation%20in%20Visual%20Basic.md)   
 [XML Comment Tags](../Topic/Recommended%20XML%20Tags%20for%20Documentation%20Comments%20\(Visual%20Basic\).md)