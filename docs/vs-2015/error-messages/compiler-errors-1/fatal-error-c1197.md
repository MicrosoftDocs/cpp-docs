---
title: "Fatal Error C1197 | Microsoft Docs"
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
  - "C1197"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1197"
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1197
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1197](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1197).  
  
  
cannot reference 'mscorlib.dll_1' as the program has already referenced 'mscorlib.dll_2'  
  
 The compiler is matched to a version of the common language runtime.  However, an attempt was made to reference a version of a common language runtime file from a previous version.  
  
 To resolve this error, only reference files from the version of the common language runtime that shipped with the version of Visual C++ you are compiling with.  
  
## Example  
 The following sample generates C1197:  
  
```  
// C1197.cpp  
// compile with: /clr /c  
// processor: x86  
#using "C:\Windows\Microsoft.NET\Framework\v1.1.4322\mscorlib.dll"   // C1197  
// try the following line instead  
// #using "mscorlib.dll"  
```

