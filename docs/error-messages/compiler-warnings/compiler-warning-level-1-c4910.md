---
title: "Compiler Warning (level 1) C4910 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["C4910"]
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4910
'\<identifier>' : '__declspec(dllexport)' and 'extern' are incompatible on an explicit instantiation  
  
 The explicit template instantiation named *\<identifier>* is modified by both the `__declspec(dllexport)` and `extern` keywords. However, these keywords are mutually exclusive. The `__declspec(dllexport)` keyword means instantiate the template class, while the `extern` keyword means do not automatically instantiate the template class.  
  
## See Also  
 [Explicit Instantiation](../../cpp/explicit-instantiation.md)   
 [dllexport, dllimport](../../cpp/dllexport-dllimport.md)   
 [General Rules and Limitations](../../cpp/general-rules-and-limitations.md)