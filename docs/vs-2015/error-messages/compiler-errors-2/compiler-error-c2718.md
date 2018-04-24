---
title: "Compiler Error C2718 | Microsoft Docs"
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
  - "C2718"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2718"
ms.assetid: 78cc71f8-c142-46fc-9aed-970635d74f0c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2718
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2718](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2718).  
  
  
parameter': actual parameter with __declspec(align('#')) won't be aligned  
  
 The [align](../../cpp/align-cpp.md) `__declspec` modifier is not permitted on function parameters.  
  
 The following sample generates C2718:  
  
```  
// C2718.cpp  
typedef struct __declspec(align(32)) AlignedStruct  {   
   int i;   
} AlignedStruct;  
  
void f2(int i, ...);  
  
void f4() {  
   AlignedStruct as;  
  
   f2(0, as);   // C2718, actual parameter is aligned  
}  
```

