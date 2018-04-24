---
title: "Interface &#39;&lt;interfacename&gt;&#39; is not implemented by this class | Microsoft Docs"
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
  - "bc31035"
  - "vbc31035"
helpviewer_keywords: 
  - "BC31035"
ms.assetid: 99ddabb5-20e0-4cf6-a8d4-1ca91f3c7511
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Interface &#39;&lt;interfacename&gt;&#39; is not implemented by this class
A member of this class or structure attempts to implement a member of an interface that the class or structure does not implement.  
  
 **Error ID:** BC31035  
  
### To correct this error  
  
-   Add an `Implements` statement at the beginning of the class or structure so that it implements the appropriate interface.  
  
-   Remove the `Implements` keyword from the member that causes this error.  
  
## See Also  
 [Interfaces](http://msdn.microsoft.com/library/61b06674-12c9-430b-be68-cc67ecee1f5b)   
 [Implements](http://msdn.microsoft.com/library/5252cdf9-964d-4fc6-af0f-0449b7126b5a)   
 [Implements Statement](http://msdn.microsoft.com/library/1fafb83f-f55a-4215-8ea9-681e8622613d)