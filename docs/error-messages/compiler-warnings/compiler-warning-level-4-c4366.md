---
title: "Compiler Warning (level 4) C4366 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4366"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4366"
ms.assetid: 65d2942f-3741-42f4-adf2-4920d5a055ca
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning (level 4) C4366
The result of the unary 'operator' operator may be unaligned  
  
 If a structure member could ever be unaligned because of packing, the compiler will warn when that member's address is assigned to an aligned pointer. By default, all pointers are aligned.  
  
 To resolve C4366, either change the alignment of the structure or declare the pointer with the [__unaligned](../../cpp/unaligned.md) keyword.  
  
 For more information, see __unaligned and [pack](../../preprocessor/pack.md).  
  
## Example  
 The following sample generates C4366.  
  
```  
// C4366.cpp  
// compile with: /W4 /c  
// processor: IPF x64  
#pragma pack(1)  
struct X {  
   short s1;  
   int s2;  
};  
  
int main() {  
   X x;  
   short * ps1 = &x.s1;   // OK  
   int * ps2 = &x.s2;   // C4366  
}  
```