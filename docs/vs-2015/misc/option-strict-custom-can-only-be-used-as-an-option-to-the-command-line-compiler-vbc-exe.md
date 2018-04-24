---
title: "Option Strict Custom can only be used as an option to the command-line compiler (vbc.exe) | Microsoft Docs"
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
  - "vbc31141"
  - "bc31141"
helpviewer_keywords: 
  - "BC31141"
ms.assetid: c32ae8ff-aacc-40b4-960a-6f2d5d246671
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict Custom can only be used as an option to the command-line compiler (vbc.exe)
The `Option Strict` statement takes only `On` and `Off` as arguments; `Option Strict Custom` is not allowed.  
  
 Use the `/optionstrict:custom` compiler option to warn when strict language semantics are not respected.  
  
 **Error ID:** BC31141  
  
### To correct this error  
  
1.  Remove `Option Strict Custom` from the source code.  
  
2.  Specify the `/optionstrict:custom` option. For more information, see [/optionstrict](http://msdn.microsoft.com/library/c7b10086-0fa4-49db-b3c8-4ae0db5957da).  
  
## See Also  
 [Option \<keyword> Statement](http://msdn.microsoft.com/library/6b2f41c4-2403-43b6-8a14-94a3775e5b47)   
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)   
 [/optionstrict](http://msdn.microsoft.com/library/c7b10086-0fa4-49db-b3c8-4ae0db5957da)