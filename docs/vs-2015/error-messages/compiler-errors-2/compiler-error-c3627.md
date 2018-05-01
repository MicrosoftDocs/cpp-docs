---
title: "Compiler Error C3627 | Microsoft Docs"
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
  - "C3627"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3627"
ms.assetid: 905ad0a0-8c49-4187-b66e-b375f5a1fae5
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3627
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3627](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3627).  
  
  
Only a value type can be boxed  
  
 Only value classes can be boxed.  
  
 The following sample generates C3627:  
  
```  
// C3627.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__value class vA {  
};  
  
__gc class A {  
};  
  
int main()  
{  
   A* a;  
   __box(a);   // C3627  
  
   // box a value type  
   vA va;  
   __box(va);  
}  
```

