---
title: "Structures cannot have &#39;Inherits&#39; statements | Microsoft Docs"
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
  - "vbc30628"
  - "bc30628"
helpviewer_keywords: 
  - "BC30628"
ms.assetid: 131ecce1-6378-43fb-af0b-cdf5a0350cec
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Structures cannot have &#39;Inherits&#39; statements
Unlike classes, structures do not support inheritance.  
  
 **Error ID:** BC30628  
  
### To correct this error  
  
-   Remove the `Inherits` statement from the structure.  
  
-   Redesign your application to use classes instead.  
  
## See Also  
 [Structures](http://msdn.microsoft.com/library/55e86462-5e99-4d33-8018-6d097ca491b2)   
 [Structures and Classes](http://msdn.microsoft.com/library/a221e74a-ffcf-4bdc-a0f6-a088a9bf26cc)