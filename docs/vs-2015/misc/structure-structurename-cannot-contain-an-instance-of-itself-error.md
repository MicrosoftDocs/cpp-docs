---
title: "Structure &#39;&lt;structurename&gt;&#39; cannot contain an instance of itself: &lt;error&gt; | Microsoft Docs"
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
  - "vbc30294"
  - "bc30294"
helpviewer_keywords: 
  - "BC30294"
ms.assetid: 17780e11-2425-4860-9345-b5db019d2bf3
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Structure &#39;&lt;structurename&gt;&#39; cannot contain an instance of itself: &lt;error&gt;
A structure declares a variable and initializes it with an instance of itself.  
  
 A structure can contain instances of other structures, but not an internal instance of itself. An attempt to do so would lead to infinite recursion.  
  
 **Error ID:** BC30294  
  
### To correct this error  
  
1.  Check the spelling of the initialization expression in the declaration statement.  
  
2.  If you intend to create another instance of the same structure, you must declare and create it outside the structure.  
  
## See Also  
 [Structures](http://msdn.microsoft.com/library/55e86462-5e99-4d33-8018-6d097ca491b2)   
 [Structure Statement](http://msdn.microsoft.com/library/9bd1deea-2a89-4cdc-812c-6dcbb947c391)