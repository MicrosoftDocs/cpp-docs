---
title: "Compiler Warning (level 3) C4633 | Microsoft Docs"
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
  - "C4633"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4633"
ms.assetid: 6d76f268-ba8c-448b-8e83-b903a18b583b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4633
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4633](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4633).  
  
  
XML document comment target: error:  reason  
  
 A name passed to the [\<param>](../../ide/param-visual-cpp.md) tag was not found by the compiler.  
  
 The following sample generates C4633:  
  
```  
// C4633.cpp  
// compile with: /clr /doc /LD /W3  
  
/// Text for class MyClass.  
public ref class MyClass {  
   // C4633 remove line for Int3  
   /// <param name="Int1">Used to indicate status.</param>  
   /// <param name="Int3">Used to indicate status.</param>  
   void MyMethod(int Int1) {  
      Int1 = 0;  
      Int1++;  
   }  
};  
```

