---
title: "Compiler Error C2505 | Microsoft Docs"
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
  - "C2505"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2505"
ms.assetid: b19f5c53-399d-425e-90db-fe3ca9b40858
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2505
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2505](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2505).  
  
  
symbol' : '__declspec(modifer)' can only be applied to declarations or definitions of global objects or static data members  
  
 A `__declspec` modifier that is designed to only be used at global scope was used in a function.  
  
 For more information, see [appdomain](../../cpp/appdomain.md) and [process](../../cpp/process.md).  
  
 The following sample generates C2505:  
  
```  
// C2505.cpp  
// compile with: /clr  
  
// OK  
__declspec(process) int ii;  
__declspec(appdomain) int jj;  
  
int main() {  
   __declspec(process) int i;   // C2505  
   __declspec(appdomain) int j;   // C2505  
}  
```

