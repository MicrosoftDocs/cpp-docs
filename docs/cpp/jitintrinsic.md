---
title: "jitintrinsic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-language"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "jitintrinsic"
  - "jitintrinsic_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec keyword [C++], jitintrinsic"
  - "jitintrinsic __declspec modifier"
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# jitintrinsic
Marks the function as significant to the 64-bit common language runtime. This is used on certain functions in Microsoft-provided libraries.  
  
## Syntax  
  
```  
__declspec(jitintrinsic)  
```  
  
## Remarks  
 `jitintrinsic` adds a MODOPT (<xref:System.Runtime.CompilerServices.IsJitIntrinsic>) to a function signature.  
  
 Users are discouraged from using this `__declspec` modifier, as unexpected results can occur.  
  
## See Also  
 [__declspec](../cpp/declspec.md)   
 [Keywords](../cpp/keywords-cpp.md)