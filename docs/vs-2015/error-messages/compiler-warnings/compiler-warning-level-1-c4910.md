---
title: "Compiler Warning (level 1) C4910 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4910"
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4910
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4910](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4910).  
  
  
identifier\>' : '__declspec(dllexport)' and 'extern' are incompatible on an explicit instantiation  
  
 The explicit template instantiation named *\<identifier>* is modified by both the `__declspec(dllexport)` and `extern` keywords. However, these keywords are mutually exclusive. The `__declspec(dllexport)` keyword means instantiate the template class, while the `extern` keyword means do not automatically instantiate the template class.  
  
## See Also  
 [Explicit Instantiation](../../cpp/explicit-instantiation.md)   
 [dllexport, dllimport](../../cpp/dllexport-dllimport.md)   
 [General Rules and Limitations](../../cpp/general-rules-and-limitations.md)

