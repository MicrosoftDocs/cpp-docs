---
title: "Diagnostic Printed by the assert Function | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Diagnostic Printed by the assert Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Diagnostic Printed by the assert Function](https://docs.microsoft.com/cpp/c-language/diagnostic-printed-by-the-assert-function).  
  
ANSI 4.2** The diagnostic printed by and the termination behavior of the **assert** function  
  
 The **assert** function prints a diagnostic message and calls the **abort** routine if the expression is false (0). The diagnostic message has the form  
  
 **Assertion failed**: *expression***, file** *filename***, line** *linenumber*  
  
 where filename is the name of the source file and linenumber is the line number of the assertion that failed in the source file. No action is taken if expression is true (nonzero).  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)





