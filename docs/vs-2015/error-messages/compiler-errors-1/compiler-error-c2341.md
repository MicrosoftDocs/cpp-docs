---
title: "Compiler Error C2341 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2341"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2341"
ms.assetid: aa2a7da5-e1c8-4225-9939-5bdc50158f31
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2341
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2341](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2341).  
  
  
section name' : segment must be defined using #pragma data_seg, code_seg or section prior to use  
  
 An [allocate](../../cpp/allocate.md) statement refers to a segment not yet defined by [code_seg](../../preprocessor/code-seg.md), [data_seg](../../preprocessor/data-seg.md), or [section](../../preprocessor/section.md) pragmas.  
  
 The following sample generates C2341:  
  
```  
// C2341.cpp  
// compile with: /c  
__declspec(allocate(".test"))   // C2341  
int j = 1;  
```  
  
 Possible resolution:  
  
```  
// C2341b.cpp  
// compile with: /c  
#pragma data_seg(".test")  
__declspec(allocate(".test"))  
int j = 1;  
```

