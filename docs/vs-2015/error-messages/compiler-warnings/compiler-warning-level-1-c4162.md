---
title: "Compiler Warning (level 1) C4162 | Microsoft Docs"
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
  - "C4162"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4162"
ms.assetid: 21ae3c92-501d-4689-ad7d-13753cb65eff
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4162
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4162](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4162).  
  
  
identifier' : no function with C linkage found  
  
 A function with C linkage is declared but cannot be found.  
  
 To resolve this warning, compile in a .c file (invoke the C compiler).  If you must invoke the C++ compiler, place extern "C" before the function declaration.  
  
 The following sample generates C4162  
  
```  
// C4162.cpp  
// compile with: /c /W1  
unsigned char _bittest(long* a, long b);  
#pragma intrinsic (_bittest)   // C4162  
  
int main() {  
   bool bit;  
   long num = 78002;  
   bit = _bittest(&num, 5);  
}  
```  
  
 Possible resolution:  
  
```  
// C4162b.cpp  
// compile with: /c  
extern "C"  
unsigned char _bittest(long* a, long b);  
#pragma intrinsic (_bittest)  
  
int main() {  
   bool bit;  
   long num = 78002;  
   bit = _bittest(&num, 5);  
}  
```

