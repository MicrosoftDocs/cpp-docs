---
title: "&#39;Throw&#39; operand must derive from &#39;System.Exception&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30665"
  - "bc30665"
helpviewer_keywords: 
  - "BC30665"
ms.assetid: 7c228087-39ea-4b30-a410-6ba711e67e5e
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
 [Throw Statement](http://msdn.microsoft.com/library/a6e07406-5c8a-4498-87a2-8339f3651d62)   
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [Exception Class in Visual Basic](http://msdn.microsoft.com/en-us/9aac396f-34ca-4afb-8e6c-e523cb690ba9)   
 [Exception and Error Handling in Visual Basic](http://msdn.microsoft.com/en-us/3e351e73-cf23-40ab-8b60-05794160529e)