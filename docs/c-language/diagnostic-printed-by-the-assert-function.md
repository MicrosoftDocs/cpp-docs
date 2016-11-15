---
title: "Diagnostic Printed by the assert Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 78b64200-520d-40da-9a61-71553f411d4f
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Diagnostic Printed by the assert Function
**ANSI 4.2** The diagnostic printed by and the termination behavior of the **assert** function  
  
 The **assert** function prints a diagnostic message and calls the **abort** routine if the expression is false (0). The diagnostic message has the form  
  
 **Assertion failed**: *expression***, file** *filename***, line** *linenumber*  
  
 where filename is the name of the source file and linenumber is the line number of the assertion that failed in the source file. No action is taken if expression is true (nonzero).  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)