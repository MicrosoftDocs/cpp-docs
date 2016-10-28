---
title: "&#39;Throw&#39; operand must derive from &#39;System.Exception&#39;"
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
  - "vbc30665"
  - "bc30665"
helpviewer_keywords: 
  - "BC30665"
ms.assetid: 7c228087-39ea-4b30-a410-6ba711e67e5e
caps.latest.revision: 9
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
# &#39;Throw&#39; operand must derive from &#39;System.Exception&#39;
The argument supplied to `Throw` must either be an instance of `System.Exception` or an instance of a class derived from `System.Exception`.  
  
 **Error ID:** BC30665  
  
### To correct this error  
  
-   Use an argument derived from `System.Exception`, as in the following example.  
  
    ```  
    Throw New System.Exception("This is an error.")  
    ```  
  
## See Also  
 [Throw Statement](../Topic/Throw%20Statement%20\(Visual%20Basic\).md)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Exception Class in Visual Basic](assetId:///9aac396f-34ca-4afb-8e6c-e523cb690ba9)   
 [Exception and Error Handling in Visual Basic](assetId:///3e351e73-cf23-40ab-8b60-05794160529e)