---
title: "Ignoring -noconfig option because it was specified in a response file | Microsoft Docs"
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
  - "vbc2025"
  - "bc2025"
helpviewer_keywords: 
  - "BC2025"
ms.assetid: 87fb393d-e17f-4e50-8d98-d9dfeba30c3e
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Ignoring /noconfig option because it was specified in a response file
The `/noconfig` option tells the compiler not to compile with the Vbc.rsp file. However, the compiler processes the Vbc.rsp file before processing any other response files, so the compiler cannot honor the `/noconfig` option in a response file.  
  
 **Error ID:** BC2025  
  
### To correct this error  
  
1.  Remove the `/noconfig` option from the response file.  
  
2.  Specify the `/noconfig` option when invoking the command-line compiler.  
  
## See Also  
 [/noconfig](http://msdn.microsoft.com/library/a7405067-bd21-4171-adf4-a126fa3ad6c3)   
 [@ (Specify Response File)](http://msdn.microsoft.com/library/a6847eaa-e5f9-4303-9421-45b55484b9ca)