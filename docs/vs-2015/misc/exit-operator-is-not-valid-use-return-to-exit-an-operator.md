---
title: "&#39;Exit Operator&#39; is not valid. Use &#39;Return&#39; to exit an Operator | Microsoft Docs"
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
  - "bc33008"
  - "vbc33008"
helpviewer_keywords: 
  - "BC33008"
ms.assetid: 8c44456b-8fd2-4168-ad8c-b6da129242ba
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit Operator&#39; is not valid. Use &#39;Return&#39; to exit an Operator
An `Exit Operator` statement appears in an `Operator` procedure.  
  
 You must use a [Return Statement](http://msdn.microsoft.com/library/ac86e7f0-5a67-42c3-9834-0e0381efa3ec) to return from an `Operator` procedure. The [Exit Statement](http://msdn.microsoft.com/library/760bfb32-5c3f-4bdb-a432-9a6001c92db7) does not accept the `Operator` keyword, and the `End Operator` statement does not return control to the calling code.  
  
 **Error ID:** BC33008  
  
### To correct this error  
  
-   Replace the `Exit Operator` statement with a `Return` statement.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)