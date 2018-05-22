---
title: "Compiler Error C2443 | Microsoft Docs"
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
  - "C2443"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2443"
ms.assetid: 315330d5-24bc-4193-a531-0642095be58f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2443
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2443](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2443).  
  
  
operand size conflict  
  
 The instruction requires operands to be the same size.  
  
 The following sample generates C2443:  
  
```  
// C2443.cpp  
// processor: x86  
short var;  
int main() {  
   __asm xchg ax,bl   // C2443  
   __asm mov al,red   // C2443  
   __asm mov al,BYTE PTR var   // OK  
}  
```

