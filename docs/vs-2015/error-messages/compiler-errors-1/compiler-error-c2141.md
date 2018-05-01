---
title: "Compiler Error C2141 | Microsoft Docs"
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
  - "C2141"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2141"
ms.assetid: 10cf770f-0500-4220-ac90-a863b7ea5fe6
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2141
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2141](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2141).  
  
  
array size overflow  
  
 An array exceeds the 2GB limit. Reduce the size of the array.  
  
## Example  
 The following sample generates C2141.  
  
```  
// C2141.cpp  
// processor: IPF  
class A {  
   short m_n;  
};  
  
int main()  
{  
   A* pA = (A*)(-1);  
   pA = new A[0x8000000000000001];   // C2141  
  
   A* pA2 = (A*)(-1);  
   pA2 = new A[0x80000000000000F];   // OK  
}  
```

