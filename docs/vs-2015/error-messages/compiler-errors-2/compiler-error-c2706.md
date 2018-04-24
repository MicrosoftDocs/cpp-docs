---
title: "Compiler Error C2706 | Microsoft Docs"
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
  - "C2706"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2706"
ms.assetid: e18da924-c42d-4b09-8e29-f4e0382d7dc6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2706
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2706](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2706).  
  
  
illegal __except without matching \__try (missing '}' in \__try block?)  
  
 The compiler did not find a closing brace for a `__try` block.  
  
 The following sample generates C2706:  
  
```  
// C2706.cpp  
int main() {  
   __try {  
      void f();  
   // C2706  } missing here  
   __except(GetExceptionCode() == 0x0) {  
   }  
}  
```

