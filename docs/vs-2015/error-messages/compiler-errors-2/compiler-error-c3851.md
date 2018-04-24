---
title: "Compiler Error C3851 | Microsoft Docs"
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
  - "C3851"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3851"
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3851
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3851](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3851).  
  
  
char': a universal-character-name cannot designate a character in the basic character set  
  
 In code compiled as C++, you cannot use a universal character name that represents a character in the basic source character set outside of a string or character literal. For more information, see [Character Sets](../../cpp/character-sets2.md). In code compiled as C, you cannot use a universal character name for characters in the range 0x20-0x7f, inclusive, except for 0x24 ('$'), 0x40 ('@'), or 0x60 ('`').  
  
 The following samples generate C3851, and show how to fix it:  
  
```cpp  
// C3851.cpp  
int main()  
{  
   int test1_\u0041 = 0;   // C3851, \u0041 = 'A' in basic character set  
   int test2_A = 0;        // OK  
}  
```

