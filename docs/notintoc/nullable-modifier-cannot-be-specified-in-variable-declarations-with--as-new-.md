---
title: "Nullable modifier cannot be specified in variable declarations with &#39;As New&#39;"
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
  - "bc33109"
  - "vbc33109"
helpviewer_keywords: 
  - "BC33109"
ms.assetid: 135def20-3535-4239-bffb-43208d1b3f63
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
# Nullable modifier cannot be specified in variable declarations with &#39;As New&#39;
The nullable type modifier (?) has been included in a variable declaration where `As New` has been specified. The following example causes this error:  
  
```vb#  
Dim num? As New ExampleStructure  
```  
  
 **Error ID:** BC33109  
  
### To correct this error  
  
1.  Remove the `New` keyword from the nullable variable declaration, as shown in the following example:  
  
    ```vb#  
    Dim num? As ExampleStructure  
    ```  
  
## See Also  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)