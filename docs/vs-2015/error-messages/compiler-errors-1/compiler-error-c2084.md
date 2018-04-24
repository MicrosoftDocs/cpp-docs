---
title: "Compiler Error C2084 | Microsoft Docs"
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
  - "C2084"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2084"
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2084
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2084](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2084).  
  
  
function 'function' already has a body  
  
 The function has already been defined.  
  
 In previous versions of Visual C++,  
  
-   The compiler would accept multiple template specializations that resolved to the same actual type, although the additional definitions would never be available. The compiler will now detect these multiple definitions  
  
-   __int32 and int were treated as separate types. The compiler now treats \__int32 as a synonym for int. This means that the compiler will detect multiple definitions if a function is overloaded on both \__int32 and int and give an error.  
  
 The following sample generates C2084:  
  
```  
// C2084.cpp  
void Func(int);  
void Func(int) {}   // define function  
void Func(int) {}   // C2084 second definition  
```  
  
 Possible resolution:  
  
```  
// C2084b.cpp  
// compile with: /c  
void Func(int);  
void Func(int) {}  
```

