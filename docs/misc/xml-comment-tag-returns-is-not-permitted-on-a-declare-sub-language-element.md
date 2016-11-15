---
title: "XML comment tag &#39;returns&#39; is not permitted on a &#39;declare sub&#39; language element | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc42315"
  - "vbc42315"
helpviewer_keywords: 
  - "BC42315"
ms.assetid: 55ba3e8a-ba7f-42e3-a4a7-b22844e72564
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# XML comment tag &#39;returns&#39; is not permitted on a &#39;declare sub&#39; language element
XML comment tag 'returns' is not permitted on a 'declare sub' language element. XML comment will be ignored.  
  
 An XML comment for a `Declare Sub` declaration cannot contain a `<`returns`>` tag.  
  
 **Error ID:** BC42315  
  
### To correct this error  
  
-   Remove the unsupported `<`returns`>` tag.  
  
## See Also  
 [\<returns>](../Topic/%3Creturns%3E%20\(Visual%20Basic\).md)   
 [XML Comment Tags](/dotnet/articles/visual-basic/language-reference/xmldoc/recommended-xml-tags-for-documentation-comments)   
 [Documenting Your Code with XML](/dotnet/articles/visual-basic/programming-guide/program-structure/documenting-your-code-with-xml)   
 [Declare Statement](/dotnet/articles/visual-basic/language-reference/statements/declare-statement)