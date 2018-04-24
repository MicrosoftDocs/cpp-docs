---
title: "&#39;ReadOnly&#39; property must provide a &#39;Get&#39; | Microsoft Docs"
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
  - "bc30126"
  - "vbc30126"
helpviewer_keywords: 
  - "BC30126"
ms.assetid: a522c39e-1f11-45c8-a00b-3546c842909a
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;ReadOnly&#39; property must provide a &#39;Get&#39;
If a property is declared as `ReadOnly`, it must supply a procedure for reading its value.  
  
 **Error ID:** BC30126  
  
### To correct this error  
  
1.  Make sure you include a `Get` procedure between the `Property` statement and the `End Property` statement.  
  
2.  Verify that other procedures within the `Property` declaration are correctly terminated.  
  
## See Also  
 [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38)   
 [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94)