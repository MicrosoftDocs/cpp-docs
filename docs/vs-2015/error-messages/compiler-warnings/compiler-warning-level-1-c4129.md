---
title: "Compiler Warning (level 1) C4129 | Microsoft Docs"
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
  - "C4129"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4129"
ms.assetid: a4190c64-4bfb-48fd-8e98-52720bc0d878
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4129
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4129](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4129).  
  
  
character' : unrecognized character escape sequence  
  
 The `character` following a backslash (\\) in a character or string constant is not recognized as a valid escape sequence. The backslash is ignored and not printed. The character following the backslash is printed.  
  
 To print a single backslash, specify a double backslash (\\\\).  
  
 The C++ standard, in section 2.13.2 discusses escape sequences.  
  
 The following sample generates C4129:  
  
```  
// C4129.cpp  
// compile with: /W1  
int main() {  
   char array1[] = "\/709";   // C4129  
   char array2[] = "\n709";   // OK  
}  
```

