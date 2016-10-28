---
title: "Specifiers are not valid on &#39;AddHandler&#39;, &#39;RemoveHandler&#39; and &#39;RaiseEvent&#39; methods"
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
  - "vbc31135"
  - "bc31135"
helpviewer_keywords: 
  - "BC31135"
ms.assetid: 2eaf5a6f-d201-4f9b-bcdf-12170cb44791
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
# Specifiers are not valid on &#39;AddHandler&#39;, &#39;RemoveHandler&#39; and &#39;RaiseEvent&#39; methods
The `AddHandler`, `RemoveHandler`, and `RaiseEvent` method declarations cannot be modified with keywords such as `Public` or `ReadOnly`. Only modifiable declarations can contain such keywords.  
  
 **Error ID:** BC31135  
  
### To correct this error  
  
-   Remove the keyword from the method declaration.  
  
## See Also  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler - delete](assetId:///fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler - delete](assetId:///35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent - delete](assetId:///7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [NIB Keywords (Visual Basic)](assetId:///3a6fda51-6ade-4862-a407-1c305c3906ec)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)