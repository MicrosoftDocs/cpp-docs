---
title: "process | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["process_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__declspec keyword [C++], process", "process __declspec keyword"]
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# process
Specifies that your managed application process should have a single copy of a particular global variable, static member variable, or static local variable shared across all application domains in the process. This was primarily intended to be used when compiling with **/clr:pure**, which is now deprecated and will be removed in a future version of the compiler. When compiling with **/clr**, global and static variables are per process by default (do not need to use `__declspec(process)`.  
  
 Only a global variable, a static member variable, or a static local variable of native type can be marked with `__declspec(process)`.  
  
  
 `process` is only valid when compiling with [/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
 If you want each application domain to have its own copy of a global variable, use [appdomain](../cpp/appdomain.md).  
  
 See [Application Domains and Visual C++](../dotnet/application-domains-and-visual-cpp.md) for more information.  
  
## See Also  
 [__declspec](../cpp/declspec.md)   
 [Keywords](../cpp/keywords-cpp.md)