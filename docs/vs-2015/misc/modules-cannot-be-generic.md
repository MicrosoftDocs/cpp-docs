---
title: "Modules cannot be generic | Microsoft Docs"
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
  - "BC32073"
  - "vbc32073"
helpviewer_keywords: 
  - "BC32073"
ms.assetid: 47246e2b-51d4-4a10-a3ac-bc77b44fa2ca
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Modules cannot be generic
A `Module` statement uses the `Of` keyword to introduce generic type parameters.  
  
 You can define and use generic classes, structures, interfaces, procedures, and delegates. You cannot define generic modules.  
  
 **Error ID:** BC32073  
  
### To correct this error  
  
1.  Remove the `Of` keyword from the `Module` statement.  
  
2.  If you want the functionality of a generic module, the closest approximation is a generic class. Use a [Class Statement](http://msdn.microsoft.com/library/f2664f38-eb5a-4d4b-a374-1d041521fb6c) instead of a `Module` statement.  
  
## See Also  
 [Module Statement](http://msdn.microsoft.com/library/a1243afc-14a5-45df-95d5-51118aeac362)   
 [Of](http://msdn.microsoft.com/library/0db8f65c-65af-4089-ab7f-6fcfecb60444)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [How to: Define a Class That Can Provide Identical Functionality on Different Data Types](http://msdn.microsoft.com/library/a914adf8-e68f-4819-a6b1-200d1cf1c21c)